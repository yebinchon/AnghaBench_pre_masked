
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv {int nv_error; } ;


 int VAR_0 ;
 int FUNC_0 (struct nv const*) ;

int
FUNC_1(const struct nv *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_1);

 return (VAR_1->nv_error);
}
