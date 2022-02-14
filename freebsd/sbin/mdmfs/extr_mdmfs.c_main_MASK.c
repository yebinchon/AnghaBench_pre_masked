
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtpt_info {int mi_mode; int mi_have_mode; int mi_forced_pw; } ;
typedef int mi ;
typedef scalar_t__ intmax_t ;
typedef enum md_types { ____Placeholder_md_types } md_types ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (char**,char*,...) ;
 int VAR_8 ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char const*,struct mtpt_info*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (void*,struct mtpt_info*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*,int) ;
 int FUNC_13 (int,char**,char*) ;
 char const* FUNC_14 () ;
 int FUNC_15 (char const) ;
 int FUNC_16 (char*) ;
 int VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 char const* VAR_12 ;
 int FUNC_17 (struct mtpt_info*,char,int) ;
 int FUNC_18 (char*) ;
 int VAR_13 ;
 void* VAR_14 ;
 scalar_t__ VAR_15 ;
 void* VAR_16 ;
 void* FUNC_19 (void*) ;
 scalar_t__ FUNC_20 (char const*,char*) ;
 char* FUNC_21 (char*) ;
 int FUNC_22 (char*) ;
 scalar_t__ FUNC_23 (char const*,char*,int) ;
 unsigned long FUNC_24 (char const*,char**,int) ;
 scalar_t__ FUNC_25 (char const*,char**,int ) ;
 int VAR_17 ;
 int FUNC_26 () ;

