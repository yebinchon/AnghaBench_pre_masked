
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
typedef int u_int16_t ;
struct servent {char* s_name; } ;
typedef int a2 ;
typedef int a1 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct servent* FUNC_0 (int,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,int) ;

void
FUNC_5(u_int8_t VAR_2, u_int16_t VAR_3, u_int16_t VAR_4, const char *VAR_5, int VAR_6)
{
 char VAR_7[6], VAR_8[6];
 struct servent *VAR_9;

 if (!VAR_6)
  VAR_9 = FUNC_0(VAR_3, VAR_5);
 else
  VAR_9 = ((void*)0);
 VAR_3 = FUNC_1(VAR_3);
 VAR_4 = FUNC_1(VAR_4);
 FUNC_4(VAR_7, sizeof(VAR_7), "%u", VAR_3);
 FUNC_4(VAR_8, sizeof(VAR_8), "%u", VAR_4);
 FUNC_3(" port");
 if (VAR_9 != ((void*)0) && (VAR_2 == VAR_0 || VAR_2 == VAR_1))
  FUNC_2(VAR_2, VAR_9->s_name, VAR_8);
 else
  FUNC_2(VAR_2, VAR_7, VAR_8);
}
