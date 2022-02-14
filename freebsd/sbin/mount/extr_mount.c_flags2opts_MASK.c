
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
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
 char* FUNC_0 (char*,char*) ;

char *
FUNC_1(int VAR_17)
{
 char *VAR_18;

 VAR_18 = ((void*)0);

 if (VAR_17 & VAR_12) VAR_18 = FUNC_0(VAR_18, "ro");
 if (VAR_17 & VAR_14) VAR_18 = FUNC_0(VAR_18, "sync");
 if (VAR_17 & VAR_9) VAR_18 = FUNC_0(VAR_18, "noexec");
 if (VAR_17 & VAR_10) VAR_18 = FUNC_0(VAR_18, "nosuid");
 if (VAR_17 & VAR_15) VAR_18 = FUNC_0(VAR_18, "union");
 if (VAR_17 & VAR_1) VAR_18 = FUNC_0(VAR_18, "async");
 if (VAR_17 & VAR_5) VAR_18 = FUNC_0(VAR_18, "noatime");
 if (VAR_17 & VAR_6) VAR_18 = FUNC_0(VAR_18, "noclusterr");
 if (VAR_17 & VAR_7) VAR_18 = FUNC_0(VAR_18, "noclusterw");
 if (VAR_17 & VAR_11) VAR_18 = FUNC_0(VAR_18, "nosymfollow");
 if (VAR_17 & VAR_13) VAR_18 = FUNC_0(VAR_18, "suiddir");
 if (VAR_17 & VAR_3) VAR_18 = FUNC_0(VAR_18, "multilabel");
 if (VAR_17 & VAR_0) VAR_18 = FUNC_0(VAR_18, "acls");
 if (VAR_17 & VAR_4) VAR_18 = FUNC_0(VAR_18, "nfsv4acls");
 if (VAR_17 & VAR_16) VAR_18 = FUNC_0(VAR_18, "untrusted");
 if (VAR_17 & VAR_8) VAR_18 = FUNC_0(VAR_18, "nocover");
 if (VAR_17 & VAR_2) VAR_18 = FUNC_0(VAR_18, "emptydir");

 return (VAR_18);
}
