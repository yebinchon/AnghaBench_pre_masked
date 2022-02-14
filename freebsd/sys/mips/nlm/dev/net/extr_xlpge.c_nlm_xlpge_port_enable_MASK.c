
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_xlpge_softc {scalar_t__ type; int port; int block; int base_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void
FUNC_2(struct nlm_xlpge_softc *VAR_2)
{
 if ((VAR_2->type != VAR_0) && (VAR_2->type != VAR_1))
  return;
 FUNC_0(VAR_2->base_addr, VAR_2->block, VAR_2->type, VAR_2->port);
 FUNC_1((void *)VAR_2);
}
