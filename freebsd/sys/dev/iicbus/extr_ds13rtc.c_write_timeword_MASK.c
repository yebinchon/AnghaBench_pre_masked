
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ time_t ;
struct ds13rtc_softc {int secaddr; int dev; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct ds13rtc_softc *VAR_1, time_t VAR_2)
{
 uint8_t VAR_3[4];

 FUNC_1(VAR_3, (uint32_t)VAR_2);
 return (FUNC_0(VAR_1->dev, VAR_1->secaddr, VAR_3, sizeof(VAR_3),
     VAR_0));
}
