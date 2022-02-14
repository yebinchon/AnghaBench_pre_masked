
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(
 FILE *VAR_3,
 const char *VAR_4,
 const char *VAR_5
 )
{
 int VAR_6;


 VAR_6 = FUNC_2(FUNC_3(VAR_4) + 1 + FUNC_3(VAR_5));

 if (VAR_1 != 0) {
  VAR_1 += 2;
  if ((VAR_2 + VAR_6 + 2) > VAR_0) {
   FUNC_0(",\n", VAR_3);
   VAR_2 = 0;
  } else {
   FUNC_0(", ", VAR_3);
   VAR_2 += 2;
  }
 }

 FUNC_0(VAR_4, VAR_3);
 FUNC_1('=', VAR_3);
 FUNC_0(VAR_5, VAR_3);
 VAR_1 += VAR_6;
 VAR_2 += VAR_6;
}
