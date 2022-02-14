
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union node {int dummy; } node ;
struct stackmark {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 union node* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (union node*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 union node* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct stackmark*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (char const*,int) ;
 int FUNC_7 (struct stackmark*) ;

void
FUNC_8(const char *VAR_6, int VAR_7)
{
 union node *VAR_8;
 struct stackmark VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_10 = VAR_7 & VAR_0;
 VAR_7 &= ~VAR_0;
 VAR_11 = 0;
 FUNC_7(&VAR_9);
 FUNC_6(VAR_6, 1);
 while ((VAR_8 = FUNC_2(0)) != VAR_2) {
  if (VAR_8 != ((void*)0) && !VAR_5) {
   if (VAR_10 && FUNC_5())
    FUNC_0(VAR_8, VAR_7 | VAR_0);
   else
    FUNC_0(VAR_8, VAR_7);
   VAR_11 = 1;
   if (VAR_3)
    break;
  }
  FUNC_4(&VAR_9);
  FUNC_7(&VAR_9);
 }
 FUNC_3();
 FUNC_4(&VAR_9);
 if (!VAR_11)
  VAR_4 = 0;
 if (VAR_10)
  FUNC_1(VAR_1);
}
