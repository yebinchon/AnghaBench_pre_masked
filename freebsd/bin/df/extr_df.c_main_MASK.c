
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int totalbuf ;
struct statfs {char* f_mntonname; int f_flags; int f_fstypename; int f_mntfromname; int f_bsize; } ;
struct stat {int st_mode; } ;
struct maxwidths {char* f_mntonname; int f_flags; int f_fstypename; int f_mntfromname; int f_bsize; } ;
struct iovec {int dummy; } ;
typedef int maxwidths ;
typedef int errmsg ;
struct TYPE_2__ {char* fspec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct statfs*,struct statfs*) ;
 int VAR_10 ;
 int FUNC_2 (struct iovec**,int*,char*,char*,int) ;
 int FUNC_3 (struct iovec**,int*,char*,char*,char const*) ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (int ,char const**) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct iovec**,int*) ;
 int FUNC_8 (struct statfs**,int ) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (int,char**,char*,int ,int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 char* FUNC_11 () ;
 char** FUNC_12 (char*) ;
 struct statfs* FUNC_13 (int) ;
 TYPE_1__ VAR_17 ;
 int FUNC_14 (struct statfs*,int ,int) ;
 char* FUNC_15 (char*) ;
 int VAR_18 ;
 scalar_t__ FUNC_16 (struct iovec*,int,int) ;
 char* VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_17 (struct statfs*,struct statfs*) ;
 int FUNC_18 (struct statfs**,int,char const**) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*,char*,int) ;
 int FUNC_21 (int ,char*) ;
 scalar_t__ FUNC_22 (char*,struct stat*) ;
 scalar_t__ FUNC_23 (char*,struct statfs*) ;
 char* FUNC_24 (char*) ;
 int FUNC_25 (int ,char*,int ) ;
 int VAR_21 ;
 int FUNC_26 (char*,int ) ;
 int FUNC_27 (struct statfs*,struct statfs*) ;
 int FUNC_28 () ;
 int FUNC_29 (char*) ;
 int FUNC_30 (char*) ;
 int FUNC_31 (int,char*) ;
 int FUNC_32 (int,char*) ;
 int FUNC_33 () ;
 int FUNC_34 (char*) ;
 int FUNC_35 (char*) ;
 int FUNC_36 (int,char**) ;
 int FUNC_37 (char*,...) ;
 int FUNC_38 (char*,...) ;

