
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ) ;
 scalar_t__* VAR_1 ;
 struct wpa_ctrl* VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (char*,int,char*,char*,char const*) ;
 int FUNC_5 (char const*) ;
 struct wpa_ctrl* FUNC_6 (char const*) ;
 struct wpa_ctrl* FUNC_7 (char*,scalar_t__*) ;

__attribute__((used)) static struct wpa_ctrl * FUNC_8(const char *VAR_4)
{

 char *VAR_5;
 int VAR_6;


 if (VAR_4 == ((void*)0))
  return ((void*)0);





 VAR_6 = FUNC_5(VAR_3) + FUNC_5(VAR_4) + 2;
 VAR_5 = FUNC_2(VAR_6);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 FUNC_4(VAR_5, VAR_6, "%s/%s", VAR_3, VAR_4);

 if (VAR_1 && VAR_1[0] &&
     FUNC_0(VAR_1, VAR_0) < 0) {
  FUNC_3(VAR_1);
  FUNC_1(VAR_5);
  return ((void*)0);
 }

 VAR_2 = FUNC_7(VAR_5, VAR_1);
 FUNC_1(VAR_5);
 return VAR_2;

}
