
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uid_t ;
struct mac_bsdextended_subject {int mbs_flags; int mbs_neg; int mbs_prison; void* mbs_gid_max; void* mbs_gid_min; void* mbs_uid_max; void* mbs_uid_min; } ;
typedef void* gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,size_t,char*) ;
 scalar_t__ FUNC_1 (char*,void**,void**,size_t,char*) ;
 scalar_t__ FUNC_2 (char*,void**,void**,size_t,char*) ;
 int FUNC_3 (char*,size_t,char*,...) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(int VAR_4, char *VAR_5[],
    struct mac_bsdextended_subject *VAR_6, size_t VAR_7, char *VAR_8)
{
 int VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;
 uid_t VAR_14, VAR_15;
 gid_t VAR_16, VAR_17;
 int VAR_18 = 0;

 VAR_11 = 0;
 VAR_10 = 0;
 VAR_12 = 0;
 VAR_13 = 0;

 if (FUNC_4("not", VAR_5[VAR_11]) == 0) {
  VAR_9 = 1;
  VAR_11++;
 } else
  VAR_9 = 0;

 while (VAR_11 < VAR_4) {
  if (FUNC_4(VAR_5[VAR_11], "uid") == 0) {
   if (VAR_11 + 2 > VAR_4) {
    FUNC_3(VAR_8, VAR_7, "uid short");
    return (-1);
   }
   if (VAR_10 & VAR_3) {
    FUNC_3(VAR_8, VAR_7, "one uid only");
    return (-1);
   }
   if (FUNC_2(VAR_5[VAR_11+1],
       &VAR_14, &VAR_15, VAR_7, VAR_8) < 0)
    return (-1);
   VAR_10 |= VAR_3;
   if (VAR_13) {
    VAR_12 ^= VAR_3;
    VAR_13 = 0;
   }
   VAR_11 += 2;
  } else if (FUNC_4(VAR_5[VAR_11], "gid") == 0) {
   if (VAR_11 + 2 > VAR_4) {
    FUNC_3(VAR_8, VAR_7, "gid short");
    return (-1);
   }
   if (VAR_10 & VAR_1) {
    FUNC_3(VAR_8, VAR_7, "one gid only");
    return (-1);
   }
   if (FUNC_1(VAR_5[VAR_11+1],
       &VAR_16, &VAR_17, VAR_7, VAR_8) < 0)
    return (-1);
   VAR_10 |= VAR_1;
   if (VAR_13) {
    VAR_12 ^= VAR_1;
    VAR_13 = 0;
   }
   VAR_11 += 2;
  } else if (FUNC_4(VAR_5[VAR_11], "jailid") == 0) {
   if (VAR_11 + 2 > VAR_4) {
    FUNC_3(VAR_8, VAR_7, "prison short");
    return (-1);
   }
   if (VAR_10 & VAR_2) {
    FUNC_3(VAR_8, VAR_7, "one jail only");
    return (-1);
   }
   VAR_18 = FUNC_0(VAR_5[VAR_11+1], VAR_7, VAR_8);
   if (VAR_18 < 0)
    return (-1);
   VAR_10 |= VAR_2;
   if (VAR_13) {
    VAR_12 ^= VAR_2;
    VAR_13 = 0;
   }
   VAR_11 += 2;
  } else if (FUNC_4(VAR_5[VAR_11], "!") == 0) {
   if (VAR_13) {
    FUNC_3(VAR_8, VAR_7, "double negative");
    return (-1);
   }
   VAR_13 = 1;
   VAR_11 += 1;
  } else {
   FUNC_3(VAR_8, VAR_7, "'%s' not expected",
       VAR_5[VAR_11]);
   return (-1);
  }
 }

 VAR_6->mbs_flags = VAR_10;
 if (VAR_9)
  VAR_6->mbs_neg = VAR_0 ^ VAR_12;
 else
  VAR_6->mbs_neg = VAR_12;
 if (VAR_10 & VAR_3) {
  VAR_6->mbs_uid_min = VAR_14;
  VAR_6->mbs_uid_max = VAR_15;
 }
 if (VAR_10 & VAR_1) {
  VAR_6->mbs_gid_min = VAR_16;
  VAR_6->mbs_gid_max = VAR_17;
 }
 if (VAR_10 & VAR_2)
  VAR_6->mbs_prison = VAR_18;

 return (0);
}
