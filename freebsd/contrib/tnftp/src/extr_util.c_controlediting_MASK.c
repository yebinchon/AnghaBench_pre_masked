
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HistEvent ;


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
 scalar_t__ VAR_10 ;
 int * VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int*) ;
 int * FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int *,int ,...) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int * VAR_12 ;
 int FUNC_6 (int *,int *,int ,int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

void
FUNC_9(void)
{
 if (VAR_10 && VAR_11 == ((void*)0) && VAR_12 == ((void*)0)) {
  HistEvent VAR_18;
  int VAR_19;

  VAR_11 = FUNC_2(FUNC_5(), VAR_16, VAR_17, VAR_15);

  VAR_12 = FUNC_8();
  FUNC_6(VAR_12, &VAR_18, VAR_8, 100);
  FUNC_3(VAR_11, VAR_4, FUNC_6, VAR_12);

  FUNC_3(VAR_11, VAR_3, "emacs");
  FUNC_3(VAR_11, VAR_5, VAR_13);
  FUNC_3(VAR_11, VAR_6, VAR_14);


  FUNC_3(VAR_11, VAR_0, "ftp-complete",
      "Context sensitive argument completion",
      VAR_9);
  FUNC_3(VAR_11, VAR_1, "^I", "ftp-complete", ((void*)0));
  FUNC_4(VAR_11, ((void*)0));
  if ((FUNC_1(VAR_11, VAR_2, &VAR_19) != -1) && VAR_19 == 0)
   VAR_10 = 0;


  else
   FUNC_3(VAR_11, VAR_7, 1);
 }
 if (!VAR_10) {
  if (VAR_12) {
   FUNC_7(VAR_12);
   VAR_12 = ((void*)0);
  }
  if (VAR_11) {
   FUNC_0(VAR_11);
   VAR_11 = ((void*)0);
  }
 }
}
