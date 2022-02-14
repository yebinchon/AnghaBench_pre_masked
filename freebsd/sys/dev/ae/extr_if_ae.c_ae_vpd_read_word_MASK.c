
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int dev; } ;
typedef TYPE_1__ ae_softc_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_4(ae_softc_t *VAR_7, int VAR_8, uint32_t *VAR_9)
{
 uint32_t VAR_10;
 int VAR_11;

 FUNC_1(VAR_7, VAR_4, 0);




 VAR_10 = 0x100 + VAR_8 * 4;
 FUNC_1(VAR_7, VAR_3, (VAR_10 << VAR_1) &
     VAR_0);
 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  FUNC_2(2000);
  VAR_10 = FUNC_0(VAR_7, VAR_3);
  if ((VAR_10 & VAR_2) != 0)
   break;
 }
 if (VAR_11 == VAR_5) {
  FUNC_3(VAR_7->dev, "timeout reading VPD register %d.\n",
      VAR_8);
  return (VAR_6);
 }
 *VAR_9 = FUNC_0(VAR_7, VAR_4);
 return (0);
}
