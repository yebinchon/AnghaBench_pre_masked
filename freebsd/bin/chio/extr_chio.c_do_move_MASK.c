
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct changer_move {scalar_t__ cm_fromtype; scalar_t__ cm_totype; int cm_flags; void* cm_tounit; void* cm_fromunit; } ;
typedef int cmd ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int,char*,char const*,...) ;
 int FUNC_2 (char*,scalar_t__*,void**) ;
 int FUNC_3 (int ,char*,char*,char const*) ;
 char* FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ,struct changer_move*) ;
 int FUNC_6 (struct changer_move*,int ,int) ;
 void* FUNC_7 (char*) ;
 void* FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int VAR_5 ;
 int FUNC_10 (char*,char const*) ;

__attribute__((used)) static int
FUNC_11(const char *VAR_6, int VAR_7, char **VAR_8)
{
 struct changer_move VAR_9;
 int VAR_10;
 ++VAR_8; --VAR_7;

 if (VAR_7 < 4) {
  FUNC_10("%s: too few arguments", VAR_6);
  goto usage;
 } else if (VAR_7 > 5) {
  FUNC_10("%s: too many arguments", VAR_6);
  goto usage;
 }
 (void) FUNC_6(&VAR_9, 0, sizeof(VAR_9));


 VAR_9.cm_fromtype = FUNC_7(*VAR_8);
 ++VAR_8; --VAR_7;


 if (VAR_0 == VAR_9.cm_fromtype) {
  FUNC_2(*VAR_8, &VAR_9.cm_fromtype, &VAR_9.cm_fromunit);
 } else {

  VAR_9.cm_fromunit = FUNC_8(*VAR_8);
 }
 ++VAR_8; --VAR_7;


 VAR_9.cm_totype = FUNC_7(*VAR_8);
 ++VAR_8; --VAR_7;


 if (VAR_0 == VAR_9.cm_totype)
  FUNC_1(1,"%s: voltag only makes sense as an element source",
       VAR_6);


 VAR_9.cm_tounit = FUNC_8(*VAR_8);
 ++VAR_8; --VAR_7;


 if (VAR_7) {
  VAR_10 = FUNC_9(*VAR_8);
  switch (VAR_10) {
  case 128:
   VAR_9.cm_flags |= VAR_2;
   break;

  default:
   FUNC_1(1, "%s: inappropriate modifier `%s'",
       VAR_6, *VAR_8);

  }
 }


 if (FUNC_5(VAR_3, VAR_1, &VAR_9))
  FUNC_0(1, "%s: CHIOMOVE", VAR_4);

 return (0);

 usage:
 (void) FUNC_3(VAR_5, "usage: %s %s "
     "<from ET> <from EU> <to ET> <to EU> [inv]\n", FUNC_4(), VAR_6);
 return (1);
}
