
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atalk_iface {int status; int address; TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (struct atalk_iface*) ;
 int FUNC_2 (int) ;

void FUNC_3(struct atalk_iface *VAR_4)
{
 if (VAR_4->dev->type == VAR_1 ||
     VAR_4->dev->type == VAR_2)
  FUNC_1(VAR_4);
 else {
  unsigned int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   FUNC_0(VAR_4->dev, &VAR_4->address);


   FUNC_2(100);

   if (VAR_4->status & VAR_3)
    break;
  }
 }
}
