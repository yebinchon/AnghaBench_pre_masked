
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; scalar_t__* diskdev; } ;
typedef TYPE_1__ ips_softc_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(ips_softc_t *VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;
 for(VAR_2 = 0; VAR_2 < VAR_0; VAR_2++){
  if(VAR_1->diskdev[VAR_2]) {
   VAR_3 = FUNC_1(VAR_1->dev, VAR_1->diskdev[VAR_2]);
   if(VAR_3)
    return VAR_3;
  }
 }
 FUNC_0(VAR_1->dev);
 return 0;
}
