
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv {int nv_ebuf; scalar_t__ nv_magic; } ;


 int FUNC_0 (struct nv*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nv*) ;

void
FUNC_3(struct nv *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return;

 FUNC_0(VAR_0);

 VAR_0->nv_magic = 0;
 FUNC_1(VAR_0->nv_ebuf);
 FUNC_2(VAR_0);
}
