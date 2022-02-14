
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* hcb_p ;
struct TYPE_4__ {int features; int pciclk_khz; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2 (hcb_p VAR_3)
{
 int VAR_4 = 0;






 if (!(VAR_3->features & VAR_0)) {
  FUNC_0 (VAR_2, VAR_1);
  VAR_4 = (int) FUNC_1 (VAR_3);
  FUNC_0 (VAR_2, 0);
 }
 VAR_3->pciclk_khz = VAR_4;

 return VAR_4;
}
