
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jmploc {int loc; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (char*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct jmploc* VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int ,int *,int *) ;
 char** VAR_15 ;

void
FUNC_11(void)
{
 struct jmploc VAR_16, VAR_17;
 char *VAR_18;
 int VAR_19 = 0;
 sigset_t VAR_20;

 if (!VAR_8) {
  if (VAR_12 && VAR_13) {
   VAR_19 = VAR_13;
   VAR_9 = VAR_19 + 128;
  } else
   VAR_9 = VAR_14;
 }
 VAR_10 = VAR_14 = VAR_9;
 if (!FUNC_5(VAR_16)) {
  VAR_11 = &VAR_16;
  if ((VAR_18 = VAR_15[0]) != ((void*)0) && *VAR_18 != '\0') {




   VAR_7 = 0;
   VAR_15[0] = ((void*)0);
   VAR_0;
   FUNC_1(VAR_18, 0);
  }
 }
 if (!FUNC_5(VAR_17)) {
  VAR_11 = &VAR_17;
  VAR_0;
  FUNC_2();



 }
 if (VAR_19 != 0 && VAR_19 != VAR_1 && VAR_19 != VAR_2 && VAR_19 != VAR_3 &&
     VAR_19 != VAR_4) {
  FUNC_9(VAR_19, VAR_5);
  FUNC_8(&VAR_20);
  FUNC_7(&VAR_20, VAR_19);
  FUNC_10(VAR_6, &VAR_20, ((void*)0));
  FUNC_4(FUNC_3(), VAR_19);

 }
 FUNC_0(VAR_9);
}
