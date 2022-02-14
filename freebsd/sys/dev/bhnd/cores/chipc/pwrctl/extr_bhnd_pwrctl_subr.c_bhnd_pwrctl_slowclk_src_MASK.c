
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_pwrctl_softc {int res; int chipc_dev; } ;
typedef int bhnd_clksrc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;


 int VAR_7 ;
 scalar_t__ FUNC_0 (struct bhnd_pwrctl_softc*,int ) ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static bhnd_clksrc
FUNC_3(struct bhnd_pwrctl_softc *VAR_9)
{
 uint32_t VAR_10;
 uint32_t VAR_11;


 if (FUNC_0(VAR_9, VAR_7)) {
  return (FUNC_2(VAR_9->chipc_dev,
      VAR_4));
 } else if (FUNC_0(VAR_9, VAR_8)) {
  VAR_10 = FUNC_1(VAR_9->res, VAR_5);
  VAR_11 = VAR_10 & VAR_6;
 } else {

  VAR_11 = 128;
 }


 switch (VAR_11) {
 case 129:
  return (VAR_1);
 case 130:
  return (VAR_0);
 case 128:
  return (VAR_3);
 default:
  return (VAR_2);
 }
}
