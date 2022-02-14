
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_xlpge_softc {int if_flags; scalar_t__ type; int port; int block; int base_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,scalar_t__,int,int,int ,int) ;
 int FUNC_1 (int ,int ,int ,scalar_t__,int,int,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct nlm_xlpge_softc *VAR_2)
{
 if (VAR_2->if_flags & VAR_0) {
  if (VAR_2->type == VAR_1)
   FUNC_0(VAR_2->base_addr,
       VAR_2->block, VAR_2->port, VAR_2->type, 1 ,
       1 , 0 , 1 );
  else
   FUNC_1(VAR_2->base_addr,
       VAR_2->block, VAR_2->port, VAR_2->type, 1 ,
       1 , 0 , 1 );
 } else {
  if (VAR_2->type == VAR_1)
   FUNC_0(VAR_2->base_addr,
       VAR_2->block, VAR_2->port, VAR_2->type, 1 ,
       1 , 0 , 0 );
  else
   FUNC_1(VAR_2->base_addr,
       VAR_2->block, VAR_2->port, VAR_2->type, 1 ,
       1 , 0 , 0 );
 }
}
