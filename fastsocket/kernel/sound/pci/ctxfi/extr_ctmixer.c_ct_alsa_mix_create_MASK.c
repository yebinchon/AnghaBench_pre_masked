
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ct_mixer {int dummy; } ;
struct ct_atc {TYPE_1__* card; scalar_t__ mixer; } ;
typedef enum CTALSADEVS { ____Placeholder_CTALSADEVS } CTALSADEVS ;
struct TYPE_2__ {int mixername; } ;


 int FUNC_0 (struct ct_mixer*) ;
 int FUNC_1 (int ,char const*) ;

int FUNC_2(struct ct_atc *VAR_0,
         enum CTALSADEVS VAR_1,
         const char *VAR_2)
{
 int VAR_3;



 VAR_3 = FUNC_0((struct ct_mixer *)VAR_0->mixer);
 if (VAR_3)
  return VAR_3;

 FUNC_1(VAR_0->card->mixername, VAR_2);

 return 0;
}
