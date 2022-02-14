
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse {scalar_t__ error; } ;
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
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct parse*,size_t) ;

__attribute__((used)) static void
FUNC_13(struct parse *VAR_7, int VAR_8, size_t VAR_9)

{
 char VAR_10;
 sopno VAR_11 = 0;
 sopno VAR_12 = 0;
 sopno VAR_13;
 int VAR_14 = 1;

 if (VAR_9++ > VAR_4 || VAR_7->error == VAR_6) {
  VAR_7->error = VAR_6;
  return;
 }

 for (;;) {

  VAR_13 = FUNC_4();
  while (FUNC_6() && (VAR_10 = FUNC_7()) != '|' && VAR_10 != VAR_8)
   FUNC_12(VAR_7, VAR_9);
  (void)FUNC_8(FUNC_4() != VAR_13, VAR_5);

  if (!FUNC_2('|'))
   break;

  if (VAR_14) {
   FUNC_5(VAR_0, VAR_13);
   VAR_12 = VAR_13;
   VAR_11 = VAR_13;
   VAR_14 = 0;
  }
  FUNC_1(VAR_1, VAR_11);
  VAR_11 = FUNC_10();
  FUNC_0(VAR_12);
  VAR_12 = FUNC_4();
  FUNC_3(VAR_2, 0);
 }

 if (!VAR_14) {
  FUNC_0(VAR_12);
  FUNC_1(VAR_3, VAR_11);
 }

 FUNC_11(!FUNC_6() || FUNC_9(VAR_8));
}
