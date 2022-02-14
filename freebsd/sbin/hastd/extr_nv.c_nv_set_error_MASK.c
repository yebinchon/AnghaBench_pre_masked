
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv {int nv_error; } ;


 int VAR_0 ;
 int FUNC_0 (struct nv*) ;

int
FUNC_1(struct nv *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_1 == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_1);

 VAR_3 = VAR_1->nv_error;
 VAR_1->nv_error = VAR_2;
 return (VAR_3);
}
