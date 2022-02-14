
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pem_data {int detached_data; TYPE_1__* os; } ;
typedef int hx509_pem_header ;
typedef int hx509_context ;
struct TYPE_2__ {size_t length; int * data; } ;


 int VAR_0 ;
 char* FUNC_0 (int const*,char*) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int *,void const*,size_t) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int
FUNC_4(hx509_context VAR_1, const char *VAR_2,
    const hx509_pem_header *VAR_3,
    const void *VAR_4 , size_t VAR_5, void *VAR_6)
{
    struct pem_data *VAR_7 = (struct pem_data *)VAR_6;
    const char *VAR_8;

    VAR_7->os->data = FUNC_1(VAR_5);
    if (VAR_7->os->data == ((void*)0))
 return VAR_0;
    FUNC_2(VAR_7->os->data, VAR_4, VAR_5);
    VAR_7->os->length = VAR_5;

    VAR_8 = FUNC_0(VAR_3, "Content-disposition");
    if (VAR_8 && FUNC_3(VAR_8, "detached") == 0)
 VAR_7->detached_data = 1;

    return 0;
}
