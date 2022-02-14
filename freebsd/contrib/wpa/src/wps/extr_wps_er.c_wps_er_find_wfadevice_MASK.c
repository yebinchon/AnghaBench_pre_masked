
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char const*,char*,int) ;
 int FUNC_4 (int ,char*,char*) ;
 char* FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (char const*,char const**,char const**,char const**) ;

__attribute__((used)) static const char * FUNC_7(const char *VAR_1)
{
 const char *VAR_2, *VAR_3, *VAR_4;
 char *VAR_5;
 int VAR_6 = 0;

 while (!VAR_6) {

  for (;;) {
   if (FUNC_6(VAR_1, &VAR_2, &VAR_3, &VAR_4))
    return ((void*)0);
   VAR_1 = VAR_4;
   if (!FUNC_3(VAR_3, "device", 6) &&
       *VAR_2 != '/' &&
       (VAR_3[6] == '>' || !FUNC_0(VAR_3[6]))) {
    break;
   }
  }


  VAR_5 = FUNC_5(VAR_1, "deviceType");
  if (VAR_5 == ((void*)0))
   return ((void*)0);
  FUNC_4(VAR_0, "WPS ER: Found deviceType '%s'", VAR_5);
  VAR_6 = FUNC_2(VAR_5, "urn:schemas-wifialliance-org:"
          "device:WFADevice:1") == 0;
  FUNC_1(VAR_5);
 }

 return VAR_1;
}
