
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int64_t
FUNC_0(const char *VAR_2, size_t VAR_3, int VAR_4)
{
 int64_t VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10;

 VAR_6 = VAR_0;
 VAR_7 = VAR_0 / VAR_4;
 VAR_8 = VAR_0 % VAR_4;




 while (VAR_3 != 0 && (*VAR_2 == ' ' || *VAR_2 == '\t')) {
  VAR_2++;
  VAR_3--;
 }

 VAR_10 = 1;
 if (VAR_3 != 0 && *VAR_2 == '-') {
  VAR_10 = -1;
  VAR_2++;
  VAR_3--;

  VAR_6 = VAR_1;
  VAR_7 = -(VAR_1 / VAR_4);
  VAR_8 = VAR_1 % VAR_4;
 }

 VAR_5 = 0;
 if (VAR_3 != 0) {
  VAR_9 = *VAR_2 - '0';
  while (VAR_9 >= 0 && VAR_9 < VAR_4 && VAR_3 != 0) {
   if (VAR_5>VAR_7 || (VAR_5 == VAR_7 && VAR_9 > VAR_8)) {
    return VAR_6;
   }
   VAR_5 = (VAR_5 * VAR_4) + VAR_9;
   VAR_9 = *++VAR_2 - '0';
   VAR_3--;
  }
 }
 return (VAR_10 < 0) ? -VAR_5 : VAR_5;
}
