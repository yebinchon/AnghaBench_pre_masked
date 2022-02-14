
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_lflag; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 () ;
 int * VAR_20 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int **) ;
 int * FUNC_4 (int ,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_5 (int *,int ,...) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (scalar_t__) ;
 int * VAR_21 ;
 int FUNC_8 (int *,int *,int ,int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 () ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int FUNC_11 (char*) ;
 int * VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_12 (int ,struct termios*) ;
 int FUNC_13 (int *,int ) ;

int
FUNC_14(void)
{
 HistEvent VAR_34;
 int VAR_35 = 1;
 struct termios VAR_36;

 if (VAR_20 != ((void*)0))
  FUNC_2(VAR_20);
 if (VAR_21 != ((void*)0))
  FUNC_9(VAR_21);

 if (!VAR_26)
  VAR_26 = VAR_32;
 if (!VAR_28)
  VAR_28 = VAR_33;




 if (FUNC_12(FUNC_7(VAR_26), &VAR_36) != -1 && (VAR_36.c_lflag & VAR_0) == 0)
  VAR_35 = 0;

 VAR_20 = FUNC_4(VAR_29, VAR_26, VAR_28,
     VAR_31, FUNC_7(VAR_26), FUNC_7(VAR_28), FUNC_7(VAR_31),
     VAR_13);

 if (!VAR_35)
  FUNC_5(VAR_20, VAR_3, 0);

 VAR_21 = FUNC_10();
 if (!VAR_20 || !VAR_21)
  return -1;

 FUNC_8(VAR_21, &VAR_34, VAR_11, VAR_12);
 VAR_22 = 0;
 VAR_23 = VAR_12;
 FUNC_5(VAR_20, VAR_6, FUNC_8, VAR_21);


 FUNC_5(VAR_20, VAR_8, FUNC_0, &VAR_27);


 if (VAR_25)
  FUNC_5(VAR_20, VAR_5, VAR_19);


 if (FUNC_11("") == -1) {
  FUNC_9(VAR_21);
  FUNC_2(VAR_20);
  return -1;
 }
 FUNC_5(VAR_20, VAR_7, VAR_18, VAR_14);
 FUNC_5(VAR_20, VAR_9, VAR_24);



 FUNC_5(VAR_20, VAR_4, "emacs");
 if (VAR_30 != ((void*)0))
  FUNC_5(VAR_20, VAR_10, VAR_30);
 else
  FUNC_3(VAR_20, VAR_10, &VAR_30);





 FUNC_5(VAR_20, VAR_1, "rl_complete",
     "ReadLine compatible completion function",
     VAR_16);
 FUNC_5(VAR_20, VAR_2, "^I", "rl_complete", ((void*)0));




 FUNC_5(VAR_20, VAR_1, "rl_tstp",
     "ReadLine compatible suspend function",
     VAR_17);
 FUNC_5(VAR_20, VAR_2, "^Z", "rl_tstp", ((void*)0));




 FUNC_5(VAR_20, VAR_2, "^R", "em-inc-search-prev", ((void*)0));




 FUNC_5(VAR_20, VAR_2, "\\e[1~", "ed-move-to-beg", ((void*)0));
 FUNC_5(VAR_20, VAR_2, "\\e[4~", "ed-move-to-end", ((void*)0));
 FUNC_5(VAR_20, VAR_2, "\\e[7~", "ed-move-to-beg", ((void*)0));
 FUNC_5(VAR_20, VAR_2, "\\e[8~", "ed-move-to-end", ((void*)0));
 FUNC_5(VAR_20, VAR_2, "\\e[H", "ed-move-to-beg", ((void*)0));
 FUNC_5(VAR_20, VAR_2, "\\e[F", "ed-move-to-end", ((void*)0));




 FUNC_5(VAR_20, VAR_2, "\\e[3~", "ed-delete-next-char", ((void*)0));
 FUNC_5(VAR_20, VAR_2, "\\e[2~", "ed-quoted-insert", ((void*)0));




 FUNC_5(VAR_20, VAR_2, "\\e[1;5C", "em-next-word", ((void*)0));
 FUNC_5(VAR_20, VAR_2, "\\e[1;5D", "ed-prev-word", ((void*)0));
 FUNC_5(VAR_20, VAR_2, "\\e[5C", "em-next-word", ((void*)0));
 FUNC_5(VAR_20, VAR_2, "\\e[5D", "ed-prev-word", ((void*)0));
 FUNC_5(VAR_20, VAR_2, "\\e\\e[C", "em-next-word", ((void*)0));
 FUNC_5(VAR_20, VAR_2, "\\e\\e[D", "ed-prev-word", ((void*)0));


 FUNC_6(VAR_20, ((void*)0));





 FUNC_0(VAR_20, &VAR_27);
 FUNC_1();

 FUNC_13(VAR_20, VAR_15);

 return 0;
}
