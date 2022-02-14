
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_2__ {char* fp_class_nm; char* fp_version_nm; char* fp_subtype_nm; } ;
struct pf_osfp_ioctl {int fp_flags; int fp_wsize; int fp_ttl; int fp_psize; int fp_optcnt; int fp_tcpopts; int fp_mss; int fp_wscale; TYPE_1__ fp_os; } ;
typedef int buf ;


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
 int FUNC_0 (char*,int,char*,int,...) ;
 int FUNC_1 (char*,char*,int) ;

const char *
FUNC_2(struct pf_osfp_ioctl *VAR_13)
{
 static char VAR_14[1024];
 char VAR_15[32];
 int VAR_16, VAR_17;

 *VAR_14 = '\0';
 if (VAR_13->fp_flags & VAR_9)
  FUNC_1(VAR_14, "*", sizeof(VAR_14));
 else if (VAR_13->fp_flags & VAR_11)
  FUNC_1(VAR_14, "S", sizeof(VAR_14));
 else if (VAR_13->fp_flags & VAR_12)
  FUNC_1(VAR_14, "T", sizeof(VAR_14));
 else {
  if (VAR_13->fp_flags & VAR_10)
   FUNC_1(VAR_14, "%", sizeof(VAR_14));
  FUNC_0(VAR_15, sizeof(VAR_15), "%d", VAR_13->fp_wsize);
  FUNC_1(VAR_14, VAR_15, sizeof(VAR_14));
 }
 FUNC_1(VAR_14, ":", sizeof(VAR_14));

 FUNC_0(VAR_15, sizeof(VAR_15), "%d", VAR_13->fp_ttl);
 FUNC_1(VAR_14, VAR_15, sizeof(VAR_14));
 FUNC_1(VAR_14, ":", sizeof(VAR_14));

 if (VAR_13->fp_flags & VAR_0)
  FUNC_1(VAR_14, "1", sizeof(VAR_14));
 else
  FUNC_1(VAR_14, "0", sizeof(VAR_14));
 FUNC_1(VAR_14, ":", sizeof(VAR_14));

 if (VAR_13->fp_flags & VAR_3)
  FUNC_1(VAR_14, "*", sizeof(VAR_14));
 else {
  if (VAR_13->fp_flags & VAR_4)
   FUNC_1(VAR_14, "%", sizeof(VAR_14));
  FUNC_0(VAR_15, sizeof(VAR_15), "%d", VAR_13->fp_psize);
  FUNC_1(VAR_14, VAR_15, sizeof(VAR_14));
 }
 FUNC_1(VAR_14, ":", sizeof(VAR_14));

 if (VAR_13->fp_optcnt == 0)
  FUNC_1(VAR_14, ".", sizeof(VAR_14));
 for (VAR_16 = VAR_13->fp_optcnt - 1; VAR_16 >= 0; VAR_16--) {
  VAR_17 = VAR_13->fp_tcpopts >> (VAR_16 * VAR_5);
  VAR_17 &= (1 << VAR_5) - 1;
  switch (VAR_17) {
  case 131:
   FUNC_1(VAR_14, "N", sizeof(VAR_14));
   break;
  case 130:
   FUNC_1(VAR_14, "S", sizeof(VAR_14));
   break;
  case 129:
   FUNC_1(VAR_14, "T", sizeof(VAR_14));
   if (VAR_13->fp_flags & VAR_6)
    FUNC_1(VAR_14, "0", sizeof(VAR_14));
   break;
  case 132:
   FUNC_1(VAR_14, "M", sizeof(VAR_14));
   if (VAR_13->fp_flags & VAR_1)
    FUNC_1(VAR_14, "*", sizeof(VAR_14));
   else {
    if (VAR_13->fp_flags & VAR_2)
     FUNC_1(VAR_14, "%", sizeof(VAR_14));
    FUNC_0(VAR_15, sizeof(VAR_15), "%d", VAR_13->fp_mss);
    FUNC_1(VAR_14, VAR_15, sizeof(VAR_14));
   }
   break;
  case 128:
   FUNC_1(VAR_14, "W", sizeof(VAR_14));
   if (VAR_13->fp_flags & VAR_7)
    FUNC_1(VAR_14, "*", sizeof(VAR_14));
   else {
    if (VAR_13->fp_flags & VAR_8)
     FUNC_1(VAR_14, "%", sizeof(VAR_14));
    FUNC_0(VAR_15, sizeof(VAR_15), "%d", VAR_13->fp_wscale);
    FUNC_1(VAR_14, VAR_15, sizeof(VAR_14));
   }
   break;
  }

  if (VAR_16 != 0)
   FUNC_1(VAR_14, ",", sizeof(VAR_14));
 }
 FUNC_1(VAR_14, ":", sizeof(VAR_14));

 FUNC_1(VAR_14, VAR_13->fp_os.fp_class_nm, sizeof(VAR_14));
 FUNC_1(VAR_14, ":", sizeof(VAR_14));
 FUNC_1(VAR_14, VAR_13->fp_os.fp_version_nm, sizeof(VAR_14));
 FUNC_1(VAR_14, ":", sizeof(VAR_14));
 FUNC_1(VAR_14, VAR_13->fp_os.fp_subtype_nm, sizeof(VAR_14));
 FUNC_1(VAR_14, ":", sizeof(VAR_14));

 FUNC_0(VAR_15, sizeof(VAR_15), "TcpOpts %d 0x%llx", VAR_13->fp_optcnt,
     (long long int)VAR_13->fp_tcpopts);
 FUNC_1(VAR_14, VAR_15, sizeof(VAR_14));

 return (VAR_14);
}
