
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_mode; } ;
typedef enum op { ____Placeholder_op } op ;
struct TYPE_3__ {char* p_path; char* p_end; char* target_end; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char**,int,int) ;
 int FUNC_3 (int,char*,char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int ) ;
 int VAR_12 ;
 int FUNC_6 (int,char**,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (char*,struct stat*) ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,struct stat*) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*) ;
 TYPE_1__ VAR_21 ;
 int FUNC_12 () ;
 int VAR_22 ;

int
FUNC_13(int VAR_23, char *VAR_24[])
{
 struct stat VAR_25, VAR_26;
 enum op VAR_27;
 int VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 char *VAR_34;

 VAR_31 = VAR_6 | VAR_7;
 VAR_28 = VAR_29 = 0;
 while ((VAR_30 = FUNC_6(VAR_23, VAR_24, "HLPRafilnprsvx")) != -1)
  switch (VAR_30) {
  case 'H':
   VAR_28 = 1;
   VAR_29 = 0;
   break;
  case 'L':
   VAR_29 = 1;
   VAR_28 = 0;
   break;
  case 'P':
   VAR_28 = VAR_29 = 0;
   break;
  case 'R':
   VAR_9 = 1;
   break;
  case 'a':
   VAR_17 = 1;
   VAR_9 = 1;
   VAR_28 = VAR_29 = 0;
   break;
  case 'f':
   VAR_12 = 1;
   VAR_13 = VAR_15 = 0;
   break;
  case 'i':
   VAR_13 = 1;
   VAR_12 = VAR_15 = 0;
   break;
  case 'l':
   VAR_14 = 1;
   break;
  case 'n':
   VAR_15 = 1;
   VAR_12 = VAR_13 = 0;
   break;
  case 'p':
   VAR_17 = 1;
   break;
  case 'r':
   VAR_18 = VAR_29 = 1;
   VAR_28 = 0;
   break;
  case 's':
   VAR_19 = 1;
   break;
  case 'v':
   VAR_22 = 1;
   break;
  case 'x':
   VAR_31 |= VAR_8;
   break;
  default:
   FUNC_12();
   break;
  }
 VAR_23 -= VAR_16;
 VAR_24 += VAR_16;

 if (VAR_23 < 2)
  FUNC_12();

 if (VAR_9 && VAR_18)
  FUNC_4(1, "the -R and -r options may not be specified together");
 if (VAR_14 && VAR_19)
  FUNC_4(1, "the -l and -s options may not be specified together");
 if (VAR_18)
  VAR_9 = 1;
 if (VAR_9) {
  if (VAR_28)
   VAR_31 |= VAR_4;
  if (VAR_29) {
   VAR_31 &= ~VAR_7;
   VAR_31 |= VAR_5;
  }
 } else {
  VAR_31 &= ~VAR_7;
  VAR_31 |= VAR_5 | VAR_4;
 }
 (void)FUNC_8(VAR_10, VAR_20);


 VAR_34 = VAR_24[--VAR_23];
 if (FUNC_10(VAR_21.p_path, VAR_34, sizeof(VAR_21.p_path)) >= sizeof(VAR_21.p_path))
  FUNC_4(1, "%s: name too long", VAR_34);
 VAR_21.p_end = VAR_21.p_path + FUNC_11(VAR_21.p_path);
 if (VAR_21.p_path == VAR_21.p_end) {
  *VAR_21.p_end++ = '.';
  *VAR_21.p_end = 0;
 }
 VAR_33 = (VAR_21.p_end[-1] == '/');
 if (VAR_33)
  FUNC_0(VAR_21);
 VAR_21.target_end = VAR_21.p_end;


 VAR_24[VAR_23] = ((void*)0);
 VAR_32 = FUNC_9(VAR_21.p_path, &VAR_25);
 if (VAR_32 == -1 && VAR_11 != VAR_1)
  FUNC_3(1, "%s", VAR_21.p_path);
 if (VAR_32 == -1 || !FUNC_1(VAR_25.st_mode)) {



  if (VAR_23 > 1)
   FUNC_4(1, "%s is not a directory", VAR_21.p_path);
  if (VAR_32 == -1) {
   if (VAR_9 && (VAR_29 || VAR_28))
    FUNC_9(*VAR_24, &VAR_26);
   else
    FUNC_7(*VAR_24, &VAR_26);

   if (FUNC_1(VAR_26.st_mode) && VAR_9)
    VAR_27 = VAR_0;
   else
    VAR_27 = VAR_3;
  } else
   VAR_27 = VAR_3;

  if (VAR_33 && VAR_27 == VAR_3) {
   if (VAR_32 == -1) {
    FUNC_4(1, "directory %s does not exist",
        VAR_21.p_path);
   } else
    FUNC_4(1, "%s is not a directory", VAR_21.p_path);
  }
 } else



  VAR_27 = VAR_2;

 FUNC_5 (FUNC_2(VAR_24, VAR_27, VAR_31));
}
