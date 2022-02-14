
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fstab {char* fs_mntops; char* fs_spec; int fs_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 struct fstab* FUNC_1 () ;
 int FUNC_2 (int,char**,char*) ;
 char* FUNC_3 () ;
 char* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (char*,char*,char*,char const*) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 char* FUNC_7 (char*,char) ;
 int * FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*,int,char*) ;
 int FUNC_10 (int,int,int) ;
 int FUNC_11 () ;
 scalar_t__ VAR_9 ;

int
FUNC_12(int VAR_10, char **VAR_11)
{
 struct fstab *VAR_12;
 const char *VAR_13;
 char *VAR_14;
 int VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21;
 const char *VAR_22;

 VAR_18 = VAR_19 = VAR_20 = VAR_21 = 0;
 if ((VAR_14 = FUNC_7(VAR_11[0], '/')) == ((void*)0))
  VAR_14 = VAR_11[0];
 if (FUNC_8(VAR_14, "swapon") != ((void*)0))
  VAR_9 = VAR_4;
 else if (FUNC_8(VAR_14, "swapoff") != ((void*)0))
  VAR_9 = VAR_3;
 VAR_7 = VAR_9;

 VAR_17 = 0;
 VAR_22 = ((void*)0);
 while ((VAR_16 = FUNC_2(VAR_10, VAR_11, "AadEghklLmqsUF:")) != -1) {
  switch(VAR_16) {
  case 'A':
   if (VAR_9 == VAR_2) {
    VAR_17 = 1;
    VAR_9 = VAR_4;
   } else
    FUNC_11();
   break;
  case 'a':
   if (VAR_9 == VAR_4 || VAR_9 == VAR_3)
    VAR_17 = 1;
   else
    VAR_9 = VAR_4;
   break;
  case 'd':
   if (VAR_9 == VAR_2)
    VAR_9 = VAR_3;
   else
    FUNC_11();
   break;
  case 'E':
   if (VAR_9 == VAR_4)
    VAR_0 = 2;
   else
    FUNC_11();
   break;
  case 'g':
   VAR_21 = 'G';
   break;
  case 'h':
   VAR_21 = 'H';
   break;
  case 'k':
   VAR_21 = 'K';
   break;
  case 'l':
   VAR_19 = 1;
   break;
  case 'L':
   VAR_20 = 1;
   break;
  case 'm':
   VAR_21 = 'M';
   break;
  case 'q':
   if (VAR_9 == VAR_4 || VAR_9 == VAR_3)
    VAR_8 = 1;
   break;
  case 's':
   VAR_18 = 1;
   break;
  case 'U':
   if (VAR_9 == VAR_2) {
    VAR_17 = 1;
    VAR_9 = VAR_3;
   } else
    FUNC_11();
   break;
  case 'F':
   VAR_22 = VAR_5;
   break;
  case '?':
  default:
   FUNC_11();
  }
 }
 VAR_11 += VAR_6;

 VAR_15 = 0;
 VAR_13 = ((void*)0);
 if (VAR_22 != ((void*)0))
  FUNC_5(VAR_22);
 if (VAR_9 == VAR_4 || VAR_9 == VAR_3) {
  if (VAR_17) {
   while ((VAR_12 = FUNC_1()) != ((void*)0)) {
    if (FUNC_6(VAR_12->fs_type, VAR_1) != 0)
     continue;
    if (FUNC_8(VAR_12->fs_mntops, "noauto") != ((void*)0))
     continue;
    if (VAR_9 != VAR_3 &&
        FUNC_8(VAR_12->fs_mntops, "late") &&
        VAR_20 == 0)
     continue;
    if (VAR_9 == VAR_3 &&
        FUNC_8(VAR_12->fs_mntops, "late") == ((void*)0) &&
        VAR_20 != 0)
     continue;
    VAR_0 |= (FUNC_8(VAR_12->fs_mntops, "trimonce") != ((void*)0));
    VAR_13 = FUNC_9(VAR_12->fs_spec, 1,
        VAR_12->fs_mntops);
    VAR_0 &= ~1;
    if (VAR_13 == ((void*)0)) {
     VAR_15 = 1;
     continue;
    }
    if (VAR_8 == 0) {
     FUNC_4("%s: %sing %s as swap device\n",
         FUNC_3(),
         (VAR_9 == VAR_3) ?
         "remov" : "add", VAR_13);
    }
   }
  } else if (*VAR_11 == ((void*)0))
   FUNC_11();
  for (; *VAR_11; ++VAR_11) {
   VAR_13 = FUNC_9(*VAR_11, 0, ((void*)0));
   if (VAR_13 == ((void*)0)) {
    VAR_15 = 1;
    continue;
   }
   if (VAR_7 == VAR_2) {
    FUNC_4("%s: %sing %s as swap device\n",
        FUNC_3(),
        (VAR_9 == VAR_3) ? "remov" : "add",
        VAR_13);
   }
  }
 } else {
  if (VAR_19 || VAR_18)
   FUNC_10(VAR_19, VAR_18, VAR_21);
  else
   FUNC_11();
 }
 FUNC_0(VAR_15);
}
