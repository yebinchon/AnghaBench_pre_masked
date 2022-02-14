
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_6 (int ,unsigned char*,int) ;
 int FUNC_7 (int ,unsigned char*,int,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

void
FUNC_10(FILE *VAR_10)
{
 unsigned char VAR_11[VAR_0];
 int VAR_12;

 if (VAR_8 == ((void*)0)) {
  FUNC_9("Lost control connection for abort");
  if (VAR_9)
   VAR_7 = -1;
  FUNC_5(0);
  return;
 }




 VAR_11[0] = VAR_3;
 VAR_11[1] = VAR_4;
 VAR_11[2] = VAR_3;
 if (FUNC_7(FUNC_2(VAR_8), VAR_11, 3, VAR_5) != 3)
  FUNC_8("Can't send abort message");
 FUNC_3(VAR_8, "%cABOR\r\n", VAR_1);
 (void)FUNC_1(VAR_8);
 if ((VAR_12 = FUNC_0(VAR_6, VAR_10, 10)) <= 0) {
  if (VAR_12 < 0)
   FUNC_8("Can't send abort message");
  if (VAR_9)
   VAR_7 = -1;
  FUNC_5(0);
 }
 if (VAR_10 && (VAR_12 & 2)) {
  while (FUNC_6(FUNC_2(VAR_10), VAR_11, VAR_0) > 0)
   continue;
 }
 if (FUNC_4(0) == VAR_2 && VAR_7 == 552) {

  (void)FUNC_4(0);
 }
 (void)FUNC_4(0);
}
