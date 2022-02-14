
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_gid; int st_uid; } ;
typedef scalar_t__ acl_type_t ;
typedef char* acl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (struct stat*) ;
 char* FUNC_2 (char*,scalar_t__) ;
 char* FUNC_3 (char*,scalar_t__) ;
 char* FUNC_4 (char*,int ,int) ;
 scalar_t__ VAR_8 ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,struct stat*) ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,struct stat*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char*) ;

__attribute__((used)) static int
FUNC_14(char *VAR_10, acl_type_t VAR_11, int VAR_12, int VAR_13, int VAR_14,
    int VAR_15, int VAR_16)
{
 struct stat VAR_17;
 acl_t VAR_18;
 char *VAR_19;
 int VAR_20, VAR_21 = 0, VAR_22;

 if (VAR_12)
  VAR_20 = FUNC_8(VAR_10, &VAR_17);
 else
  VAR_20 = FUNC_11(VAR_10, &VAR_17);
 if (VAR_20 == -1) {
  FUNC_12("%s: stat() failed", VAR_10);
  return(-1);
 }

 if (VAR_12)
  VAR_22 = FUNC_7(VAR_10, VAR_7);
 else
  VAR_22 = FUNC_9(VAR_10, VAR_7);
 if (VAR_22 > 0) {
  if (VAR_11 == VAR_3) {
   FUNC_13("%s: there are no default entries in NFSv4 ACLs",
       VAR_10);
   return (-1);
  }
  VAR_11 = VAR_4;
 } else if (VAR_22 < 0 && VAR_8 != VAR_5) {
  FUNC_12("%s: pathconf(..., _PC_ACL_NFS4) failed", VAR_10);
  return (-1);
 }

 if (VAR_9)
  FUNC_10("\n");
 else
  VAR_9++;

 if (!VAR_15)
  FUNC_10("# file: %s\n# owner: %s\n# group: %s\n", VAR_10,
      FUNC_6(VAR_17.st_uid), FUNC_5(VAR_17.st_gid));

 if (VAR_12)
  VAR_18 = FUNC_3(VAR_10, VAR_11);
 else
  VAR_18 = FUNC_2(VAR_10, VAR_11);
 if (!VAR_18) {
  if (VAR_8 != VAR_6) {
   FUNC_12("%s", VAR_10);
   return(-1);
  }
  VAR_8 = 0;
  if (VAR_11 == VAR_3)
   return(0);
  VAR_18 = FUNC_1(&VAR_17);
  if (!VAR_18) {
   FUNC_12("%s: acl_from_stat() failed", VAR_10);
   return(-1);
  }
 }

 if (VAR_13)
  VAR_21 |= VAR_0;

 if (VAR_14)
  VAR_21 |= VAR_1;

 if (VAR_16)
  VAR_21 |= VAR_2;

 VAR_19 = FUNC_4(VAR_18, 0, VAR_21);
 if (!VAR_19) {
  FUNC_12("%s: acl_to_text_np() failed", VAR_10);
  return(-1);
 }

 FUNC_10("%s", VAR_19);

 (void)FUNC_0(VAR_18);
 (void)FUNC_0(VAR_19);

 return(0);
}
