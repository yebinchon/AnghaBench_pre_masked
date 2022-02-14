
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tar {int dummy; } ;
struct archive_read {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct archive_read*,struct tar*,char const**,scalar_t__,size_t*) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static int64_t
FUNC_2(struct archive_read *VAR_3, struct tar *VAR_4,
    int64_t *VAR_5, size_t *VAR_6)
{
 int64_t VAR_7, VAR_8, VAR_9;
 const char *VAR_10;
 ssize_t VAR_11;
 int VAR_12, VAR_13;

 VAR_12 = 10;
 VAR_8 = VAR_2 / VAR_12;
 VAR_9 = VAR_2 % VAR_12;





 do {
  VAR_11 = FUNC_0(VAR_3, VAR_4, &VAR_10,
   (ssize_t)FUNC_1(*VAR_5, 100), VAR_6);
  if (VAR_11 <= 0)
   return (VAR_0);
  *VAR_5 -= VAR_11;
 } while (VAR_10[0] == '#');

 VAR_7 = 0;
 while (VAR_11 > 0) {
  if (*VAR_10 == '\n')
   return (VAR_7);
  if (*VAR_10 < '0' || *VAR_10 >= '0' + VAR_12)
   return (VAR_1);
  VAR_13 = *VAR_10 - '0';
  if (VAR_7 > VAR_8 || (VAR_7 == VAR_8 && VAR_13 > VAR_9))
   VAR_7 = VAR_2;
  else
   VAR_7 = (VAR_7 * VAR_12) + VAR_13;
  VAR_10++;
  VAR_11--;
 }

 return (VAR_1);
}
