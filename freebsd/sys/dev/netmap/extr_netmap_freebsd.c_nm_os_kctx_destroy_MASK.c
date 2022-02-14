
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nm_kctx {scalar_t__ worker; } ;


 int VAR_0 ;
 int FUNC_0 (struct nm_kctx*,int ) ;
 int FUNC_1 (struct nm_kctx*) ;

void
FUNC_2(struct nm_kctx *VAR_1)
{
 if (!VAR_1)
  return;

 if (VAR_1->worker)
  FUNC_1(VAR_1);

 FUNC_0(VAR_1, VAR_0);
}
