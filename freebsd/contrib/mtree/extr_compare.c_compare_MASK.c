
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int u_long ;
typedef scalar_t__ u_int32_t ;
typedef void* time_t ;
struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_8__ {void* tv_sec; } ;
struct stat {int st_mode; scalar_t__ st_flags; scalar_t__ st_rdev; int st_uid; int st_gid; scalar_t__ st_nlink; scalar_t__ st_size; int st_mtime; TYPE_5__ st_mtimespec; } ;
typedef int mode_t ;
struct TYPE_7__ {char* fts_accpath; struct stat* fts_statp; } ;
struct TYPE_6__ {int type; int flags; scalar_t__ st_rdev; int st_mode; scalar_t__ st_uid; scalar_t__ st_gid; scalar_t__ st_nlink; scalar_t__ st_size; scalar_t__ st_flags; char const* md5digest; char const* rmd160digest; char const* sha1digest; char const* sha256digest; char const* sha384digest; char const* sha512digest; char* slink; scalar_t__ cksum; TYPE_5__ st_mtimespec; } ;
typedef TYPE_1__ NODE ;
typedef TYPE_2__ FTSENT ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;


 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 scalar_t__ VAR_4 ;
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

 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 char* FUNC_1 (char*,int *) ;
 char* VAR_22 ;
 int VAR_23 ;
 char* FUNC_2 (char*,int *) ;
 char* VAR_24 ;
 int FUNC_3 (scalar_t__,int) ;
 char* FUNC_4 (char*,int *) ;
 char* VAR_25 ;
 char* VAR_26 ;
 char* FUNC_5 (char*,int *) ;
 char* VAR_27 ;
 char* FUNC_6 (char*,int *) ;
 char* VAR_28 ;
 char* FUNC_7 (char*,int *) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (struct timeval*,TYPE_5__*) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int,scalar_t__*,scalar_t__*) ;
 char* FUNC_18 (void**) ;
 int VAR_33 ;
 char* FUNC_19 (scalar_t__,char*) ;
 scalar_t__ VAR_34 ;
 int FUNC_20 (char*) ;
 scalar_t__ VAR_35 ;
 int FUNC_21 (int) ;
 scalar_t__ FUNC_22 (char*,int) ;
 int FUNC_23 (char*,int,int) ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int FUNC_24 (char*,int,scalar_t__) ;
 scalar_t__ VAR_38 ;
 int FUNC_25 (int const) ;
 int FUNC_26 (int) ;
 int FUNC_27 (char*,int ,int ) ;
 int FUNC_28 (char*,...) ;
 char* FUNC_29 (char*) ;
 scalar_t__ FUNC_30 (char const*,char*) ;
 char* FUNC_31 (int ) ;
 int FUNC_32 (char*,char*) ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 int FUNC_33 (char*) ;
 scalar_t__ FUNC_34 (char*,struct timeval*) ;

