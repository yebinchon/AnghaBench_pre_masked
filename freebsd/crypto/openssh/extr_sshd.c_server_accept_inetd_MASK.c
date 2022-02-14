
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_7 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_5(int *VAR_11, int *VAR_12)
{
 int VAR_13;

 VAR_10 = -1;
 if (VAR_9) {
  FUNC_0(VAR_1);
  *VAR_11 = *VAR_12 = FUNC_2(VAR_4);
  if (!VAR_7) {
   VAR_10 = FUNC_2(VAR_2);
   FUNC_0(VAR_2);
  }
 } else {
  *VAR_11 = FUNC_2(VAR_4);
  *VAR_12 = FUNC_2(VAR_5);
 }





 if ((VAR_13 = FUNC_4(VAR_6, VAR_0, 0)) != -1) {
  FUNC_3(VAR_13, VAR_4);
  FUNC_3(VAR_13, VAR_5);
  if (!VAR_8)
   FUNC_3(VAR_13, VAR_3);
  if (VAR_13 > (VAR_8 ? VAR_3 : VAR_5))
   FUNC_0(VAR_13);
 }
 FUNC_1("inetd sockets after dupping: %d, %d", *VAR_11, *VAR_12);
}
