
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct statfs {char* f_mntonname; int f_fsid; } ;
struct passwd {char* pw_name; } ;
struct TYPE_4__ {int mbo_flags; int mbo_neg; int mbo_uid_min; int mbo_uid_max; int mbo_gid_min; int mbo_gid_max; int mbo_type; int mbo_fsid; } ;
struct TYPE_3__ {int mbs_flags; int mbs_neg; int mbs_uid_min; int mbs_uid_max; int mbs_gid_min; int mbs_gid_max; int mbs_prison; } ;
struct mac_bsdextended_rule {int mbr_mode; TYPE_2__ mbr_object; TYPE_1__ mbr_subject; } ;
struct group {char* gr_name; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 struct group* FUNC_0 (int) ;
 int FUNC_1 (struct statfs**,int ) ;
 struct passwd* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 size_t FUNC_4 (char*,size_t,char*,...) ;

int
FUNC_5(struct mac_bsdextended_rule *VAR_27, char *VAR_28, size_t VAR_29)
{
 struct group *VAR_30;
 struct passwd *VAR_31;
 struct statfs *VAR_32;
 char *VAR_33, VAR_34[sizeof(VAR_27->mbr_object.mbo_type) * VAR_0 + 1];
 size_t VAR_35, VAR_36;
 int VAR_37, VAR_38, VAR_39, VAR_40, VAR_41;

 VAR_33 = VAR_28;
 VAR_35 = VAR_29;

 VAR_36 = FUNC_4(VAR_33, VAR_35, "subject ");
 if (VAR_36 < 0 || VAR_36 > VAR_35)
  goto truncated;
 VAR_35 -= VAR_36;
 VAR_33 += VAR_36;
 if (VAR_27->mbr_subject.mbs_flags) {
  if (VAR_27->mbr_subject.mbs_neg == VAR_24) {
   VAR_36 = FUNC_4(VAR_33, VAR_35, "not ");
   if (VAR_36 < 0 || VAR_36 > VAR_35)
    goto truncated;
   VAR_35 -= VAR_36;
   VAR_33 += VAR_36;
   VAR_41 = 1;
  } else {
   VAR_41 = 0;
  }

  if (!VAR_41 && (VAR_27->mbr_subject.mbs_neg & VAR_22)) {
   VAR_36 = FUNC_4(VAR_33, VAR_35, "! ");
   if (VAR_36 < 0 || VAR_36 > VAR_35)
    goto truncated;
   VAR_35 -= VAR_36;
   VAR_33 += VAR_36;
  }
  if (VAR_27->mbr_subject.mbs_flags & VAR_22) {
   VAR_31 = FUNC_2(VAR_27->mbr_subject.mbs_uid_min);
   if (VAR_31 != ((void*)0)) {
    VAR_36 = FUNC_4(VAR_33, VAR_35, "uid %s",
        VAR_31->pw_name);
    if (VAR_36 < 0 || VAR_36 > VAR_35)
     goto truncated;
    VAR_35 -= VAR_36;
    VAR_33 += VAR_36;
   } else {
    VAR_36 = FUNC_4(VAR_33, VAR_35, "uid %u",
        VAR_27->mbr_subject.mbs_uid_min);
    if (VAR_36 < 0 || VAR_36 > VAR_35)
     goto truncated;
    VAR_35 -= VAR_36;
    VAR_33 += VAR_36;
   }
   if (VAR_27->mbr_subject.mbs_uid_min !=
       VAR_27->mbr_subject.mbs_uid_max) {
    VAR_31 = FUNC_2(VAR_27->mbr_subject.mbs_uid_max);
    if (VAR_31 != ((void*)0)) {
     VAR_36 = FUNC_4(VAR_33, VAR_35, ":%s ",
         VAR_31->pw_name);
     if (VAR_36 < 0 || VAR_36 > VAR_35)
      goto truncated;
     VAR_35 -= VAR_36;
     VAR_33 += VAR_36;
    } else {
     VAR_36 = FUNC_4(VAR_33, VAR_35, ":%u ",
         VAR_27->mbr_subject.mbs_uid_max);
     if (VAR_36 < 0 || VAR_36 > VAR_35)
      goto truncated;
     VAR_35 -= VAR_36;
     VAR_33 += VAR_36;
    }
   } else {
    VAR_36 = FUNC_4(VAR_33, VAR_35, " ");
    if (VAR_36 < 0 || VAR_36 > VAR_35)
     goto truncated;
    VAR_35 -= VAR_36;
    VAR_33 += VAR_36;
   }
  }
  if (!VAR_41 && (VAR_27->mbr_subject.mbs_neg & VAR_10)) {
   VAR_36 = FUNC_4(VAR_33, VAR_35, "! ");
   if (VAR_36 < 0 || VAR_36 > VAR_35)
    goto truncated;
   VAR_35 -= VAR_36;
   VAR_33 += VAR_36;
  }
  if (VAR_27->mbr_subject.mbs_flags & VAR_10) {
   VAR_30 = FUNC_0(VAR_27->mbr_subject.mbs_gid_min);
   if (VAR_30 != ((void*)0)) {
    VAR_36 = FUNC_4(VAR_33, VAR_35, "gid %s",
        VAR_30->gr_name);
    if (VAR_36 < 0 || VAR_36 > VAR_35)
     goto truncated;
    VAR_35 -= VAR_36;
    VAR_33 += VAR_36;
   } else {
    VAR_36 = FUNC_4(VAR_33, VAR_35, "gid %u",
        VAR_27->mbr_subject.mbs_gid_min);
    if (VAR_36 < 0 || VAR_36 > VAR_35)
     goto truncated;
    VAR_35 -= VAR_36;
    VAR_33 += VAR_36;
   }
   if (VAR_27->mbr_subject.mbs_gid_min !=
       VAR_27->mbr_subject.mbs_gid_max) {
    VAR_30 = FUNC_0(VAR_27->mbr_subject.mbs_gid_max);
    if (VAR_30 != ((void*)0)) {
     VAR_36 = FUNC_4(VAR_33, VAR_35, ":%s ",
         VAR_30->gr_name);
     if (VAR_36 < 0 || VAR_36 > VAR_35)
      goto truncated;
     VAR_35 -= VAR_36;
     VAR_33 += VAR_36;
    } else {
     VAR_36 = FUNC_4(VAR_33, VAR_35, ":%u ",
         VAR_27->mbr_subject.mbs_gid_max);
     if (VAR_36 < 0 || VAR_36 > VAR_35)
      goto truncated;
     VAR_35 -= VAR_36;
     VAR_33 += VAR_36;
    }
   } else {
    VAR_36 = FUNC_4(VAR_33, VAR_35, " ");
    if (VAR_36 < 0 || VAR_36 > VAR_35)
     goto truncated;
    VAR_35 -= VAR_36;
    VAR_33 += VAR_36;
   }
  }
  if (!VAR_41 && (VAR_27->mbr_subject.mbs_neg & VAR_25)) {
   VAR_36 = FUNC_4(VAR_33, VAR_35, "! ");
   if (VAR_36 < 0 || VAR_36 > VAR_35)
    goto truncated;
   VAR_35 -= VAR_36;
   VAR_33 += VAR_36;
  }
  if (VAR_27->mbr_subject.mbs_flags & VAR_25) {
   VAR_36 = FUNC_4(VAR_33, VAR_35, "jailid %d ",
       VAR_27->mbr_subject.mbs_prison);
   if (VAR_36 < 0 || VAR_36 > VAR_35)
    goto truncated;
   VAR_35 -= VAR_36;
   VAR_33 += VAR_36;
  }
 }

 VAR_36 = FUNC_4(VAR_33, VAR_35, "object ");
 if (VAR_36 < 0 || VAR_36 > VAR_35)
  goto truncated;
 VAR_35 -= VAR_36;
 VAR_33 += VAR_36;
 if (VAR_27->mbr_object.mbo_flags) {
  if (VAR_27->mbr_object.mbo_neg == VAR_7) {
   VAR_36 = FUNC_4(VAR_33, VAR_35, "not ");
   if (VAR_36 < 0 || VAR_36 > VAR_35)
    goto truncated;
   VAR_35 -= VAR_36;
   VAR_33 += VAR_36;
   VAR_41 = 1;
  } else {
   VAR_41 = 0;
  }

  if (!VAR_41 && (VAR_27->mbr_object.mbo_neg & VAR_22)) {
   VAR_36 = FUNC_4(VAR_33, VAR_35, "! ");
   if (VAR_36 < 0 || VAR_36 > VAR_35)
    goto truncated;
   VAR_35 -= VAR_36;
   VAR_33 += VAR_36;
  }
  if (VAR_27->mbr_object.mbo_flags & VAR_22) {
   VAR_31 = FUNC_2(VAR_27->mbr_object.mbo_uid_min);
   if (VAR_31 != ((void*)0)) {
    VAR_36 = FUNC_4(VAR_33, VAR_35, "uid %s",
        VAR_31->pw_name);
    if (VAR_36 < 0 || VAR_36 > VAR_35)
     goto truncated;
    VAR_35 -= VAR_36;
    VAR_33 += VAR_36;
   } else {
    VAR_36 = FUNC_4(VAR_33, VAR_35, "uid %u",
        VAR_27->mbr_object.mbo_uid_min);
    if (VAR_36 < 0 || VAR_36 > VAR_35)
     goto truncated;
    VAR_35 -= VAR_36;
    VAR_33 += VAR_36;
   }
   if (VAR_27->mbr_object.mbo_uid_min !=
       VAR_27->mbr_object.mbo_uid_max) {
    VAR_31 = FUNC_2(VAR_27->mbr_object.mbo_uid_max);
    if (VAR_31 != ((void*)0)) {
     VAR_36 = FUNC_4(VAR_33, VAR_35, ":%s ",
         VAR_31->pw_name);
     if (VAR_36 < 0 || VAR_36 > VAR_35)
      goto truncated;
     VAR_35 -= VAR_36;
     VAR_33 += VAR_36;
    } else {
     VAR_36 = FUNC_4(VAR_33, VAR_35, ":%u ",
         VAR_27->mbr_object.mbo_uid_max);
     if (VAR_36 < 0 || VAR_36 > VAR_35)
      goto truncated;
     VAR_35 -= VAR_36;
     VAR_33 += VAR_36;
    }
   } else {
    VAR_36 = FUNC_4(VAR_33, VAR_35, " ");
    if (VAR_36 < 0 || VAR_36 > VAR_35)
     goto truncated;
    VAR_35 -= VAR_36;
    VAR_33 += VAR_36;
   }
  }
  if (!VAR_41 && (VAR_27->mbr_object.mbo_neg & VAR_10)) {
   VAR_36 = FUNC_4(VAR_33, VAR_35, "! ");
   if (VAR_36 < 0 || VAR_36 > VAR_35)
    goto truncated;
   VAR_35 -= VAR_36;
   VAR_33 += VAR_36;
  }
  if (VAR_27->mbr_object.mbo_flags & VAR_10) {
   VAR_30 = FUNC_0(VAR_27->mbr_object.mbo_gid_min);
   if (VAR_30 != ((void*)0)) {
    VAR_36 = FUNC_4(VAR_33, VAR_35, "gid %s",
        VAR_30->gr_name);
    if (VAR_36 < 0 || VAR_36 > VAR_35)
     goto truncated;
    VAR_35 -= VAR_36;
    VAR_33 += VAR_36;
   } else {
    VAR_36 = FUNC_4(VAR_33, VAR_35, "gid %u",
        VAR_27->mbr_object.mbo_gid_min);
    if (VAR_36 < 0 || VAR_36 > VAR_35)
     goto truncated;
    VAR_35 -= VAR_36;
    VAR_33 += VAR_36;
   }
   if (VAR_27->mbr_object.mbo_gid_min !=
       VAR_27->mbr_object.mbo_gid_max) {
    VAR_30 = FUNC_0(VAR_27->mbr_object.mbo_gid_max);
    if (VAR_30 != ((void*)0)) {
     VAR_36 = FUNC_4(VAR_33, VAR_35, ":%s ",
         VAR_30->gr_name);
     if (VAR_36 < 0 || VAR_36 > VAR_35)
      goto truncated;
     VAR_35 -= VAR_36;
     VAR_33 += VAR_36;
    } else {
     VAR_36 = FUNC_4(VAR_33, VAR_35, ":%u ",
         VAR_27->mbr_object.mbo_gid_max);
     if (VAR_36 < 0 || VAR_36 > VAR_35)
      goto truncated;
     VAR_35 -= VAR_36;
     VAR_33 += VAR_36;
    }
   } else {
    VAR_36 = FUNC_4(VAR_33, VAR_35, " ");
    if (VAR_36 < 0 || VAR_36 > VAR_35)
     goto truncated;
    VAR_35 -= VAR_36;
    VAR_33 += VAR_36;
   }
  }
  if (!VAR_41 && (VAR_27->mbr_object.mbo_neg & VAR_9)) {
   VAR_36 = FUNC_4(VAR_33, VAR_35, "! ");
   if (VAR_36 < 0 || VAR_36 > VAR_35)
    goto truncated;
   VAR_35 -= VAR_36;
   VAR_33 += VAR_36;
  }
  if (VAR_27->mbr_object.mbo_flags & VAR_9) {
   VAR_39 = FUNC_1(&VAR_32, VAR_26);
   for (VAR_40 = 0; VAR_40 < VAR_39; VAR_40++)
    if (FUNC_3(&(VAR_27->mbr_object.mbo_fsid),
        &(VAR_32[VAR_40].f_fsid),
        sizeof(VAR_32[VAR_40].f_fsid)) == 0)
     break;
   VAR_36 = FUNC_4(VAR_33, VAR_35, "filesys %s ",
       VAR_40 == VAR_39 ? "???" : VAR_32[VAR_40].f_mntonname);
   if (VAR_36 < 0 || VAR_36 > VAR_35)
    goto truncated;
   VAR_35 -= VAR_36;
   VAR_33 += VAR_36;
  }
  if (!VAR_41 && (VAR_27->mbr_object.mbo_neg & VAR_13)) {
   VAR_36 = FUNC_4(VAR_33, VAR_35, "! ");
   if (VAR_36 < 0 || VAR_36 > VAR_35)
    goto truncated;
   VAR_35 -= VAR_36;
   VAR_33 += VAR_36;
  }
  if (VAR_27->mbr_object.mbo_flags & VAR_13) {
   VAR_36 = FUNC_4(VAR_33, VAR_35, "suid ");
   if (VAR_36 < 0 || VAR_36 > VAR_35)
    goto truncated;
   VAR_35 -= VAR_36;
   VAR_33 += VAR_36;
  }
  if (!VAR_41 && (VAR_27->mbr_object.mbo_neg & VAR_12)) {
   VAR_36 = FUNC_4(VAR_33, VAR_35, "! ");
   if (VAR_36 < 0 || VAR_36 > VAR_35)
    goto truncated;
   VAR_35 -= VAR_36;
   VAR_33 += VAR_36;
  }
  if (VAR_27->mbr_object.mbo_flags & VAR_12) {
   VAR_36 = FUNC_4(VAR_33, VAR_35, "sgid ");
   if (VAR_36 < 0 || VAR_36 > VAR_35)
    goto truncated;
   VAR_35 -= VAR_36;
   VAR_33 += VAR_36;
  }
  if (!VAR_41 && (VAR_27->mbr_object.mbo_neg & VAR_23)) {
   VAR_36 = FUNC_4(VAR_33, VAR_35, "! ");
   if (VAR_36 < 0 || VAR_36 > VAR_35)
    goto truncated;
   VAR_35 -= VAR_36;
   VAR_33 += VAR_36;
  }
  if (VAR_27->mbr_object.mbo_flags & VAR_23) {
   VAR_36 = FUNC_4(VAR_33, VAR_35, "uid_of_subject ");
   if (VAR_36 < 0 || VAR_36 > VAR_35)
    goto truncated;
   VAR_35 -= VAR_36;
   VAR_33 += VAR_36;
  }
  if (!VAR_41 && (VAR_27->mbr_object.mbo_neg & VAR_11)) {
   VAR_36 = FUNC_4(VAR_33, VAR_35, "! ");
   if (VAR_36 < 0 || VAR_36 > VAR_35)
    goto truncated;
   VAR_35 -= VAR_36;
   VAR_33 += VAR_36;
  }
  if (VAR_27->mbr_object.mbo_flags & VAR_11) {
   VAR_36 = FUNC_4(VAR_33, VAR_35, "gid_of_subject ");
   if (VAR_36 < 0 || VAR_36 > VAR_35)
    goto truncated;
   VAR_35 -= VAR_36;
   VAR_33 += VAR_36;
  }
  if (!VAR_41 && (VAR_27->mbr_object.mbo_neg & VAR_16)) {
   VAR_36 = FUNC_4(VAR_33, VAR_35, "! ");
   if (VAR_36 < 0 || VAR_36 > VAR_35)
    goto truncated;
   VAR_35 -= VAR_36;
   VAR_33 += VAR_36;
  }
  if (VAR_27->mbr_object.mbo_flags & VAR_16) {
   VAR_40 = 0;
   if (VAR_27->mbr_object.mbo_type & VAR_20)
    VAR_34[VAR_40++] = 'r';
   if (VAR_27->mbr_object.mbo_type & VAR_17)
    VAR_34[VAR_40++] = 'd';
   if (VAR_27->mbr_object.mbo_type & VAR_14)
    VAR_34[VAR_40++] = 'b';
   if (VAR_27->mbr_object.mbo_type & VAR_15)
    VAR_34[VAR_40++] = 'c';
   if (VAR_27->mbr_object.mbo_type & VAR_19)
    VAR_34[VAR_40++] = 'l';
   if (VAR_27->mbr_object.mbo_type & VAR_21)
    VAR_34[VAR_40++] = 's';
   if (VAR_27->mbr_object.mbo_type & VAR_18)
    VAR_34[VAR_40++] = 'p';
   if (VAR_27->mbr_object.mbo_type == VAR_8) {
    VAR_40 = 0;
    VAR_34[VAR_40++] = 'a';
   }
   VAR_34[VAR_40++] = '\0';
   VAR_36 = FUNC_4(VAR_33, VAR_35, "type %s ", VAR_34);
   if (VAR_36 < 0 || VAR_36 > VAR_35)
    goto truncated;
   VAR_35 -= VAR_36;
   VAR_33 += VAR_36;
  }
 }

 VAR_36 = FUNC_4(VAR_33, VAR_35, "mode ");
 if (VAR_36 < 0 || VAR_36 > VAR_35)
  goto truncated;
 VAR_35 -= VAR_36;
 VAR_33 += VAR_36;

 VAR_37 = (VAR_27->mbr_mode & VAR_2);
 VAR_38 = (VAR_27->mbr_mode & ~VAR_2);

 if (VAR_27->mbr_mode & VAR_1) {
  VAR_36 = FUNC_4(VAR_33, VAR_35, "a");
  if (VAR_36 < 0 || VAR_36 > VAR_35)
   goto truncated;

  VAR_35 -= VAR_36;
  VAR_33 += VAR_36;
 }
 if (VAR_27->mbr_mode & VAR_4) {
  VAR_36 = FUNC_4(VAR_33, VAR_35, "r");
  if (VAR_36 < 0 || VAR_36 > VAR_35)
   goto truncated;

  VAR_35 -= VAR_36;
  VAR_33 += VAR_36;
 }
 if (VAR_27->mbr_mode & VAR_5) {
  VAR_36 = FUNC_4(VAR_33, VAR_35, "s");
  if (VAR_36 < 0 || VAR_36 > VAR_35)
   goto truncated;

  VAR_35 -= VAR_36;
  VAR_33 += VAR_36;
 }
 if (VAR_27->mbr_mode & VAR_6) {
  VAR_36 = FUNC_4(VAR_33, VAR_35, "w");
  if (VAR_36 < 0 || VAR_36 > VAR_35)
   goto truncated;

  VAR_35 -= VAR_36;
  VAR_33 += VAR_36;
 }
 if (VAR_27->mbr_mode & VAR_3) {
  VAR_36 = FUNC_4(VAR_33, VAR_35, "x");
  if (VAR_36 < 0 || VAR_36 > VAR_35)
   goto truncated;

  VAR_35 -= VAR_36;
  VAR_33 += VAR_36;
 }
 if (!VAR_37) {
  VAR_36 = FUNC_4(VAR_33, VAR_35, "n");
  if (VAR_36 < 0 || VAR_36 > VAR_35)
   goto truncated;

  VAR_35 -= VAR_36;
  VAR_33 += VAR_36;
 }
 if (VAR_38) {
  VAR_36 = FUNC_4(VAR_33, VAR_35, "?");
  if (VAR_36 < 0 || VAR_36 > VAR_35)
   goto truncated;

  VAR_35 -= VAR_36;
  VAR_33 += VAR_36;
 }

 return (0);

truncated:
 return (-1);
}