int
FUNC_35(NODE *VAR_41, FTSENT *VAR_42)
{
 u_int32_t VAR_43, VAR_44, VAR_45;
 int VAR_46, VAR_47;
 const char *VAR_48, *VAR_49;

 char *VAR_50;


 VAR_49 = ((void*)0);
 VAR_47 = 0;
 switch(VAR_41->type) {
 case 134:
  if (!FUNC_8(VAR_42->fts_statp->st_mode))
   goto typeerr;
  break;
 case 133:
  if (!FUNC_9(VAR_42->fts_statp->st_mode))
   goto typeerr;
  break;
 case 132:
  if (!FUNC_10(VAR_42->fts_statp->st_mode))
   goto typeerr;
  break;
 case 131:
  if (!FUNC_11(VAR_42->fts_statp->st_mode))
   goto typeerr;
  break;
 case 130:
  if (!FUNC_13(VAR_42->fts_statp->st_mode))
   goto typeerr;
  break;
 case 129:
  if (!FUNC_12(VAR_42->fts_statp->st_mode))
   goto typeerr;
  break;






typeerr: VAR_20;
  FUNC_28(VAR_34 == VAR_4 ?
      "\ttype expected %s found %s\n" : "\ttype (%s, %s)\n",
      FUNC_26(VAR_41->type), FUNC_21(VAR_42->fts_statp->st_mode));
  return (VAR_47);
 }
 if (VAR_38)
  goto afterpermwhack;
 if (VAR_41->flags & VAR_2 &&
     (VAR_41->type == 134 || VAR_41->type == 133) &&
     VAR_41->st_rdev != VAR_42->fts_statp->st_rdev) {
  VAR_20;
  FUNC_28(VAR_34 == VAR_4 ?
      "%sdevice expected %#jx found %#jx" :
      "%sdevice (%#jx, %#jx",
      VAR_49, (uintmax_t)VAR_41->st_rdev,
      (uintmax_t)VAR_42->fts_statp->st_rdev);
  if (VAR_40) {
   if ((FUNC_33(VAR_42->fts_accpath) == -1) ||
       (FUNC_24(VAR_42->fts_accpath,
         VAR_41->st_mode | FUNC_25(VAR_41->type),
         VAR_41->st_rdev) == -1) ||
       (FUNC_23(VAR_42->fts_accpath, VAR_42->fts_statp->st_uid,
         VAR_42->fts_statp->st_gid) == -1) )
    FUNC_28(", not modified: %s%s\n",
        FUNC_31(VAR_33),
        VAR_34 == VAR_4 ? "" : ")");
    else
    FUNC_28(", modified%s\n",
        VAR_34 == VAR_4 ? "" : ")");
  } else
   FUNC_28(")\n");
  VAR_49 = "\t";
 }

 if (VAR_41->flags & (VAR_18 | VAR_19) && VAR_41->st_uid != VAR_42->fts_statp->st_uid) {
  VAR_20;
  FUNC_28(VAR_34 == VAR_4 ?
      "%suser expected %lu found %lu" : "%suser (%lu, %lu",
      VAR_49, (u_long)VAR_41->st_uid, (u_long)VAR_42->fts_statp->st_uid);
  if (VAR_40) {
   if (FUNC_23(VAR_42->fts_accpath, VAR_41->st_uid, -1))
    FUNC_28(", not modified: %s%s\n",
        FUNC_31(VAR_33),
        VAR_34 == VAR_4 ? "" : ")");
   else
    FUNC_28(", modified%s\n",
        VAR_34 == VAR_4 ? "" : ")");
  } else
   FUNC_28(")\n");
  VAR_49 = "\t";
 }
 if (VAR_41->flags & (VAR_5 | VAR_6) && VAR_41->st_gid != VAR_42->fts_statp->st_gid) {
  VAR_20;
  FUNC_28(VAR_34 == VAR_4 ?
      "%sgid expected %lu found %lu" : "%sgid (%lu, %lu",
      VAR_49, (u_long)VAR_41->st_gid, (u_long)VAR_42->fts_statp->st_gid);
  if (VAR_40) {
   if (FUNC_23(VAR_42->fts_accpath, -1, VAR_41->st_gid))
    FUNC_28(", not modified: %s%s\n",
        FUNC_31(VAR_33),
        VAR_34 == VAR_4 ? "" : ")");
   else
    FUNC_28(", modified%s\n",
        VAR_34 == VAR_4 ? "" : ")");
  }
  else
   FUNC_28(")\n");
  VAR_49 = "\t";
 }
 if (VAR_41->flags & VAR_8 &&
     VAR_41->st_mode != (VAR_42->fts_statp->st_mode & VAR_21)) {
  if (VAR_36) {
   mode_t VAR_51, VAR_52;

   VAR_51 = VAR_41->st_mode;
   VAR_52 = VAR_42->fts_statp->st_mode & VAR_21;





   if (!((VAR_51 & ~(VAR_32|VAR_30|VAR_31)) ||
       (VAR_52 & ~(VAR_32|VAR_30|VAR_31))))
    if ((VAR_52 | VAR_51) == VAR_51)
     goto skip;
  }

  VAR_20;
  FUNC_28(VAR_34 == VAR_4 ?
      "%spermissions expcted %#lo found %#lo" :
      "%spermissions (%#lo, %#lo",
      VAR_49, (u_long)VAR_41->st_mode,
      (u_long)VAR_42->fts_statp->st_mode & VAR_21);
  if (VAR_40) {
   if (FUNC_22(VAR_42->fts_accpath, VAR_41->st_mode))
    FUNC_28(", not modified: %s%s\n",
        FUNC_31(VAR_33),
        VAR_34 == VAR_4 ? "" : ")");
   else
    FUNC_28(", modified%s\n",
        VAR_34 == VAR_4 ? "" : ")");
  }
  else
   FUNC_28(")\n");
  VAR_49 = "\t";
 skip: ;
 }
 if (VAR_41->flags & VAR_9 && VAR_41->type != 132 &&
     VAR_41->st_nlink != VAR_42->fts_statp->st_nlink) {
  VAR_20;
  FUNC_28(VAR_34 == VAR_4 ?
      "%slink count expected %lu found %lu\n" :
      "%slink count (%lu, %lu)\n",
      VAR_49, (u_long)VAR_41->st_nlink, (u_long)VAR_42->fts_statp->st_nlink);
  VAR_49 = "\t";
 }
 if (VAR_41->flags & VAR_15 && VAR_41->st_size != VAR_42->fts_statp->st_size) {
  VAR_20;
  FUNC_28(VAR_34 == VAR_4 ?
      "%ssize expected %ju found %ju\n" : "%ssize (%ju, %ju)\n",
      VAR_49, (uintmax_t)VAR_41->st_size,
      (uintmax_t)VAR_42->fts_statp->st_size);
  VAR_49 = "\t";
 }
 if (VAR_41->flags & VAR_17) {
  struct timeval VAR_53[2];
  struct stat *VAR_54 = VAR_42->fts_statp;
  time_t VAR_55 = VAR_41->st_mtimespec.tv_sec;







  time_t VAR_56 = (time_t)VAR_54->st_mtime;

  VAR_53[0].tv_sec = VAR_55;
  VAR_53[0].tv_usec = 0;
  VAR_53[1].tv_sec = VAR_56;
  VAR_53[1].tv_usec = 0;


  if (VAR_53[0].tv_sec != VAR_53[1].tv_sec ||
      VAR_53[0].tv_usec != VAR_53[1].tv_usec) {
   VAR_20;
   FUNC_28(VAR_34 == VAR_4 ?
       "%smodification time expected %.24s found " :
       "%smodification time (%.24s, ",
       VAR_49, FUNC_18(&VAR_55));
   FUNC_28("%.24s", FUNC_18(&VAR_56));
   if (VAR_39) {
    VAR_53[1] = VAR_53[0];
    if (FUNC_34(VAR_42->fts_accpath, VAR_53))
     FUNC_28(", not modified: %s%s\n",
         FUNC_31(VAR_33),
         VAR_34 == VAR_4 ? "" : ")");
    else
     FUNC_28(", modified%s\n",
         VAR_34 == VAR_4 ? "" : ")");
   } else
    FUNC_28("%s\n", VAR_34 == VAR_4 ? "" : ")");
   VAR_49 = "\t";
  }
 }
 afterpermwhack:
 if (VAR_41->flags & VAR_1) {
  if ((VAR_46 = FUNC_27(VAR_42->fts_accpath, VAR_23, 0)) < 0) {
   VAR_20;
   FUNC_28("%scksum: %s: %s\n",
       VAR_49, VAR_42->fts_accpath, FUNC_31(VAR_33));
   VAR_49 = "\t";
  } else if (FUNC_17(VAR_46, &VAR_44, &VAR_43)) {
   FUNC_16(VAR_46);
   VAR_20;
   FUNC_28("%scksum: %s: %s\n",
       VAR_49, VAR_42->fts_accpath, FUNC_31(VAR_33));
   VAR_49 = "\t";
  } else {
   FUNC_16(VAR_46);
   if (VAR_41->cksum != VAR_44) {
    VAR_20;
    FUNC_28(VAR_34 == VAR_4 ?
        "%scksum expected %lu found %lu\n" :
        "%scksum (%lu, %lu)\n",
        VAR_49, VAR_41->cksum, (unsigned long)VAR_44);
   }
   VAR_49 = "\t";
  }
 }

 if (VAR_41->flags & VAR_7) {
  if ((VAR_50 = FUNC_1(VAR_42->fts_accpath, ((void*)0))) == ((void*)0)) {
   VAR_20;
   FUNC_28("%s%s: %s: %s\n",
       VAR_49, VAR_22, VAR_42->fts_accpath, FUNC_31(VAR_33));
   VAR_49 = "\t";
  } else {
   if (FUNC_30(VAR_41->md5digest, VAR_50)) {
    VAR_20;
    FUNC_28(VAR_34 == VAR_4 ?
        "%s%s expected %s found %s\n" :
        "%s%s (0x%s, 0x%s)\n",
        VAR_49, VAR_22, VAR_41->md5digest, VAR_50);
   }
   VAR_49 = "\t";
   FUNC_20(VAR_50);
  }
 }


 if (VAR_41->flags & VAR_10) {
  if ((VAR_50 = FUNC_2(VAR_42->fts_accpath, ((void*)0))) == ((void*)0)) {
   VAR_20;
   FUNC_28("%s%s: %s: %s\n",
       VAR_49, VAR_24, VAR_42->fts_accpath, FUNC_31(VAR_33));
   VAR_49 = "\t";
  } else {
   if (FUNC_30(VAR_41->rmd160digest, VAR_50)) {
    VAR_20;
    FUNC_28(VAR_34 == VAR_4 ?
        "%s%s expected %s found %s\n" :
        "%s%s (0x%s, 0x%s)\n",
        VAR_49, VAR_24, VAR_41->rmd160digest, VAR_50);
   }
   VAR_49 = "\t";
   FUNC_20(VAR_50);
  }
 }


 if (VAR_41->flags & VAR_11) {
  if ((VAR_50 = FUNC_4(VAR_42->fts_accpath, ((void*)0))) == ((void*)0)) {
   VAR_20;
   FUNC_28("%s%s: %s: %s\n",
       VAR_49, VAR_25, VAR_42->fts_accpath, FUNC_31(VAR_33));
   VAR_49 = "\t";
  } else {
   if (FUNC_30(VAR_41->sha1digest, VAR_50)) {
    VAR_20;
    FUNC_28(VAR_34 == VAR_4 ?
        "%s%s expected %s found %s\n" :
        "%s%s (0x%s, 0x%s)\n",
        VAR_49, VAR_25, VAR_41->sha1digest, VAR_50);
   }
   VAR_49 = "\t";
   FUNC_20(VAR_50);
  }
 }


 if (VAR_41->flags & VAR_12) {
  if ((VAR_50 = FUNC_5(VAR_42->fts_accpath, ((void*)0))) == ((void*)0)) {
   VAR_20;
   FUNC_28("%s%s: %s: %s\n",
       VAR_49, VAR_26, VAR_42->fts_accpath, FUNC_31(VAR_33));
   VAR_49 = "\t";
  } else {
   if (FUNC_30(VAR_41->sha256digest, VAR_50)) {
    VAR_20;
    FUNC_28(VAR_34 == VAR_4 ?
        "%s%s expected %s found %s\n" :
        "%s%s (0x%s, 0x%s)\n",
        VAR_49, VAR_26, VAR_41->sha256digest, VAR_50);
   }
   VAR_49 = "\t";
   FUNC_20(VAR_50);
  }
 }
 if (VAR_41->flags & VAR_14) {
  if ((VAR_50 = FUNC_7(VAR_42->fts_accpath, ((void*)0))) == ((void*)0)) {
   VAR_20;
   FUNC_28("%s%s: %s: %s\n",
       VAR_49, VAR_28, VAR_42->fts_accpath, FUNC_31(VAR_33));
   VAR_49 = "\t";
  } else {
   if (FUNC_30(VAR_41->sha512digest, VAR_50)) {
    VAR_20;
    FUNC_28(VAR_34 == VAR_4 ?
        "%s%s expected %s found %s\n" :
        "%s%s (0x%s, 0x%s)\n",
        VAR_49, VAR_28, VAR_41->sha512digest, VAR_50);
   }
   VAR_49 = "\t";
   FUNC_20(VAR_50);
  }
 }

 if (VAR_41->flags & VAR_16 &&
     FUNC_30(VAR_48 = FUNC_29(VAR_42->fts_accpath), VAR_41->slink)) {
  VAR_20;
  FUNC_28(VAR_34 == VAR_4 ?
      "%slink ref expected %s found %s" :
      "%slink ref (%s, %s", VAR_49, VAR_48, VAR_41->slink);
  if (VAR_40) {
   if ((FUNC_33(VAR_42->fts_accpath) == -1) ||
       (FUNC_32(VAR_41->slink, VAR_42->fts_accpath) == -1) )
    FUNC_28(", not modified: %s%s\n",
        FUNC_31(VAR_33),
        VAR_34 == VAR_4 ? "" : ")");
   else
    FUNC_28(", modified%s\n",
        VAR_34 == VAR_4 ? "" : ")");
  } else
   FUNC_28("%s\n", VAR_34 == VAR_4 ? "" : ")");
 }
 return (VAR_47);
}
