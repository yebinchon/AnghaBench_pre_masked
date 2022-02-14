
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
struct puffs_usermount {int dummy; } ;
struct puffs_pathobj {char* po_path; int po_len; } ;
struct puffs_ops {int dummy; } ;
struct dtfs_fid {int dummy; } ;
typedef int * mntoptparse_t ;
struct TYPE_3__ {int dtm_allowprot; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct puffs_ops*) ;
 int FUNC_1 (struct puffs_ops*,int ,int ,int ) ;
 int FUNC_2 (struct puffs_ops*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_3 (char*) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_4 (struct puffs_usermount*,char*) ;
 int VAR_17 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int,char*) ;
 int VAR_18 ;
 int FUNC_7 (int *) ;
 int VAR_19 ;
 TYPE_1__ VAR_20 ;
 int VAR_21 ;
 int * FUNC_8 (char*,int ,int*,int*) ;
 int FUNC_9 (int,char**,char*) ;
 struct puffs_usermount* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_10 (struct puffs_usermount*,int,int) ;
 int VAR_34 ;
 int FUNC_11 (struct puffs_usermount*) ;
 struct puffs_pathobj* FUNC_12 (struct puffs_usermount*) ;
 struct puffs_usermount* FUNC_13 (struct puffs_ops*,int ,char const*,TYPE_1__*,int) ;
 int VAR_35 ;
 int FUNC_14 (struct puffs_usermount*) ;
 int FUNC_15 (struct puffs_usermount*,int ) ;
 int FUNC_16 (struct puffs_usermount*,struct timespec*) ;
 int FUNC_17 (struct puffs_usermount*,char*,int,int ) ;
 int FUNC_18 (struct puffs_usermount*,int ) ;
 int FUNC_19 (struct puffs_usermount*,int,int) ;
 int FUNC_20 (struct puffs_usermount*,int) ;
 int FUNC_21 (struct puffs_usermount*,int) ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_22 (char*) ;
 scalar_t__ FUNC_23 (int ,int ) ;
 int FUNC_24 (int ) ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_25 (char*) ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_26 (int *) ;
 int VAR_49 ;
 int FUNC_27 () ;
 int FUNC_28 (char*) ;
 int VAR_50 ;
 int VAR_51 ;

