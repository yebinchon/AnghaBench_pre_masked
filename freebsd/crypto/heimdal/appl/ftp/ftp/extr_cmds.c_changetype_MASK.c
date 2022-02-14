
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct types {scalar_t__ t_name; int t_type; int t_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (char*,int ,...) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,int) ;
 struct types* VAR_6 ;
 int VAR_7 ;

void
FUNC_2(int VAR_8, int VAR_9)
{
 struct types *VAR_10;
 int VAR_11, VAR_12 = VAR_7;

 if (VAR_8 == 0)
  VAR_8 = VAR_1;
 if (VAR_8 == VAR_4)
  return;
 if (VAR_5 == 0 && VAR_9 == 0)
  VAR_7 = 0;
 for (VAR_10 = VAR_6; VAR_10->t_name; VAR_10++)
  if (VAR_8 == VAR_10->t_type)
   break;
 if (VAR_10->t_name == 0) {
  FUNC_1("ftp: internal error: unknown type %d\n", VAR_8);
  return;
 }
 if (VAR_8 == VAR_2 && VAR_3[0] != '\0')
  VAR_11 = FUNC_0("TYPE %s %s", VAR_10->t_mode, VAR_3);
 else
  VAR_11 = FUNC_0("TYPE %s", VAR_10->t_mode);
 if (VAR_11 == VAR_0)
  VAR_4 = VAR_8;
 VAR_7 = VAR_12;
}
