
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*) ;


 int FUNC_1 (int ,char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char const*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(const char *VAR_3, uint8_t VAR_4, int VAR_5, char *VAR_6[])
{
 int VAR_7;

 if (VAR_5 == 0) {
  FUNC_2(VAR_1, VAR_3, VAR_4, 1);
  return;
 }
 FUNC_0("nat64lsn list needs command");
 VAR_7 = FUNC_1(VAR_0, *VAR_6, "nat64lsn list command");
 switch (VAR_7) {
 case 128:
  FUNC_2(VAR_2, VAR_3, VAR_4, 1);
  break;
 case 129:
  FUNC_2(VAR_1, VAR_3, VAR_4, 1);
 }
}
