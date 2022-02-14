
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,size_t) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_3(char* VAR_5, char* VAR_6, char* VAR_7, int VAR_8, const char* VAR_9,
 char* VAR_10, size_t VAR_11)
{
 FUNC_1("%s", VAR_5);
 if(FUNC_2(VAR_6, "IN") != 0)
  FUNC_1(" in class %s", VAR_6);
 if(VAR_8 == VAR_0)
  FUNC_1(" has address");
 else if(VAR_8 == VAR_1)
  FUNC_1(" has IPv6 address");
 else if(VAR_8 == VAR_2)
  FUNC_1(" mail is handled by");
 else if(VAR_8 == VAR_3)
  FUNC_1(" domain name pointer");
 else FUNC_1(" has %s record", VAR_7);
 FUNC_0(VAR_8, VAR_10, VAR_11);
 if(VAR_4 > 0)
  FUNC_1(" %s", VAR_9);
 FUNC_1("\n");
}
