
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef scalar_t__ u_int ;
typedef int mode_t ;
typedef int gid_t ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int,int) ;
 int FUNC_3 (int,char*,char*) ;
 int VAR_2 ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int ) ;
 long FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (long,long) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (char*,int,scalar_t__) ;
 char* FUNC_10 (char*,char) ;
 scalar_t__ FUNC_11 (char*,char**,int ) ;
 int FUNC_12 () ;

int
FUNC_13(int VAR_3, char **VAR_4)
{
 int VAR_5;
 uid_t VAR_6;
 gid_t VAR_7;
 mode_t VAR_8;
 dev_t VAR_9;
 char *VAR_10, *VAR_11;
 long VAR_12, VAR_13;

 if (VAR_3 != 2 && VAR_3 != 5 && VAR_3 != 6)
  FUNC_12();

 if (VAR_3 >= 5) {
  VAR_8 = 0666;
  if (VAR_4[2][0] == 'c')
   VAR_8 |= VAR_1;
  else if (VAR_4[2][0] == 'b')
   VAR_8 |= VAR_0;
  else
   FUNC_4(1, "node must be type 'b' or 'c'");

  VAR_2 = 0;
  VAR_12 = (long)FUNC_11(VAR_4[3], &VAR_11, 0);
  if (VAR_11 == VAR_4[3] || *VAR_11 != '\0')
   FUNC_4(1, "%s: non-numeric major number", VAR_4[3]);
  VAR_5 = VAR_2;
  VAR_2 = 0;
  VAR_13 = (long)FUNC_11(VAR_4[4], &VAR_11, 0);
  if (VAR_11 == VAR_4[4] || *VAR_11 != '\0')
   FUNC_4(1, "%s: non-numeric minor number", VAR_4[4]);
  VAR_5 |= VAR_2;
  VAR_9 = FUNC_7(VAR_12, VAR_13);
  if (VAR_5 || FUNC_6(VAR_9) != VAR_12 ||
      (long)(u_int)FUNC_8(VAR_9) != VAR_13)
   FUNC_4(1, "major or minor number too large");
 } else {
  VAR_8 = 0666 | VAR_1;
  VAR_9 = 0;
 }

 VAR_6 = VAR_7 = -1;
 if (6 == VAR_3) {

  if ((VAR_10 = FUNC_10(VAR_4[5], ':')) != ((void*)0)) {
   *VAR_10++ = '\0';
   VAR_7 = FUNC_0(VAR_10);
  } else
  FUNC_12();
  VAR_6 = FUNC_1(VAR_4[5]);
 }

 if (FUNC_9(VAR_4[1], VAR_8, VAR_9) != 0)
  FUNC_3(1, "%s", VAR_4[1]);
 if (6 == VAR_3)
  if (FUNC_2(VAR_4[1], VAR_6, VAR_7))
   FUNC_3(1, "setting ownership on %s", VAR_4[1]);
 FUNC_5(0);
}
