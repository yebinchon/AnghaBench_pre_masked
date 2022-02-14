
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wpaie ;
struct ipw_wpa_ie {int ie; int len; } ;
struct ipw_softc {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ipw_softc*,int ,struct ipw_wpa_ie*,int) ;
 int FUNC_3 (int *,void const*,int) ;
 int FUNC_4 (struct ipw_wpa_ie*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct ipw_softc *VAR_1, const void *VAR_2, int VAR_3)
{
 struct ipw_wpa_ie VAR_4;

 FUNC_4(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.len = FUNC_1(VAR_3);

 FUNC_3(&VAR_4.ie, VAR_2, VAR_3);
 FUNC_0(("Setting WPA IE\n"));
 return FUNC_2(VAR_1, VAR_0, &VAR_4, sizeof(VAR_4));
}
