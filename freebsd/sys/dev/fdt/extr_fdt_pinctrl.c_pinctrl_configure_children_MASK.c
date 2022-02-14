
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phandle_t ;
typedef int name ;
typedef scalar_t__ device_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,char*,int,void**) ;
 int FUNC_4 (scalar_t__,char*,char**,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ VAR_0 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*,int,char*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_1, phandle_t VAR_2)
{
 phandle_t VAR_3, *VAR_4;
 int VAR_5, VAR_6;

 FUNC_7();

 for (VAR_3 = FUNC_1(VAR_2); VAR_3 != 0; VAR_3 = FUNC_5(VAR_3)) {
  if (!FUNC_9(VAR_3))
   continue;
  FUNC_11(VAR_1, VAR_3);
  VAR_6 = FUNC_3(VAR_3, "pinctrl-0",
      sizeof(*VAR_4), (void **)&VAR_4);
  if (VAR_6 <= 0)
   continue;
  if (VAR_0) {
   char VAR_7[32];
   FUNC_4(VAR_3, "name", &VAR_7, sizeof(VAR_7));
   FUNC_10("Processing %d pin-config node(s) in pinctrl-0 for %s\n",
       VAR_6, VAR_7);
  }
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
   if (FUNC_2(VAR_4[VAR_5]) == VAR_1)
    FUNC_0(VAR_1, VAR_4[VAR_5]);
  }
  FUNC_6(VAR_4);
 }
 FUNC_8();
 return (0);
}