int
FUNC_29(int VAR_52, char *VAR_53[])
{
 extern char *VAR_54;
 extern int VAR_55;
 struct puffs_usermount *VAR_56;
 struct puffs_pathobj *VAR_57;
 struct puffs_ops *VAR_58;
 struct timespec VAR_59;
 const char *VAR_60;
 char *VAR_61;
 mntoptparse_t VAR_62;
 int VAR_63, VAR_64, VAR_65;
 int VAR_66;
 int VAR_67;
 int VAR_68;

 FUNC_22(VAR_53[0]);

 VAR_61 = ((void*)0);
 VAR_64 = 1;
 VAR_65 = 0;
 VAR_67 = 256;
 VAR_63 = VAR_7;
 VAR_60 = VAR_0;
 VAR_68 = VAR_1;
 VAR_20.dtm_allowprot = VAR_12;
 while ((VAR_66 = FUNC_9(VAR_52, VAR_53, "bc:dfilm:n:o:p:r:st")) != -1) {
  switch (VAR_66) {
  case 'b':
   VAR_63 |= VAR_5;
   break;
  case 'c':
   VAR_67 = FUNC_3(VAR_54);
   break;
  case 'd':
   VAR_17 = 1;
   break;
  case 'f':
   VAR_63 |= VAR_8;
   break;
  case 'i':
   VAR_63 &= ~VAR_7;
   break;
  case 'l':
   VAR_46 = 1;
   break;
  case 'm':
   VAR_68 = FUNC_3(VAR_54);
   break;
  case 'n':
   VAR_60 = VAR_54;
   break;
  case 'o':
   VAR_62 = FUNC_8(VAR_54, VAR_36, &VAR_65, &VAR_63);
   if (VAR_62 == ((void*)0))
    FUNC_5(1, "getmntopts");
   FUNC_7(VAR_62);
   break;
  case 'p':
   VAR_20.dtm_allowprot = FUNC_3(VAR_54);
   if ((VAR_20.dtm_allowprot | VAR_12) != VAR_12)
    FUNC_27();
   break;
  case 'r':
   VAR_61 = VAR_54;
   break;
  case 's':
   VAR_64 = 0;
   break;
  case 't':
   VAR_63 |= VAR_9;
   break;
  default:
   FUNC_27();

  }
 }
 if (VAR_63 & VAR_6)
  VAR_64 = 0;
 VAR_52 -= VAR_55;
 VAR_53 += VAR_55;

 if (VAR_52 != 2)
  FUNC_27();

 FUNC_0(VAR_58);

 FUNC_1(VAR_58, VAR_16, VAR_19, VAR_45);
 FUNC_1(VAR_58, VAR_16, VAR_19, VAR_49);
 FUNC_2(VAR_58, VAR_48);
 FUNC_1(VAR_58, VAR_16, VAR_19, VAR_18);
 FUNC_1(VAR_58, VAR_16, VAR_19, VAR_31);

 FUNC_1(VAR_58, VAR_16, VAR_30, VAR_25);
 FUNC_1(VAR_58, VAR_16, VAR_30, VAR_14);
 FUNC_1(VAR_58, VAR_34, VAR_30, VAR_21);
 FUNC_1(VAR_58, VAR_16, VAR_30, VAR_44);
 FUNC_1(VAR_58, VAR_16, VAR_30, VAR_15);
 FUNC_1(VAR_58, VAR_16, VAR_30, VAR_41);
 FUNC_1(VAR_58, VAR_16, VAR_30, VAR_38);
 FUNC_1(VAR_58, VAR_16, VAR_30, VAR_33);
 FUNC_1(VAR_58, VAR_16, VAR_30, VAR_29);
 FUNC_1(VAR_58, VAR_16, VAR_30, VAR_27);
 FUNC_1(VAR_58, VAR_16, VAR_30, VAR_43);
 FUNC_1(VAR_58, VAR_16, VAR_30, VAR_42);
 FUNC_1(VAR_58, VAR_16, VAR_30, VAR_37);
 FUNC_1(VAR_58, VAR_16, VAR_30, VAR_51);
 FUNC_1(VAR_58, VAR_16, VAR_30, VAR_24);
 FUNC_1(VAR_58, VAR_16, VAR_30, VAR_47);
 FUNC_1(VAR_58, VAR_16, VAR_30, VAR_39);
 FUNC_1(VAR_58, VAR_16, VAR_30, VAR_28);
 FUNC_1(VAR_58, VAR_16, VAR_30, VAR_23);
 FUNC_1(VAR_58, VAR_16, VAR_30, VAR_32);
 FUNC_1(VAR_58, VAR_16, VAR_30, VAR_40);

 FUNC_24(FUNC_26(((void*)0)));

 VAR_56 = FUNC_13(VAR_58, VAR_13, VAR_60, &VAR_20, VAR_63);
 if (VAR_56 == ((void*)0))
  FUNC_5(1, "init");
 VAR_22 = VAR_56;

 FUNC_19(VAR_56, sizeof(struct dtfs_fid),
     VAR_3 | VAR_4
     | (VAR_17 ? VAR_2 : 0));
 FUNC_21(VAR_56, VAR_67);

 if (FUNC_23(VAR_10, VAR_50) == VAR_11)
  FUNC_28("cannot set alarm sighandler");


 if (FUNC_4(VAR_56, VAR_61) != 0)
  FUNC_6(1, "dtfs_domount failed");

 VAR_57 = FUNC_12(VAR_56);
 VAR_57->po_path = VAR_53[0];
 VAR_57->po_len = FUNC_25(VAR_53[0]);


 VAR_59.tv_sec = 1;
 VAR_59.tv_nsec = 0;
 FUNC_15(VAR_56, VAR_26);
 FUNC_16(VAR_56, &VAR_59);

 if (VAR_68 != VAR_1)
  FUNC_20(VAR_56, VAR_68);

 FUNC_18(VAR_56, VAR_35);
 if (VAR_64)
  if (FUNC_10(VAR_56, 1, 1) == -1)
   FUNC_5(1, "puffs_daemon");

 if (FUNC_17(VAR_56, VAR_53[1], VAR_65, FUNC_11(VAR_56)) == -1)
  FUNC_5(1, "mount");
 if (FUNC_14(VAR_56) == -1)
  FUNC_5(1, "mainloop");

 return 0;
}
