
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_data {scalar_t__* keys; } ;
typedef int * hx509_private_key ;
typedef int hx509_context ;
typedef int hx509_certs ;


 int VAR_0 ;
 int * FUNC_0 (scalar_t__) ;
 int ** FUNC_1 (int,int) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int ,int ,int,char*) ;

__attribute__((used)) static int
FUNC_4(hx509_context VAR_1,
      hx509_certs VAR_2,
      void *VAR_3,
      hx509_private_key **VAR_4)
{
    struct mem_data *VAR_5 = VAR_3;
    int VAR_6;

    for (VAR_6 = 0; VAR_5->keys && VAR_5->keys[VAR_6]; VAR_6++)
 ;
    *VAR_4 = FUNC_1(VAR_6 + 1, sizeof(**VAR_4));
    for (VAR_6 = 0; VAR_5->keys && VAR_5->keys[VAR_6]; VAR_6++) {
 (*VAR_4)[VAR_6] = FUNC_0(VAR_5->keys[VAR_6]);
 if ((*VAR_4)[VAR_6] == ((void*)0)) {
     while (--VAR_6 >= 0)
  FUNC_2(&(*VAR_4)[VAR_6]);
     FUNC_3(VAR_1, 0, VAR_0, "out of memory");
     return VAR_0;
 }
    }
    (*VAR_4)[VAR_6] = ((void*)0);
    return 0;
}
