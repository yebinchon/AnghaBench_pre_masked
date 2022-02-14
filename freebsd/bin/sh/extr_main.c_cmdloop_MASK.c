
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union node {int dummy; } node ;
struct stackmark {int dummy; } ;


 int VAR_0 ;
 union node* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (union node*,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (char*) ;
 int VAR_8 ;
 union node* FUNC_6 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (struct stackmark*) ;
 int FUNC_8 (struct stackmark*) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 () ;

__attribute__((used)) static void
FUNC_11(int VAR_10)
{
 union node *VAR_11;
 struct stackmark VAR_12;
 int VAR_13;
 int VAR_14 = 0;

 FUNC_0(("cmdloop(%d) called\n", VAR_10));
 FUNC_8(&VAR_12);
 for (;;) {
  if (VAR_9)
   FUNC_2();
  VAR_13 = 0;
  if (VAR_5 && VAR_10) {
   VAR_13++;
   FUNC_9(1, VAR_2);
   FUNC_1(0);
   FUNC_4(&VAR_8);
  }
  VAR_11 = FUNC_6(VAR_13);

  if (VAR_11 == VAR_1) {
   if (!VAR_10 || VAR_14 >= 50)
    break;
   if (!FUNC_10()) {
    if (!VAR_0)
     break;
    FUNC_5("\nUse \"exit\" to leave shell.\n");
   }
   VAR_14++;
  } else if (VAR_11 != ((void*)0) && VAR_7 == 0) {
   VAR_6 = (VAR_6 == 2) ? 1 : 0;
   VAR_14 = 0;
   FUNC_3(VAR_11, 0);
  }
  FUNC_7(&VAR_12);
  FUNC_8(&VAR_12);
  if (VAR_4 != 0) {
   if (VAR_4 == VAR_3)
    VAR_4 = 0;
   break;
  }
 }
 FUNC_7(&VAR_12);
}
