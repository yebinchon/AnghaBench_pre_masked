
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct pfctl {int debug_set; int opts; int debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int VAR_9 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;

int
FUNC_5(struct pfctl *VAR_10, char *VAR_11)
{
 u_int32_t VAR_12;

 if ((VAR_9 & VAR_1) == 0)
  return (0);

 if (!FUNC_3(VAR_11, "none"))
  VAR_10->debug = VAR_4;
 else if (!FUNC_3(VAR_11, "urgent"))
  VAR_10->debug = VAR_5;
 else if (!FUNC_3(VAR_11, "misc"))
  VAR_10->debug = VAR_2;
 else if (!FUNC_3(VAR_11, "loud"))
  VAR_10->debug = VAR_3;
 else {
  FUNC_4("unknown debug level \"%s\"", VAR_11);
  return (-1);
 }

 VAR_10->debug_set = 1;
 VAR_12 = VAR_10->debug;

 if ((VAR_10->opts & VAR_6) == 0)
  if (FUNC_1(VAR_8, VAR_0, &VAR_12))
   FUNC_0(1, "DIOCSETDEBUG");

 if (VAR_10->opts & VAR_7)
  FUNC_2("set debug %s\n", VAR_11);

 return (0);
}