int
FUNC_39(int VAR_22, char *VAR_23[])
{
 struct stat VAR_24;
 struct statfs VAR_25, VAR_26;
 struct maxwidths VAR_27;
 struct statfs *VAR_28;



 const char *VAR_29;




 char *VAR_30;
 const char **VAR_31;
 int VAR_32, VAR_33;
 int VAR_34, VAR_35;




 VAR_29 = "ufs";
 (void)FUNC_21(VAR_1, "");
 FUNC_14(&VAR_27, 0, sizeof(VAR_27));
 FUNC_14(&VAR_26, 0, sizeof(VAR_26));
 VAR_26.f_bsize = VAR_0;
 FUNC_25(VAR_26.f_mntfromname, "total", VAR_2);
 VAR_31 = ((void*)0);

 VAR_22 = FUNC_36(VAR_22, VAR_23);
 if (VAR_22 < 0)
  FUNC_5(1);

 while ((VAR_34 = FUNC_10(VAR_22, VAR_23, "+abcgHhiklmnPt:T,", VAR_16,
     ((void*)0))) != -1)
  switch (VAR_34) {
  case 'a':
   VAR_10 = 1;
   break;
  case 'b':

  case 'P':






   if (VAR_14)
    break;
   FUNC_20("BLOCKSIZE", "512", 1);
   VAR_12 = 0;
   break;
  case 'c':
   VAR_11 = 1;
   break;
  case 'g':
   FUNC_20("BLOCKSIZE", "1g", 1);
   VAR_12 = 0;
   break;
  case 'H':
   VAR_12 = VAR_9;
   break;
  case 'h':
   VAR_12 = VAR_8;
   break;
  case 'i':
   VAR_13 = 1;
   break;
  case 'k':
   VAR_14++;
   FUNC_20("BLOCKSIZE", "1024", 1);
   VAR_12 = 0;
   break;
  case 'l':

   if (VAR_15)
    break;
   if (VAR_31 != ((void*)0))
    FUNC_32(1, "-l and -t are mutually exclusive.");
   VAR_31 = FUNC_12(FUNC_11());
   VAR_15 = 1;
   break;
  case 'm':
   FUNC_20("BLOCKSIZE", "1m", 1);
   VAR_12 = 0;
   break;
  case 'n':
   VAR_18 = 1;
   break;
  case 't':
   if (VAR_15)
    FUNC_32(1, "-l and -t are mutually exclusive.");
   if (VAR_31 != ((void*)0))
    FUNC_32(1, "only one -t option may be specified");
   VAR_29 = VAR_19;
   VAR_31 = FUNC_12(VAR_19);
   break;
  case 'T':
   VAR_7 = 1;
   break;
  case ',':
   VAR_21 = 1;
   break;
  case '?':
  default:
   FUNC_28();
  }
 VAR_22 -= VAR_20;
 VAR_23 += VAR_20;

 VAR_35 = 0;
 if (!*VAR_23) {

  VAR_33 = FUNC_8(&VAR_28, VAR_5);
  VAR_33 = FUNC_18(&VAR_28, VAR_33, VAR_31);
 } else {

  VAR_28 = FUNC_13(VAR_22 * sizeof(*VAR_28));
  if (VAR_28 == ((void*)0))
   FUNC_31(1, "malloc()");
  VAR_33 = 0;

 }

 FUNC_34("storage-system-information");
 FUNC_35("filesystem");


 for (; *VAR_23; VAR_23++) {
  if (FUNC_22(*VAR_23, &VAR_24) < 0) {
   if ((VAR_30 = FUNC_9(*VAR_23)) == ((void*)0)) {
    FUNC_37("%s", *VAR_23);
    VAR_35 = 1;
    continue;
   }
  } else if (FUNC_0(VAR_24.st_mode)) {
   if ((VAR_30 = FUNC_9(*VAR_23)) == ((void*)0)) {
    FUNC_38("%s: not mounted", *VAR_23);
    VAR_35 = 1;
    continue;

   }
  } else
   VAR_30 = *VAR_23;





  if (FUNC_23(VAR_30, &VAR_25) < 0) {
   FUNC_37("%s", VAR_30);
   VAR_35 = 1;
   continue;
  }







  if (FUNC_4(VAR_25.f_fstypename, VAR_31)) {
   VAR_35 = 1;
   continue;
  }


  VAR_25.f_flags &= ~VAR_3;


  VAR_28[VAR_33++] = VAR_25;
 }

 FUNC_14(&VAR_27, 0, sizeof(VAR_27));
 for (VAR_32 = 0; VAR_32 < VAR_33; VAR_32++) {
  if (VAR_10 || (VAR_28[VAR_32].f_flags & VAR_3) == 0) {
   FUNC_27(&VAR_27, &VAR_28[VAR_32]);
   if (VAR_11)
    FUNC_1(&VAR_26, &VAR_28[VAR_32]);
  }
 }
 for (VAR_32 = 0; VAR_32 < VAR_33; VAR_32++)
  if (VAR_10 || (VAR_28[VAR_32].f_flags & VAR_3) == 0)
   FUNC_17(&VAR_28[VAR_32], &VAR_27);

 FUNC_30("filesystem");

 if (VAR_11)
  FUNC_17(&VAR_26, &VAR_27);

 FUNC_29("storage-system-information");
 FUNC_33();
 FUNC_5(VAR_35);
}
