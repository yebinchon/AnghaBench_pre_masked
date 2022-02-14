
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int pw_uid; } ;
struct group {scalar_t__ gr_gid; } ;
typedef scalar_t__ gid_t ;
typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char const* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 char const* VAR_20 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ VAR_21 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (int,int ,scalar_t__) ;
 scalar_t__ FUNC_9 () ;
 struct group* FUNC_10 (char const*) ;
 struct passwd* FUNC_11 (char const*) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (char const*,int) ;
 int FUNC_14 (int,char const*,int,int) ;
 int FUNC_15 (char*,int ,int ) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (char const*,char) ;
 int FUNC_18 (int ,char*,char const*) ;

int
FUNC_19(int VAR_22, char **VAR_23)
{



 const char *VAR_24;
 struct passwd *VAR_25;
 struct group *VAR_26;
 uid_t VAR_27;
 gid_t VAR_28;
 int VAR_29, VAR_30;




 FUNC_15("dma-mbox-create", VAR_15, VAR_14);

 VAR_21 = 0;
 VAR_26 = FUNC_10(VAR_5);
 if (!VAR_26)
  FUNC_12(VAR_7, "cannot find dma group `%s'", VAR_5);

 VAR_28 = VAR_26->gr_gid;

 if (FUNC_16(VAR_28) != 0)
  FUNC_12(VAR_10, "cannot set gid to %d (%s)", VAR_28, VAR_5);
 if (FUNC_9() != VAR_28)
  FUNC_12(VAR_10, "cannot set gid to %d (%s), still at %d", VAR_28, VAR_5, FUNC_9());




 if (VAR_22 != 2) {
  VAR_21 = 0;
  FUNC_12(VAR_13, "no arguments");
 }
 VAR_24 = VAR_23[1];

 FUNC_18(VAR_16, "creating mbox for `%s'", VAR_24);


 if (FUNC_17(VAR_24, '/')) {
  VAR_21 = 0;
  FUNC_12(VAR_8, "path separator in username `%s'", VAR_24);
  FUNC_6(1);
 }


 VAR_21 = 0;
 VAR_25 = FUNC_11(VAR_24);
 if (!VAR_25)
  FUNC_12(VAR_11, "cannot find user `%s'", VAR_24);

 VAR_30 = FUNC_13(VAR_20, VAR_19);
 if (VAR_30 < 0)
  FUNC_12(VAR_9, "cannot open maildir %s", VAR_20);





 FUNC_2();




 FUNC_3();
 VAR_27 = VAR_25->pw_uid;

 VAR_29 = FUNC_14(VAR_30, VAR_24, VAR_19|VAR_17|VAR_18, 0600);
 if (VAR_29 < 0)
  FUNC_12(VAR_9, "cannot open mbox `%s'", VAR_24);

 if (FUNC_8(VAR_29, VAR_27, VAR_28))
  FUNC_12(VAR_12, "cannot change owner of mbox `%s'", VAR_24);

 if (FUNC_7(VAR_29, 0620))
  FUNC_12(VAR_12, "cannot change permissions of mbox `%s'",
      VAR_24);



 FUNC_18(VAR_16, "successfully created mbox for `%s'", VAR_24);

 return (0);
}
