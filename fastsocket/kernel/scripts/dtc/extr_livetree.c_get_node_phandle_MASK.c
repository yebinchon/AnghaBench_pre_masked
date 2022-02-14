
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {scalar_t__ phandle; } ;
typedef int cell_t ;


 int FUNC_0 (struct node*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int *) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (struct node*,int) ;
 int FUNC_5 (struct node*,char*) ;

cell_t FUNC_6(struct node *VAR_1, struct node *VAR_2)
{
 static cell_t VAR_3 = 1;

 if ((VAR_2->phandle != 0) && (VAR_2->phandle != -1))
  return VAR_2->phandle;

 FUNC_1(! FUNC_5(VAR_2, "linux,phandle"));

 while (FUNC_4(VAR_1, VAR_3))
  VAR_3++;

 VAR_2->phandle = VAR_3;
 FUNC_0(VAR_2,
       FUNC_2("linux,phandle",
        FUNC_3(VAR_0, VAR_3),
        ((void*)0)));

 return VAR_2->phandle;
}
