
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct wi_ssid {int wi_ssid; int wi_len; } ;
struct wi_softc {int dummy; } ;
typedef int ssid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct wi_ssid*,int ,int) ;
 int FUNC_3 (struct wi_softc*,int,struct wi_ssid*,int) ;

__attribute__((used)) static int
FUNC_4(struct wi_softc *VAR_2, int VAR_3, u_int8_t *VAR_4, int VAR_5)
{
 struct wi_ssid VAR_6;

 if (VAR_5 > VAR_1)
  return VAR_0;
 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.wi_len = FUNC_0(VAR_5);
 FUNC_1(VAR_6.wi_ssid, VAR_4, VAR_5);
 return FUNC_3(VAR_2, VAR_3, &VAR_6, sizeof(VAR_6));
}
