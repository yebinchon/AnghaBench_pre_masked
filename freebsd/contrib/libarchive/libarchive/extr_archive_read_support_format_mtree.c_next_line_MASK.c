
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (struct archive_read*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_1 (char const*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct archive_read *VAR_1,
    const char **VAR_2, ssize_t *VAR_3, ssize_t *VAR_4, ssize_t *VAR_5)
{
 ssize_t VAR_6;
 int VAR_7;

 VAR_7 = 0;
 if (*VAR_3 == 0) {
  *VAR_5 = 0;
  VAR_6 = 0;
 } else
  VAR_6 = FUNC_1(*VAR_2, *VAR_3, VAR_5);



 while (*VAR_5 == 0 && VAR_6 == *VAR_3 && !VAR_7) {
  ssize_t VAR_8 = *VAR_4 - *VAR_3;
  size_t VAR_9 = (*VAR_4+1023) & ~1023U;
  ssize_t VAR_10;






  if (VAR_6 >= VAR_0)
   return (-1);



  if (VAR_9 < (size_t)*VAR_4 + 160)
   VAR_9 <<= 1;

  *VAR_2 = FUNC_0(VAR_1, VAR_9, VAR_3);
  if (*VAR_2 == ((void*)0)) {
   if (*VAR_4 >= *VAR_3)
    return (0);

   *VAR_2 = FUNC_0(VAR_1, *VAR_3, VAR_3);
   VAR_7 = 1;
  }
  *VAR_4 = *VAR_3;
  *VAR_2 += VAR_8;
  *VAR_3 -= VAR_8;
  VAR_10 = VAR_6;
  VAR_6 = FUNC_1(*VAR_2 + VAR_6, *VAR_3 - VAR_6, VAR_5);
  if (VAR_6 >= 0)
   VAR_6 += VAR_10;
 }
 return (VAR_6);
}
