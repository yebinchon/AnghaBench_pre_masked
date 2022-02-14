
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uid_t ;
struct fsid {int dummy; } ;
struct mac_bsdextended_object {int mbo_flags; int mbo_neg; int mbo_type; struct fsid mbo_fsid; void* mbo_gid_max; void* mbo_gid_min; void* mbo_uid_max; void* mbo_uid_min; } ;
typedef void* gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (char*,struct fsid*,size_t,char*) ;
 scalar_t__ FUNC_1 (char*,void**,void**,size_t,char*) ;
 scalar_t__ FUNC_2 (char*,int*,size_t,char*) ;
 scalar_t__ FUNC_3 (char*,void**,void**,size_t,char*) ;
 int FUNC_4 (char*,size_t,char*,...) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6(int VAR_9, char *VAR_10[],
    struct mac_bsdextended_object *VAR_11, size_t VAR_12, char *VAR_13)
{
 int VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18;
 int VAR_19;
 uid_t VAR_20, VAR_21;
 gid_t VAR_22, VAR_23;
 struct fsid VAR_24;

 VAR_16 = 0;
 VAR_15 = 0;
 VAR_17 = 0;
 VAR_18 = 0;
 VAR_19 = 0;

 if (FUNC_5("not", VAR_10[VAR_16]) == 0) {
  VAR_14 = 1;
  VAR_16++;
 } else
  VAR_14 = 0;

 while (VAR_16 < VAR_9) {
  if (FUNC_5(VAR_10[VAR_16], "uid") == 0) {
   if (VAR_16 + 2 > VAR_9) {
    FUNC_4(VAR_13, VAR_12, "uid short");
    return (-1);
   }
   if (VAR_15 & VAR_7) {
    FUNC_4(VAR_13, VAR_12, "one uid only");
    return (-1);
   }
   if (FUNC_3(VAR_10[VAR_16+1],
       &VAR_20, &VAR_21, VAR_12, VAR_13) < 0)
    return (-1);
   VAR_15 |= VAR_7;
   if (VAR_18) {
    VAR_17 ^= VAR_7;
    VAR_18 = 0;
   }
   VAR_16 += 2;
  } else if (FUNC_5(VAR_10[VAR_16], "gid") == 0) {
   if (VAR_16 + 2 > VAR_9) {
    FUNC_4(VAR_13, VAR_12, "gid short");
    return (-1);
   }
   if (VAR_15 & VAR_2) {
    FUNC_4(VAR_13, VAR_12, "one gid only");
    return (-1);
   }
   if (FUNC_1(VAR_10[VAR_16+1],
       &VAR_22, &VAR_23, VAR_12, VAR_13) < 0)
    return (-1);
   VAR_15 |= VAR_2;
   if (VAR_18) {
    VAR_17 ^= VAR_2;
    VAR_18 = 0;
   }
   VAR_16 += 2;
  } else if (FUNC_5(VAR_10[VAR_16], "filesys") == 0) {
   if (VAR_16 + 2 > VAR_9) {
    FUNC_4(VAR_13, VAR_12, "filesys short");
    return (-1);
   }
   if (VAR_15 & VAR_1) {
    FUNC_4(VAR_13, VAR_12, "one fsid only");
    return (-1);
   }
   if (FUNC_0(VAR_10[VAR_16+1], &VAR_24,
       VAR_12, VAR_13) < 0)
    return (-1);
   VAR_15 |= VAR_1;
   if (VAR_18) {
    VAR_17 ^= VAR_1;
    VAR_18 = 0;
   }
   VAR_16 += 2;
  } else if (FUNC_5(VAR_10[VAR_16], "suid") == 0) {
   VAR_15 |= VAR_5;
   if (VAR_18) {
    VAR_17 ^= VAR_5;
    VAR_18 = 0;
   }
   VAR_16 += 1;
  } else if (FUNC_5(VAR_10[VAR_16], "sgid") == 0) {
   VAR_15 |= VAR_4;
   if (VAR_18) {
    VAR_17 ^= VAR_4;
    VAR_18 = 0;
   }
   VAR_16 += 1;
  } else if (FUNC_5(VAR_10[VAR_16], "uid_of_subject") == 0) {
   VAR_15 |= VAR_8;
   if (VAR_18) {
    VAR_17 ^= VAR_8;
    VAR_18 = 0;
   }
   VAR_16 += 1;
  } else if (FUNC_5(VAR_10[VAR_16], "gid_of_subject") == 0) {
   VAR_15 |= VAR_3;
   if (VAR_18) {
    VAR_17 ^= VAR_3;
    VAR_18 = 0;
   }
   VAR_16 += 1;
  } else if (FUNC_5(VAR_10[VAR_16], "type") == 0) {
   if (VAR_16 + 2 > VAR_9) {
    FUNC_4(VAR_13, VAR_12, "type short");
    return (-1);
   }
   if (VAR_15 & VAR_6) {
    FUNC_4(VAR_13, VAR_12, "one type only");
    return (-1);
   }
   if (FUNC_2(VAR_10[VAR_16+1], &VAR_19,
       VAR_12, VAR_13) < 0)
    return (-1);
   VAR_15 |= VAR_6;
   if (VAR_18) {
    VAR_17 ^= VAR_6;
    VAR_18 = 0;
   }
   VAR_16 += 2;
  } else if (FUNC_5(VAR_10[VAR_16], "!") == 0) {
   if (VAR_18) {
    FUNC_4(VAR_13, VAR_12,
        "double negative'");
    return (-1);
   }
   VAR_18 = 1;
   VAR_16 += 1;
  } else {
   FUNC_4(VAR_13, VAR_12, "'%s' not expected",
       VAR_10[VAR_16]);
   return (-1);
  }
 }

 VAR_11->mbo_flags = VAR_15;
 if (VAR_14)
  VAR_11->mbo_neg = VAR_0 ^ VAR_17;
 else
  VAR_11->mbo_neg = VAR_17;
 if (VAR_15 & VAR_7) {
  VAR_11->mbo_uid_min = VAR_20;
  VAR_11->mbo_uid_max = VAR_21;
 }
 if (VAR_15 & VAR_2) {
  VAR_11->mbo_gid_min = VAR_22;
  VAR_11->mbo_gid_max = VAR_23;
 }
 if (VAR_15 & VAR_1)
  VAR_11->mbo_fsid = VAR_24;
 if (VAR_15 & VAR_6)
  VAR_11->mbo_type = VAR_19;

 return (0);
}
