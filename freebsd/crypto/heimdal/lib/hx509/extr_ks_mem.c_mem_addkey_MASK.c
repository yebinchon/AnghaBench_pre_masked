
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_data {int ** keys; } ;
typedef int hx509_private_key ;
typedef int hx509_context ;
typedef int hx509_certs ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,char*) ;
 void* FUNC_2 (int **,int) ;

__attribute__((used)) static int
FUNC_3(hx509_context VAR_1,
    hx509_certs VAR_2,
    void *VAR_3,
    hx509_private_key VAR_4)
{
    struct mem_data *VAR_5 = VAR_3;
    void *VAR_6;
    int VAR_7;

    for (VAR_7 = 0; VAR_5->keys && VAR_5->keys[VAR_7]; VAR_7++)
 ;
    VAR_6 = FUNC_2(VAR_5->keys, (VAR_7 + 2) * sizeof(*VAR_5->keys));
    if (VAR_6 == ((void*)0)) {
 FUNC_1(VAR_1, 0, VAR_0, "out of memory");
 return VAR_0;
    }
    VAR_5->keys = VAR_6;
    VAR_5->keys[VAR_7] = FUNC_0(VAR_4);
    VAR_5->keys[VAR_7 + 1] = ((void*)0);
    return 0;
}
