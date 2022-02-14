
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union yystype {int dummy; } yystype ;
typedef int arith_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int ) ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_2 ;
 int FUNC_3 (int,union yystype*,int,int) ;
 int FUNC_4 () ;
 union yystype VAR_3 ;

__attribute__((used)) static arith_t FUNC_5(arith_t VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 for (;;) {
  union yystype VAR_8;
  arith_t VAR_9;
  int VAR_10;
  int VAR_11;

  VAR_11 = FUNC_4();
  VAR_8 = VAR_3;

  VAR_9 = FUNC_3(VAR_11, &VAR_8, FUNC_4(), VAR_7);

  VAR_10 = VAR_2;
  if (VAR_10 >= VAR_1 && VAR_10 < VAR_0 &&
      FUNC_2(VAR_10, VAR_5)) {
   VAR_9 = FUNC_5(VAR_9, VAR_10, FUNC_0(VAR_5), VAR_7);
   VAR_10 = VAR_2;
  }

  VAR_4 = VAR_7 ? VAR_9 : FUNC_1(VAR_5, VAR_4, VAR_9);

  if (VAR_10 < VAR_1 || VAR_10 >= VAR_0 ||
      FUNC_0(VAR_10) >= VAR_6)
   return VAR_4;

  VAR_5 = VAR_10;
 }
}
