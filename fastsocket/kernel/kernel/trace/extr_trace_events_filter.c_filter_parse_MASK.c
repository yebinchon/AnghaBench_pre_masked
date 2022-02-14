
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_parse_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct filter_parse_state*,char) ;
 int FUNC_1 (struct filter_parse_state*) ;
 int FUNC_2 (struct filter_parse_state*) ;
 int FUNC_3 (struct filter_parse_state*) ;
 int FUNC_4 (struct filter_parse_state*) ;
 int FUNC_5 (struct filter_parse_state*,int) ;
 int FUNC_6 (struct filter_parse_state*) ;
 int FUNC_7 (struct filter_parse_state*,char) ;
 char FUNC_8 (struct filter_parse_state*) ;
 scalar_t__ FUNC_9 (struct filter_parse_state*,char) ;
 int FUNC_10 (struct filter_parse_state*,int,int) ;
 scalar_t__ FUNC_11 (char) ;
 int FUNC_12 (struct filter_parse_state*,int ,int ) ;
 int FUNC_13 (struct filter_parse_state*,int) ;
 int FUNC_14 (struct filter_parse_state*,int ) ;
 scalar_t__ FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct filter_parse_state *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8, VAR_9;
 char VAR_10;

 while ((VAR_10 = FUNC_8(VAR_6))) {
  if (VAR_10 == '"') {
   VAR_7 ^= 1;
   continue;
  }

  if (VAR_7)
   goto parse_operand;

  if (FUNC_11(VAR_10))
   continue;

  if (FUNC_9(VAR_6, VAR_10)) {
   VAR_8 = FUNC_7(VAR_6, VAR_10);
   if (VAR_8 == VAR_4) {
    FUNC_12(VAR_6, VAR_1, 0);
    return -VAR_0;
   }

   if (FUNC_15(FUNC_2(VAR_6))) {
    FUNC_14(VAR_6, FUNC_2(VAR_6));
    FUNC_1(VAR_6);
   }

   while (!FUNC_3(VAR_6)) {
    VAR_9 = FUNC_6(VAR_6);
    if (!FUNC_10(VAR_6, VAR_9, VAR_8)) {
     VAR_9 = FUNC_4(VAR_6);
     FUNC_13(VAR_6, VAR_9);
     continue;
    }
    break;
   }

   FUNC_5(VAR_6, VAR_8);
   continue;
  }

  if (VAR_10 == '(') {
   FUNC_5(VAR_6, VAR_5);
   continue;
  }

  if (VAR_10 == ')') {
   if (FUNC_15(FUNC_2(VAR_6))) {
    FUNC_14(VAR_6, FUNC_2(VAR_6));
    FUNC_1(VAR_6);
   }

   VAR_9 = FUNC_4(VAR_6);
   while (VAR_9 != VAR_4) {
    if (VAR_9 == VAR_5)
     break;
    FUNC_13(VAR_6, VAR_9);
    VAR_9 = FUNC_4(VAR_6);
   }
   if (VAR_9 == VAR_4) {
    FUNC_12(VAR_6, VAR_3, 0);
    return -VAR_0;
   }
   continue;
  }
parse_operand:
  if (FUNC_0(VAR_6, VAR_10)) {
   FUNC_12(VAR_6, VAR_2, 0);
   return -VAR_0;
  }
 }

 if (FUNC_15(FUNC_2(VAR_6)))
  FUNC_14(VAR_6, FUNC_2(VAR_6));

 while (!FUNC_3(VAR_6)) {
  VAR_9 = FUNC_4(VAR_6);
  if (VAR_9 == VAR_4)
   break;
  if (VAR_9 == VAR_5) {
   FUNC_12(VAR_6, VAR_3, 0);
   return -VAR_0;
  }
  FUNC_13(VAR_6, VAR_9);
 }

 return 0;
}
