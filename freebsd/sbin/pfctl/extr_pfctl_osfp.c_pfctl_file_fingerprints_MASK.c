
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fp_subtype_nm; int fp_version_nm; int fp_class_nm; int fp_enflags; } ;
struct pf_osfp_ioctl {int fp_ttl; int fp_flags; int fp_wsize; int fp_psize; int fp_wscale; int fp_mss; int fp_optcnt; TYPE_1__ fp_os; int fp_tcpopts; } ;
struct ip6_hdr {int dummy; } ;
struct ip {int dummy; } ;
typedef int pf_tcpopts_t ;
typedef int fp ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int,int*,char*,int,int) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
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




 int FUNC_2 (int,int,struct pf_osfp_ioctl*) ;
 int VAR_17 ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *,size_t*) ;
 int VAR_18 ;
 int FUNC_5 (int ,char*,char const*,int) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char const*,int,char*,int *,int*,int*,int*,int*,int*,int*) ;
 scalar_t__ FUNC_8 (char) ;
 int FUNC_9 (struct pf_osfp_ioctl*,int ,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (char const*,char*) ;
 int FUNC_13 (char*,int) ;
 int VAR_19 ;
 int FUNC_14 (int ,char*,int) ;
 int FUNC_15 (char*,char const*) ;

int
FUNC_16(int VAR_20, int VAR_21, const char *VAR_22)
{
 FILE *VAR_23;
 char *VAR_24;
 size_t VAR_25;
 int VAR_26, VAR_27 = 0;
 int VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36,
     VAR_37, VAR_38, VAR_39;
 pf_tcpopts_t VAR_40;
 char *VAR_41, *VAR_42, *VAR_43, *VAR_44, *VAR_45;
 struct pf_osfp_ioctl VAR_46;

 FUNC_11(&VAR_17);

 if ((VAR_23 = FUNC_12(VAR_22, "r")) == ((void*)0)) {
  FUNC_15("%s", VAR_22);
  return (1);
 }
 VAR_41 = VAR_42 = VAR_43 = VAR_44 = VAR_45 = ((void*)0);

 if ((VAR_21 & VAR_0) == 0)
  FUNC_10(VAR_20, VAR_21);

 while ((VAR_24 = FUNC_4(VAR_23, &VAR_25)) != ((void*)0)) {
  VAR_27++;
  if (VAR_41)
   FUNC_6(VAR_41);
  if (VAR_42)
   FUNC_6(VAR_42);
  if (VAR_43)
   FUNC_6(VAR_43);
  if (VAR_44)
   FUNC_6(VAR_44);
  if (VAR_45)
   FUNC_6(VAR_45);
  VAR_41 = VAR_42 = VAR_43 = VAR_44 = VAR_45 = ((void*)0);
  FUNC_9(&VAR_46, 0, sizeof(VAR_46));


  for (VAR_26 = 0; VAR_26 < VAR_25; VAR_26++)
   if (VAR_24[VAR_26] == '#') {
    VAR_25 = VAR_26;
    break;
   }

  while (VAR_25 > 0 && FUNC_8(VAR_24[VAR_25 - 1]))
   VAR_25--;
  while (VAR_25 > 0 && FUNC_8(VAR_24[0])) {
   VAR_25--;
   VAR_24++;
  }
  if (VAR_25 == 0)
   continue;
  if (FUNC_0(&VAR_24, &VAR_25, &VAR_28, &VAR_29, "window size", 0x01|0x02|0x04| 0x08, 0xffff, VAR_22, VAR_27) ||

      FUNC_0(&VAR_24, &VAR_25, &VAR_30, ((void*)0), "ttl", 0, 0xff, VAR_22, VAR_27) ||
      FUNC_0(&VAR_24, &VAR_25, &VAR_31, ((void*)0), "don't fragment frag", 0, 1, VAR_22, VAR_27) ||
      FUNC_0(&VAR_24, &VAR_25, &VAR_32, &VAR_33, "overall packet size", 0x08|0x01, 8192, VAR_22, VAR_27) ||

      FUNC_0(&VAR_24, &VAR_25, &VAR_45, "TCP Options", 1, VAR_22, VAR_27) ||
      FUNC_0(&VAR_24, &VAR_25, &VAR_41, "OS class", 1, VAR_22, VAR_27) ||
      FUNC_0(&VAR_24, &VAR_25, &VAR_42, "OS version", 0, VAR_22, VAR_27) ||
      FUNC_0(&VAR_24, &VAR_25, &VAR_43, "OS subtype", 0, VAR_22, VAR_27) ||
      FUNC_0(&VAR_24, &VAR_25, &VAR_44, "OS description", 2, VAR_22, VAR_27))
   continue;
  if (FUNC_7(VAR_22, VAR_27, VAR_45, &VAR_40,
      &VAR_38, &VAR_34, &VAR_35, &VAR_36, &VAR_37, &VAR_39))
   continue;
  if (VAR_25 != 0) {
   FUNC_5(VAR_19, "%s:%d excess field\n", VAR_22,
       VAR_27);
   continue;
  }

  VAR_46.fp_ttl = VAR_30;
  if (VAR_31)
   VAR_46.fp_flags |= VAR_2;
  switch (VAR_29) {
  case 0:
   break;
  case 0x01:
   VAR_46.fp_flags |= VAR_13;
   break;
  case 0x02:
   VAR_46.fp_flags |= VAR_15;
   break;
  case 0x04:
   VAR_46.fp_flags |= VAR_16;
   break;
  case 0x08:
   VAR_46.fp_flags |= VAR_14;
   break;
  }
  VAR_46.fp_wsize = VAR_28;

  switch (VAR_33) {
  case 0x01:
   VAR_46.fp_flags |= VAR_8;
   break;
  case 0x08:
   VAR_46.fp_flags |= VAR_9;
  }
  VAR_46.fp_psize = VAR_32;


  switch (VAR_37) {
  case 0x01:
   VAR_46.fp_flags |= VAR_11;
   break;
  case 0x08:
   VAR_46.fp_flags |= VAR_12;
  }
  VAR_46.fp_wscale = VAR_36;

  switch (VAR_35) {
  case 0x01:
   VAR_46.fp_flags |= VAR_5;
   break;
  case 0x08:
   VAR_46.fp_flags |= VAR_6;
   break;
  }
  VAR_46.fp_mss = VAR_34;

  VAR_46.fp_tcpopts = VAR_40;
  VAR_46.fp_optcnt = VAR_38;
  if (VAR_39)
   VAR_46.fp_flags |= VAR_10;

  if (VAR_41[0] == '@')
   VAR_46.fp_os.fp_enflags |= VAR_3;
  if (VAR_41[0] == '*')
   VAR_46.fp_os.fp_enflags |= VAR_7;

  if (VAR_41[0] == '@' || VAR_41[0] == '*')
   FUNC_14(VAR_46.fp_os.fp_class_nm, VAR_41 + 1,
       sizeof(VAR_46.fp_os.fp_class_nm));
  else
   FUNC_14(VAR_46.fp_os.fp_class_nm, VAR_41,
       sizeof(VAR_46.fp_os.fp_class_nm));
  FUNC_14(VAR_46.fp_os.fp_version_nm, VAR_42,
      sizeof(VAR_46.fp_os.fp_version_nm));
  FUNC_14(VAR_46.fp_os.fp_subtype_nm, VAR_43,
      sizeof(VAR_46.fp_os.fp_subtype_nm));

  FUNC_2(VAR_20, VAR_21, &VAR_46);

  VAR_46.fp_flags |= (VAR_2 | VAR_4);
  VAR_46.fp_psize += sizeof(struct ip6_hdr) - sizeof(struct ip);
  FUNC_2(VAR_20, VAR_21, &VAR_46);
 }

 if (VAR_41)
  FUNC_6(VAR_41);
 if (VAR_42)
  FUNC_6(VAR_42);
 if (VAR_43)
  FUNC_6(VAR_43);
 if (VAR_44)
  FUNC_6(VAR_44);
 if (VAR_45)
  FUNC_6(VAR_45);

 FUNC_3(VAR_23);

 if (VAR_21 & VAR_1)
  FUNC_13("Loaded %d passive OS fingerprints\n",
      VAR_18);
 return (0);
}
