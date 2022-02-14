
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_int ;
struct ti_softc {int ti_hwrev; int ti_dev; } ;
struct ti_cmd_desc {int dummy; } ;
struct sockaddr_dl {int dummy; } ;
typedef int caddr_t ;


 int FUNC_0 (struct ti_softc*,int ,int) ;
 scalar_t__ FUNC_1 (struct sockaddr_dl*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static u_int
FUNC_6(void *VAR_4, struct sockaddr_dl *VAR_5, u_int VAR_6)
{
 struct ti_softc *VAR_7 = VAR_4;
 struct ti_cmd_desc VAR_8;
 uint16_t *VAR_9;
 uint32_t VAR_10[2] = {0, 0};

 VAR_9 = (uint16_t *)FUNC_1(VAR_5);

 switch (VAR_7->ti_hwrev) {
 case 129:
  FUNC_0(VAR_7, VAR_2, FUNC_5(VAR_9[0]));
  FUNC_0(VAR_7, VAR_3, (FUNC_5(VAR_9[1]) << 16) | FUNC_5(VAR_9[2]));
  FUNC_2(VAR_0, 0, 0);
  break;
 case 128:
  VAR_10[0] = FUNC_5(VAR_9[0]);
  VAR_10[1] = (FUNC_5(VAR_9[1]) << 16) | FUNC_5(VAR_9[2]);
  FUNC_3(VAR_1, 0, 0, (caddr_t)&VAR_10, 2);
  break;
 default:
  FUNC_4(VAR_7->ti_dev, "unknown hwrev\n");
  return (0);
 }

 return (1);
}
