
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int * VAR_12 ;
 int FUNC_0 (int *) ;
 int * VAR_13 ;
 int * FUNC_1 (int ,int *,int *,int *) ;
 int * VAR_14 ;
 int FUNC_2 (int *,int ,char*,...) ;
 int FUNC_3 (int *,int *) ;
 void* FUNC_4 (int,char*) ;
 int VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_8 (int ) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;

void
FUNC_14(void)
{



 if (VAR_18) {
  if (!VAR_16) {



   VAR_6;
   VAR_16 = FUNC_6();
   VAR_7;

   if (VAR_16 != ((void*)0))
    FUNC_12(FUNC_7());
   else
    FUNC_10("sh: can't initialize history\n");
  }
  if ((VAR_5 || VAR_8) && !VAR_12 && FUNC_8(0)) {



   char *VAR_19;

   VAR_6;
   if (VAR_13 == ((void*)0))
    VAR_13 = FUNC_4(0, "r");
   if (VAR_14 == ((void*)0))
    VAR_14 = FUNC_4(2, "w");
   if (VAR_13 == ((void*)0) || VAR_14 == ((void*)0))
    goto bad;
   VAR_19 = FUNC_9("TERM");
   if (VAR_19)
    FUNC_11("TERM", VAR_19, 1);
   else
    FUNC_13("TERM");
   VAR_12 = FUNC_1(VAR_10, VAR_13, VAR_14, VAR_14);
   if (VAR_12 != ((void*)0)) {
    if (VAR_16)
     FUNC_2(VAR_12, VAR_3, VAR_17, VAR_16);
    FUNC_2(VAR_12, VAR_4, VAR_15);
    FUNC_2(VAR_12, VAR_0, "sh-complete",
        "Filename completion",
        VAR_9);
   } else {
bad:
    FUNC_10("sh: can't initialize editing\n");
   }
   VAR_7;
  } else if (!(VAR_5 || VAR_8) && VAR_12) {
   VAR_6;
   FUNC_0(VAR_12);
   VAR_12 = ((void*)0);
   VAR_7;
  }
  if (VAR_12) {
   if (VAR_8)
    FUNC_2(VAR_12, VAR_2, "vi");
   else if (VAR_5)
    FUNC_2(VAR_12, VAR_2, "emacs");
   FUNC_2(VAR_12, VAR_1, "^I", "sh-complete", ((void*)0));
   FUNC_3(VAR_12, ((void*)0));
  }
 } else {
  VAR_6;
  if (VAR_12) {
   FUNC_0(VAR_12);
   VAR_12 = ((void*)0);
  }
  if (VAR_16) {
   FUNC_5(VAR_16);
   VAR_16 = ((void*)0);
  }
  VAR_7;
 }
}
