
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct changer_position {int cp_flags; int cp_unit; int cp_type; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int,char*,char const*,char*) ;
 int FUNC_2 (int ,char*,char*,char const*) ;
 char* FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,struct changer_position*) ;
 int FUNC_5 (struct changer_position*,int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int VAR_4 ;
 int FUNC_9 (char*,char const*) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_5, int VAR_6, char **VAR_7)
{
 struct changer_position VAR_8;
 int VAR_9;
 ++VAR_7; --VAR_6;

 if (VAR_6 < 2) {
  FUNC_9("%s: too few arguments", VAR_5);
  goto usage;
 } else if (VAR_6 > 3) {
  FUNC_9("%s: too many arguments", VAR_5);
  goto usage;
 }
 (void) FUNC_5(&VAR_8, 0, sizeof(VAR_8));


 VAR_8.cp_type = FUNC_6(*VAR_7);
 ++VAR_7; --VAR_6;


 VAR_8.cp_unit = FUNC_7(*VAR_7);
 ++VAR_7; --VAR_6;


 if (VAR_6) {
  VAR_9 = FUNC_8(*VAR_7);
  switch (VAR_9) {
  case 128:
   VAR_8.cp_flags |= VAR_1;
   break;

  default:
   FUNC_1(1, "%s: inappropriate modifier `%s'",
       VAR_5, *VAR_7);

  }
 }


 if (FUNC_4(VAR_2, VAR_0, &VAR_8))
  FUNC_0(1, "%s: CHIOPOSITION", VAR_3);

 return (0);

 usage:
 (void) FUNC_2(VAR_4, "usage: %s %s <to ET> <to EU> [inv]\n",
     FUNC_3(), VAR_5);
 return (1);
}
