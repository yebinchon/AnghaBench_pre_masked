
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse {int dummy; } ;
typedef scalar_t__ sopno ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (char) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char FUNC_7 () ;
 int VAR_4 ;
 int FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct parse*) ;

__attribute__((used)) static void
FUNC_13(struct parse *VAR_5, int VAR_6)
{
 char VAR_7;
 sopno VAR_8 = 0;
 sopno VAR_9 = 0;
 sopno VAR_10;
 int VAR_11 = 1;

 for (;;) {

  VAR_10 = FUNC_4();
  while (FUNC_6() && (VAR_7 = FUNC_7()) != '|' && VAR_7 != VAR_6)
   FUNC_12(VAR_5);
  FUNC_8(FUNC_4() != VAR_10, VAR_4);

  if (!FUNC_2('|'))
   break;

  if (VAR_11) {
   FUNC_5(VAR_0, VAR_10);
   VAR_9 = VAR_10;
   VAR_8 = VAR_10;
   VAR_11 = 0;
  }
  FUNC_1(VAR_1, VAR_8);
  VAR_8 = FUNC_10();
  FUNC_0(VAR_9);
  VAR_9 = FUNC_4();
  FUNC_3(VAR_2, 0);
 }

 if (!VAR_11) {
  FUNC_0(VAR_9);
  FUNC_1(VAR_3, VAR_8);
 }

 FUNC_11(!FUNC_6() || FUNC_9(VAR_6));
}
