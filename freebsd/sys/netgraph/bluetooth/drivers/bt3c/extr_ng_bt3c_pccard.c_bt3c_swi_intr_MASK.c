
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int16_t ;
typedef TYPE_1__* bt3c_softc_p ;
struct TYPE_3__ {int status; int dev; int flags; int node; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int *,int *,int *,int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_3)
{
 bt3c_softc_p VAR_4 = (bt3c_softc_p) VAR_3;
 u_int16_t VAR_5;


 if (VAR_4->status & 0x0001) {
  VAR_4->status &= ~0x0001;

  if (FUNC_3(VAR_4->node, ((void*)0), &VAR_1, ((void*)0), 0) != 0)
   FUNC_0(VAR_4->dev, "Could not forward frames!\n");
 }


 if (VAR_4->status & 0x0002) {
  VAR_4->status &= ~0x0002;

  if (FUNC_3(VAR_4->node, ((void*)0), &VAR_2, ((void*)0), 1) != 0)
   FUNC_0(VAR_4->dev, "Could not send frames!\n");
 }


 if (VAR_4->status & 0x0020) {
  VAR_4->status &= ~0x0020;

  FUNC_2(VAR_4, 0x7002, VAR_5);
  VAR_5 &= 0x10;

  if (VAR_5)
   VAR_4->flags |= VAR_0;
  else
   VAR_4->flags &= ~VAR_0;

  FUNC_1(VAR_4->dev, "Antenna %s\n", VAR_5? "OUT" : "IN");
 }
}
