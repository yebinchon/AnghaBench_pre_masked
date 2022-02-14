
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varlist {scalar_t__ name; scalar_t__ value; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (char*,char*,size_t) ;
 int VAR_1 ;
 size_t FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(
 struct varlist *VAR_2,
 size_t *VAR_3,
 char *VAR_4
 )
{
 register struct varlist *VAR_5;
 register char *VAR_6, *VAR_7;
 register size_t VAR_8, VAR_9;
 register size_t VAR_10;

 VAR_6 = VAR_4;
 VAR_7 = VAR_4 + *VAR_3;

 for (VAR_5 = VAR_2; VAR_5 < VAR_2 + VAR_0 && VAR_5->name != 0; VAR_5++) {
  VAR_8 = FUNC_2(VAR_5->name);
  if (VAR_5->value == 0)
   VAR_9 = 0;
  else
   VAR_9 = FUNC_2(VAR_5->value);
  VAR_10 = VAR_8 + VAR_9 + (VAR_9 != 0) + (VAR_6 != VAR_4);
  if (VAR_6 + VAR_10 > VAR_7) {
      FUNC_0(VAR_1,
       "***Ignoring variables starting with `%ld'\n",
       VAR_5->name);
      break;
  }

  if (VAR_6 != VAR_4)
   *VAR_6++ = ',';
  FUNC_1(VAR_6, VAR_5->name, (size_t)VAR_8);
  VAR_6 += VAR_8;
  if (VAR_9 != 0) {
   *VAR_6++ = '=';
   FUNC_1(VAR_6, VAR_5->value, (size_t)VAR_9);
   VAR_6 += VAR_9;
  }
 }
 *VAR_3 = (size_t)(VAR_6 - VAR_4);
}
