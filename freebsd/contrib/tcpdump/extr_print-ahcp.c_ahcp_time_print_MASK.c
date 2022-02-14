
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int time_t ;
struct tm {int dummy; } ;
typedef int netdissect_options ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int) ;
 struct tm* FUNC_3 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (char*,int,char*,struct tm*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(netdissect_options *VAR_3, const u_char *VAR_4, const u_char *VAR_5)
{
 time_t VAR_6;
 struct tm *VAR_7;
 char VAR_8[VAR_0];

 if (VAR_4 + 4 != VAR_5)
  goto invalid;
 FUNC_2(*VAR_4, 4);
 VAR_6 = FUNC_0(VAR_4);
 if (((void*)0) == (VAR_7 = FUNC_3(&VAR_6)))
  FUNC_1((VAR_3, ": gmtime() error"));
 else if (0 == FUNC_4(VAR_8, sizeof(VAR_8), "%Y-%m-%d %H:%M:%S", VAR_7))
  FUNC_1((VAR_3, ": strftime() error"));
 else
  FUNC_1((VAR_3, ": %s UTC", VAR_8));
 return 0;

invalid:
 FUNC_1((VAR_3, "%s", VAR_1));
 FUNC_2(*VAR_4, VAR_5 - VAR_4);
 return 0;
trunc:
 FUNC_1((VAR_3, "%s", VAR_2));
 return -1;
}
