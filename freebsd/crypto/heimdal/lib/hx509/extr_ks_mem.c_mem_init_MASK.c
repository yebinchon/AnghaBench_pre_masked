
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_data {int * name; } ;
typedef int hx509_lock ;
typedef int hx509_context ;
typedef int hx509_certs ;


 int VAR_0 ;
 struct mem_data* FUNC_0 (int,int) ;
 int FUNC_1 (struct mem_data*) ;
 int * FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(hx509_context VAR_1,
  hx509_certs VAR_2, void **VAR_3, int VAR_4,
  const char *VAR_5, hx509_lock VAR_6)
{
    struct mem_data *VAR_7;
    VAR_7 = FUNC_0(1, sizeof(*VAR_7));
    if (VAR_7 == ((void*)0))
 return VAR_0;
    if (VAR_5 == ((void*)0) || VAR_5[0] == '\0')
 VAR_5 = "anonymous";
    VAR_7->name = FUNC_2(VAR_5);
    if (VAR_7->name == ((void*)0)) {
 FUNC_1(VAR_7);
 return VAR_0;
    }
    *VAR_3 = VAR_7;
    return 0;
}
