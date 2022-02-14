
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {int dummy; } ;
typedef int fd_set ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (struct ssh*) ;
 int FUNC_5 (struct ssh*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,int ,int ,...) ;

__attribute__((used)) static int
FUNC_8(struct ssh *VAR_4, fd_set *VAR_5, int VAR_6)
{
 int VAR_7;
 char VAR_8[16384];


 if (FUNC_0(VAR_6, VAR_5)) {
  VAR_7 = FUNC_3(VAR_6, VAR_8, sizeof(VAR_8));
  if (VAR_7 == 0) {
   FUNC_7("Connection closed by %.100s port %d",
       FUNC_4(VAR_4), FUNC_5(VAR_4));
   return -1;
  } else if (VAR_7 < 0) {
   if (VAR_3 != VAR_1 && VAR_3 != VAR_0 &&
       VAR_3 != VAR_2) {
    FUNC_7("Read error from remote host "
        "%.100s port %d: %.100s",
        FUNC_4(VAR_4),
        FUNC_5(VAR_4), FUNC_6(VAR_3));
    FUNC_1(255);
   }
  } else {

   FUNC_2(VAR_8, VAR_7);
  }
 }
 return 0;
}
