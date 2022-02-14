
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct wpi_softc {int temp; int * maxpwr; } ;
struct wpi_power_sample {int power; int index; } ;
struct wpi_power_group {int maxpwr; int temp; struct wpi_power_sample* samples; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int,int,int ,int,int ,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int
FUNC_2(struct wpi_softc *VAR_2, struct wpi_power_group *VAR_3,
    uint8_t VAR_4, int VAR_5, int VAR_6)
{
 struct wpi_power_sample *VAR_7;
 int VAR_8, VAR_9;


 VAR_8 = VAR_3->maxpwr / 2;


 switch (VAR_6) {
 case 130:
  VAR_8 -= VAR_5 ? 5 : 0;
  break;
 case 129:
  VAR_8 -= VAR_5 ? 10 : 7;
  break;
 case 128:
  VAR_8 -= VAR_5 ? 12 : 9;
  break;
 }


 VAR_8 = FUNC_1(VAR_8, VAR_2->maxpwr[VAR_4]);


 for (VAR_7 = VAR_3->samples; VAR_7 < &VAR_3->samples[3]; VAR_7++)
  if (VAR_8 > VAR_7[1].power)
   break;

 VAR_9 = ((VAR_7[0].index) + ((((1 << 19) * (((VAR_8) - (VAR_7[0].power)) * ((VAR_7[1].index) - (VAR_7[0].index)))) / ((VAR_7[1].power) - (VAR_7[0].power)) + (1 << 19) / 2) / (1 << 19)));







 VAR_9 -= (VAR_2->temp - VAR_3->temp) * 11 / 100;


 if (VAR_6 >= VAR_1)
  VAR_9 += 10;


 if (VAR_9 < 0)
  return 0;
 if (VAR_9 > VAR_0)
  return VAR_0;
 return VAR_9;



}
