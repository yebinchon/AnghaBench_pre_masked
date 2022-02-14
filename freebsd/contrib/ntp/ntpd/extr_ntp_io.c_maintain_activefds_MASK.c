
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int VAR_3 ;
 int FUNC_6 (int ,char*,int,int) ;

void
FUNC_7(
 int VAR_4,
 int VAR_5
 )
{
 int VAR_6;

 if (VAR_4 < 0 || VAR_4 >= VAR_0) {
  FUNC_6(VAR_1,
   "Too many sockets in use, FD_SETSIZE %d exceeded by fd %d",
   VAR_0, VAR_4);
  FUNC_4(1);
 }

 if (!VAR_5) {
  FUNC_2(VAR_4, &VAR_2);
  VAR_3 = FUNC_5(VAR_4, VAR_3);
 } else {
  FUNC_0(VAR_4, &VAR_2);
  if (VAR_3 && VAR_4 == VAR_3) {
   for (VAR_6 = VAR_3 - 1; VAR_6 >= 0; VAR_6--)
    if (FUNC_1(VAR_6, &VAR_2)) {
     VAR_3 = VAR_6;
     break;
    }
   FUNC_3(VAR_4 != VAR_3);
  }
 }
}
