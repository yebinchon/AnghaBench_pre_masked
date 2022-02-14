
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char**,int) ;
 int FUNC_2 (int ,int,char*,char const*) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ,char const*,char*,int *,void**) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4, uint8_t VAR_5[])
{
 int VAR_6, VAR_7;
 char *VAR_8, *VAR_9, *VAR_10;
 const char *VAR_11;

 VAR_11 = FUNC_3(VAR_4);
 VAR_6 = FUNC_5(VAR_3, VAR_11, "mac", ((void*)0), (void **) &VAR_10);
 if (VAR_6 == VAR_0) {
  VAR_11 = FUNC_4(VAR_4);
  VAR_6 = FUNC_5(VAR_3, VAR_11, "mac", ((void*)0), (void **) &VAR_10);
 }
 if (VAR_6 != 0) {
  FUNC_2(VAR_4, VAR_6, "parsing %s/mac", VAR_11);
  return (VAR_6);
 }

 VAR_8 = VAR_10;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_5[VAR_7] = FUNC_1(VAR_8, &VAR_9, 16);
  if (VAR_8 == VAR_9 || (VAR_9[0] != ':' && VAR_9[0] != 0)) {
   FUNC_0(VAR_10, VAR_2);
   return (VAR_0);
  }
  VAR_8 = &VAR_9[1];
 }
 FUNC_0(VAR_10, VAR_2);
 return (0);
}
