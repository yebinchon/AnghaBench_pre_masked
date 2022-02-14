
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfscldevinfo {scalar_t__ nfsdi_refcnt; } ;


 int FUNC_0 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_1(struct nfscldevinfo *VAR_0)
{

 VAR_0->nfsdi_refcnt--;
 if (VAR_0->nfsdi_refcnt == 0)
  FUNC_0(&VAR_0->nfsdi_refcnt);
}