int
FUNC_27(int VAR_18, char **VAR_19)
{
 struct mtpt_info VAR_20;
 intmax_t VAR_21;
 char *VAR_22, *VAR_23,
     *VAR_24;
 enum md_types VAR_25;
 bool VAR_26, VAR_27;
 bool VAR_28, VAR_29, VAR_30, VAR_31;
 const char *VAR_32, *VAR_33, *VAR_34, *VAR_35;
 char *VAR_36;
 int VAR_37, VAR_38;
 void *VAR_39;
 unsigned long VAR_40;


 (void)FUNC_17(&VAR_20, '\0', sizeof(VAR_20));
 VAR_28 = 1;
 VAR_29 = 1;
 VAR_30 = 0;
 VAR_27 = 0;
 VAR_31 = 1;
 VAR_26 = 0;
 VAR_34 = ((void*)0);
 VAR_25 = VAR_2;
 VAR_10 = VAR_1;
 VAR_11 = FUNC_22(VAR_10);
 VAR_21 = 0;






 VAR_22 = FUNC_21("");
 VAR_23 = FUNC_21("");
 VAR_24 = FUNC_21("");
 VAR_33 = ((void*)0);


 if (FUNC_20(FUNC_14(), "mount_mfs") == 0 ||
     FUNC_20(FUNC_14(), "mfs") == 0) {

  VAR_20.mi_mode = 01777;
  VAR_20.mi_have_mode = 1;
 }

 while ((VAR_37 = FUNC_13(VAR_18, VAR_19,
     "a:b:Cc:Dd:E:e:F:f:hi:k:LlMm:NnO:o:Pp:Ss:tT:Uv:w:X")) != -1)
  switch (VAR_37) {
  case 'a':
   FUNC_0(&VAR_23, "-a %s", VAR_14);
   break;
  case 'b':
   FUNC_0(&VAR_23, "-b %s", VAR_14);
   break;
  case 'C':

   break;
  case 'c':
   FUNC_0(&VAR_23, "-c %s", VAR_14);
   break;
  case 'D':
   VAR_28 = 0;
   break;
  case 'd':
   FUNC_0(&VAR_23, "-d %s", VAR_14);
   break;
  case 'E':
   VAR_16 = VAR_14;
   break;
  case 'e':
   FUNC_0(&VAR_23, "-e %s", VAR_14);
   break;
  case 'F':
   if (VAR_26)
    FUNC_26();
   VAR_25 = VAR_3;
   VAR_26 = 1;
   FUNC_0(&VAR_22, "-f %s", VAR_14);
   break;
  case 'f':
   FUNC_0(&VAR_23, "-f %s", VAR_14);
   break;
  case 'h':
   FUNC_26();
   break;
  case 'i':
   FUNC_0(&VAR_23, "-i %s", VAR_14);
   break;
  case 'k':
   VAR_34 = VAR_14;
   break;
  case 'L':
   VAR_9 = 1;
   break;
  case 'l':
   VAR_27 = 1;
   FUNC_0(&VAR_23, "-l");
   break;
  case 'M':
   if (VAR_26)
    FUNC_26();
   VAR_25 = VAR_0;
   VAR_26 = 1;
   FUNC_0(&VAR_22, "-o reserve");
   break;
  case 'm':
   FUNC_0(&VAR_23, "-m %s", VAR_14);
   break;
  case 'N':
   VAR_13 = 1;
   break;
  case 'n':
   FUNC_0(&VAR_23, "-n");
   break;
  case 'O':
   FUNC_0(&VAR_23, "-o %s", VAR_14);
   break;
  case 'o':
   FUNC_0(&VAR_24, "-o %s", VAR_14);
   break;
  case 'P':
   VAR_31 = 0;
   break;
  case 'p':
   if ((VAR_39 = FUNC_19(VAR_14)) == ((void*)0))
    FUNC_26();
   VAR_20.mi_mode = FUNC_12(VAR_39, VAR_6 | VAR_4 | VAR_5);
   VAR_20.mi_have_mode = 1;
   VAR_20.mi_forced_pw = 1;
   FUNC_11(VAR_39);
   break;
  case 'S':
   VAR_29 = 0;
   break;
  case 's':
   VAR_33 = VAR_14;
   break;
  case 't':
   FUNC_0(&VAR_23, "-t");
   break;
  case 'T':
   FUNC_0(&VAR_24, "-t %s", VAR_14);
   break;
  case 'U':
   VAR_29 = 1;
   break;
  case 'v':
   FUNC_0(&VAR_23, "-O %s", VAR_14);
   break;
  case 'w':
   FUNC_10(VAR_14, &VAR_20);
   VAR_20.mi_forced_pw = 1;
   break;
  case 'X':
   VAR_8 = 1;
   break;
  default:
   FUNC_26();
  }
 VAR_18 -= VAR_15;
 VAR_19 += VAR_15;
 if (VAR_18 < 2)
  FUNC_26();
 if (VAR_33 != ((void*)0)) {
  VAR_21 = (intmax_t)FUNC_25(VAR_33, &VAR_36, 0);
  if (VAR_36 == VAR_33 || (VAR_36[0] != 0 && VAR_36[1] != 0) || VAR_21 < 0)
   FUNC_9(1, "invalid size '%s'", VAR_33);
  switch (*VAR_36) {
  case 'p':
  case 'P':
   VAR_21 *= 1024;
  case 't':
  case 'T':
   VAR_21 *= 1024;
  case 'g':
  case 'G':
   VAR_21 *= 1024;
  case 'm':
  case 'M':
   VAR_21 *= 1024;
  case 'k':
  case 'K':
   VAR_21 *= 1024;
  case 'b':
  case 'B':
   break;
  case '\0':
   VAR_21 *= 512;
   break;
  default:
   FUNC_9(1, "invalid size suffix on '%s'", VAR_33);
  }
 }







 VAR_35 = VAR_19[0];
 VAR_32 = VAR_19[1];

 if (FUNC_20(VAR_35, "auto") == 0) {
  if (VAR_27)
   VAR_38 = -1;
  else if ((VAR_38 = FUNC_18("tmpfs")) == -1)
   VAR_38 = FUNC_16("tmpfs");
  if (VAR_38 == -1)
   VAR_35 = "md";
  else
   VAR_35 = "tmpfs";
 }

 if (FUNC_20(VAR_35, "tmpfs") == 0) {
  if (VAR_33 != ((void*)0) && VAR_21 != 0)
   FUNC_0(&VAR_24, "-o size=%jd", VAR_21);
  FUNC_6(VAR_24, VAR_32);
 } else {
  if (VAR_33 != ((void*)0))
   FUNC_0(&VAR_22, "-s %jdB", VAR_21);
  if (FUNC_23(VAR_35, "/dev/", 5) == 0)
   VAR_35 += 5;
  if (FUNC_23(VAR_35, VAR_10, VAR_11) == 0)
   VAR_35 += VAR_11;
  if (!FUNC_15(*VAR_35)) {
   VAR_30 = 1;
   VAR_17 = -1;
   VAR_12 = VAR_35;
  } else {
   VAR_40 = FUNC_24(VAR_35, &VAR_36, 10);
   if (VAR_40 == VAR_7)
    FUNC_9(1, "bad device unit: %s", VAR_35);
   VAR_17 = VAR_40;
   VAR_12 = VAR_36;
  }

  if (!VAR_26)
   VAR_25 = VAR_2;
  if (VAR_29)
   FUNC_0(&VAR_23, "-U");
  if (VAR_25 != VAR_3 && !VAR_31)
   FUNC_9(1, "-P requires a vnode-backed disk");


  if (VAR_28 && !VAR_30)
   FUNC_4();
  if (VAR_30)
   FUNC_3(VAR_22, VAR_25);
  else
   FUNC_2(VAR_22, VAR_25);
  if (VAR_31)
   FUNC_8(VAR_23);
  FUNC_5(VAR_24, VAR_32);
 }

 FUNC_7(VAR_32, &VAR_20);
 if (VAR_34 != ((void*)0))
  FUNC_1(VAR_32, VAR_34);

 return (0);
}
