
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct ifreq {int ifr_name; } ;
typedef int* caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int,int ,int*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,struct stat*) ;
 int VAR_5 ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_8 (void)
{

 int VAR_6, VAR_7;
 struct ifreq VAR_8;
 char VAR_9[32];
 char *VAR_10, *VAR_11;
 int VAR_12, VAR_13;
 int VAR_14 = VAR_1;




 VAR_6 = FUNC_4 (VAR_0, VAR_3, 0);
 if (VAR_6 < 0) {
  FUNC_1 (VAR_5, "Error opening socket.\n");
  return 0;
 }
 FUNC_7 (VAR_8.ifr_name, "ppp0", sizeof (VAR_8.ifr_name));
 if (FUNC_2 (VAR_6, VAR_2, (caddr_t) &VAR_8) >= 0) {

  FUNC_0 (VAR_6);
  return 1;
 }
 FUNC_0 (VAR_6);


 FUNC_5 (VAR_9, "/dev/ptyXX");
 VAR_10 = &VAR_9[8];
 VAR_11 = &VAR_9[9];
 for (VAR_12=0; VAR_12<16; VAR_12++) {
  struct stat VAR_15;

  *VAR_10 = "pqrstuvwxyzabcde"[VAR_12];
  *VAR_11 = '0';
  if (FUNC_6 (VAR_9, &VAR_15) < 0)
   continue;
  for (VAR_13=0; VAR_13<16; VAR_13++) {
   *VAR_11 = "0123456789abcdef"[VAR_13];
   VAR_7 = FUNC_3 (VAR_9, 2);
   if (VAR_7 > 0) {
    if (FUNC_2 (VAR_7, VAR_4, &VAR_14) < 0) {
     FUNC_1 (VAR_5, "No PPP discipline in kernel.\n");
     FUNC_0 (VAR_7);
     return 0;
    }
    FUNC_0 (VAR_7);
    return 1;
   }
  }
 }
 FUNC_1 (VAR_5, "Cannot get pseudo-tty.\n");
 return 0;



}
