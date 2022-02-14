
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int archive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,...) ;

__attribute__((used)) static int
FUNC_1(struct archive_write *VAR_3, int *VAR_4, int VAR_5, int VAR_6,
    const char *VAR_7, const char *VAR_8)
{
 const char *VAR_9 = VAR_8;
 int VAR_10 = 0;
 int VAR_11 = 0;

 if (VAR_9 == ((void*)0)) {
  FUNC_0(&VAR_3->archive, VAR_0,
      "Invalid value(empty) for option ``%s''", VAR_7);
  return (VAR_1);
 }
 if (*VAR_9 == '-') {
  VAR_11 = 1;
  VAR_9++;
 }
 while (*VAR_9) {
  if (*VAR_9 >= '0' && *VAR_9 <= '9')
   VAR_10 = VAR_10 * 10 + *VAR_9 - '0';
  else {
   FUNC_0(&VAR_3->archive, VAR_0,
       "Invalid value for option ``%s''", VAR_7);
   return (VAR_1);
  }
  if (VAR_10 > VAR_5) {
   FUNC_0(&VAR_3->archive, VAR_0,
       "Invalid value(over %d) for "
       "option ``%s''", VAR_5, VAR_7);
   return (VAR_1);
  }
  if (VAR_10 < VAR_6) {
   FUNC_0(&VAR_3->archive, VAR_0,
       "Invalid value(under %d) for "
       "option ``%s''", VAR_6, VAR_7);
   return (VAR_1);
  }
  VAR_9++;
 }
 if (VAR_11)
  VAR_10 *= -1;
 *VAR_4 = VAR_10;

 return (VAR_2);
}
