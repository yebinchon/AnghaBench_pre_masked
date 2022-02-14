
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union dinode {int dummy; } dinode ;
typedef int uintmax_t ;
typedef int u_long ;
typedef int time_t ;
struct passwd {char* pw_name; } ;
typedef scalar_t__ ino_t ;


 int FUNC_0 (union dinode*,int ) ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 char* FUNC_1 (int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct passwd* FUNC_2 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (char*,...) ;

void
FUNC_4(ino_t VAR_8, union dinode *VAR_9)
{
 char *VAR_10;
 struct passwd *VAR_11;
 time_t VAR_12;

 FUNC_3(" I=%lu ", (u_long)VAR_8);
 if (VAR_8 < VAR_0 || VAR_8 > VAR_6)
  return;
 FUNC_3(" OWNER=");
 if ((VAR_11 = FUNC_2((int)FUNC_0(VAR_9, VAR_5))) != ((void*)0))
  FUNC_3("%s ", VAR_11->pw_name);
 else
  FUNC_3("%u ", (unsigned)FUNC_0(VAR_9, VAR_5));
 FUNC_3("MODE=%o\n", FUNC_0(VAR_9, VAR_2));
 if (VAR_7)
  FUNC_3("%s: ", VAR_1);
 FUNC_3("SIZE=%ju ", (uintmax_t)FUNC_0(VAR_9, VAR_4));
 VAR_12 = FUNC_0(VAR_9, VAR_3);
 VAR_10 = FUNC_1(&VAR_12);
 FUNC_3("MTIME=%12.12s %4.4s ", &VAR_10[4], &VAR_10[20]);
}
