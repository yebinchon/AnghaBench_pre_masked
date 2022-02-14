
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* ich_arg; int ich_func; } ;
struct nxprtc_softc {int chiptype; int use_timer; TYPE_1__ config_hook; int tmcaddr; int secaddr; int busdev; void* dev; } ;
typedef void* device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void*) ;
 struct nxprtc_softc* FUNC_2 (void*) ;
 int FUNC_3 (void*,char*) ;
 int FUNC_4 (void*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_7)
{
 struct nxprtc_softc *VAR_8;

 VAR_8 = FUNC_2(VAR_7);
 VAR_8->dev = VAR_7;
 VAR_8->busdev = FUNC_1(VAR_7);


 VAR_8->chiptype = FUNC_4(VAR_7);


 switch (VAR_8->chiptype) {
 case 133:
 case 130:
 case 131:
 case 129:
  VAR_8->secaddr = VAR_2;
  VAR_8->tmcaddr = VAR_3;
  VAR_8->use_timer = 1;
  break;
 case 132:
 case 128:
  VAR_8->secaddr = VAR_4;
  VAR_8->tmcaddr = VAR_5;
  VAR_8->use_timer = 1;
  break;
 default:
  FUNC_3(VAR_7, "impossible: cannot determine chip type\n");
  return (VAR_1);
 }





 VAR_8->config_hook.ich_func = VAR_6;
 VAR_8->config_hook.ich_arg = VAR_7;
 if (FUNC_0(&VAR_8->config_hook) != 0)
  return (VAR_0);

 return (0);
}
