
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ttbuf ;
struct winsize {int dummy; } ;
struct termios {int c_lflag; int c_oflag; int c_iflag; } ;
typedef int ptbuf ;
typedef int mysig_t ;


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
 char* FUNC_0 (int*,int,int,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int ,char*) ;
 int FUNC_4 (char const*,int) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int,char*,char const,...) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int,struct termios*) ;
 int FUNC_10 (int,int ,struct termios*) ;
 char* FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;

int
FUNC_13(int *VAR_12, int *VAR_13, char *VAR_14, struct termios *VAR_15,
   struct winsize *VAR_16)
{
 char VAR_17[64], VAR_18[64];
 int VAR_19;
 const char *VAR_20 = "pqrstuvwxyzabcdefghijklmno"
     "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 const char *VAR_21 = "0123456789abcdef";
 int VAR_22 = FUNC_8(VAR_21);
 int VAR_23 = FUNC_8(VAR_20) * VAR_22;
 struct termios VAR_24;

 for (VAR_19 = 0; VAR_19 < VAR_23; VAR_19++) {
  FUNC_7(VAR_17, sizeof(VAR_17), "/dev/pty%c%c",
      VAR_20[VAR_19 / VAR_22], VAR_21[VAR_19 % VAR_22]);
  FUNC_7(VAR_18, sizeof(VAR_18), "/dev/tty%c%c",
      VAR_20[VAR_19 / VAR_22], VAR_21[VAR_19 % VAR_22]);

  if ((*VAR_12 = FUNC_4(VAR_17, VAR_8 | VAR_7)) == -1) {

   FUNC_7(VAR_17, sizeof(VAR_17), "/dev/ptyp%d", VAR_19);
   FUNC_7(VAR_18, sizeof(VAR_18), "/dev/ttyp%d", VAR_19);
   if ((*VAR_12 = FUNC_4(VAR_17, VAR_8 | VAR_7)) == -1)
    continue;
  }


  if ((*VAR_13 = FUNC_4(VAR_18, VAR_8 | VAR_7)) == -1) {
   FUNC_1(*VAR_12);
   return (-1);
  }

  if (FUNC_9(*VAR_12, &VAR_24) != -1) {
   VAR_24.c_lflag |= (VAR_0 | VAR_3 | VAR_1);
   VAR_24.c_oflag |= (VAR_6 | VAR_5);
   VAR_24.c_iflag |= VAR_2;
   FUNC_10(*VAR_12, VAR_11, &VAR_24);
  }

  return (0);
 }
 return (-1);

}
