
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_xlpge_softc {int block; scalar_t__ type; int * dev_addr; scalar_t__ port; int base_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,scalar_t__,scalar_t__,int *) ;
 int FUNC_1 (int ,int,scalar_t__,scalar_t__,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct nlm_xlpge_softc *VAR_2)
{

 FUNC_2(VAR_2->dev_addr);

 VAR_2->dev_addr[5] += (VAR_2->block * 4) + VAR_2->port;

 if (VAR_2->type == VAR_0)
  FUNC_0(VAR_2->base_addr, VAR_2->block,
      VAR_2->port, VAR_2->type, VAR_2->dev_addr);
 else if (VAR_2->type == VAR_1)
  FUNC_1(VAR_2->base_addr, VAR_2->block,
      VAR_2->port, VAR_2->type, VAR_2->dev_addr);
}
