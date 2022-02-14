
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv {int nv_magic; scalar_t__ nv_error; int * nv_ebuf; } ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (struct nv*) ;
 struct nv* FUNC_2 (int) ;

struct nv *
FUNC_3(void)
{
 struct nv *VAR_1;

 VAR_1 = FUNC_2(sizeof(*VAR_1));
 if (VAR_1 == ((void*)0))
  return (((void*)0));
 VAR_1->nv_ebuf = FUNC_0(0);
 if (VAR_1->nv_ebuf == ((void*)0)) {
  FUNC_1(VAR_1);
  return (((void*)0));
 }
 VAR_1->nv_error = 0;
 VAR_1->nv_magic = VAR_0;
 return (VAR_1);
}
