
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_11 ;
 int FUNC_2 (int,int ,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int ,char*,int,...) ;
 int VAR_12 ;
 scalar_t__ FUNC_8 (int,int) ;

__attribute__((used)) static void
FUNC_9()
{
 int VAR_13, VAR_14, VAR_15;

 VAR_13 = FUNC_6(VAR_2, VAR_8, ((void*)0));
 VAR_14 = FUNC_6(VAR_7, VAR_8, ((void*)0));
 VAR_15 = FUNC_6(VAR_12, VAR_8, ((void*)0));
 if (VAR_14 != VAR_15)
 {

  (void) FUNC_1(VAR_14, VAR_15);
 }
 if (VAR_13 == VAR_9 && VAR_14 == VAR_10 &&
     FUNC_3(VAR_13) && FUNC_3(VAR_14))
 {
  int VAR_16, VAR_17;

  VAR_16 = FUNC_2(VAR_13, VAR_0, 0);
  if (VAR_16 == -1)
  {
   if (VAR_4 > 11)
    FUNC_7(VAR_3, VAR_5,
     "fcntl(inchfd, F_GETFL) failed: %s",
     FUNC_4(VAR_11));
   return;
  }
  VAR_17 = FUNC_2(VAR_14, VAR_0, 0);
  if (VAR_17 == -1)
  {
   if (VAR_4 > 11)
    FUNC_7(VAR_3, VAR_5,
     "fcntl(outchfd, F_GETFL) failed: %s",
     FUNC_4(VAR_11));
   return;
  }
  if (FUNC_0(VAR_6, VAR_16) ||
      FUNC_0(VAR_6, VAR_17) ||
      FUNC_2(VAR_13, VAR_1, VAR_16 | VAR_6) == -1)
   return;
  VAR_17 = FUNC_2(VAR_14, VAR_0, 0);
  if (VAR_17 != -1 && FUNC_0(VAR_6, VAR_17))
  {

   FUNC_5(VAR_7, VAR_2);
   if (FUNC_8(97, 4) && VAR_4 > 9)
    FUNC_7(VAR_3, VAR_5,
       "set automode for I (%d)/O (%d) in SMTP server",
       VAR_13, VAR_14);
  }


  (void) FUNC_2(VAR_13, VAR_1, VAR_16);
 }
}
