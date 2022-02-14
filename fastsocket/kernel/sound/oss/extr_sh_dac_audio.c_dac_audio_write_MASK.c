
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (void*,char const*,size_t) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static ssize_t FUNC_3(struct file *VAR_7, const char *VAR_8, size_t VAR_9,
          loff_t * VAR_10)
{
 int VAR_11;
 int VAR_12;

 if (VAR_9 < 0)
  return -VAR_2;

 if (!VAR_9) {
  FUNC_2();
  return 0;
 }

 VAR_11 = VAR_3 - VAR_4;

 if (VAR_11 < 0)
  VAR_11 += VAR_0;
 if ((VAR_11 == 0) && (VAR_6))
  VAR_11 = VAR_0;
 if (VAR_9 > VAR_11)
  VAR_9 = VAR_11;
 if (VAR_3 > VAR_4) {
  if (FUNC_0((void *)VAR_4, VAR_8, VAR_9))
   return -VAR_1;

  VAR_4 += VAR_9;
 } else {
  VAR_12 = VAR_5 + VAR_0 - VAR_4;
  if (VAR_12 > VAR_9) {
   if (FUNC_0((void *)VAR_4, VAR_8, VAR_9))
    return -VAR_1;
   VAR_4 += VAR_9;
  } else {
   if (FUNC_0((void *)VAR_4, VAR_8, VAR_12))
    return -VAR_1;
   if (FUNC_0
       ((void *)VAR_5, VAR_8 + VAR_12, VAR_9 - VAR_12))
    return -VAR_1;
   VAR_4 = VAR_5 + VAR_9 - VAR_12;
  }
 }

 if (VAR_6) {
  VAR_6 = 0;
  FUNC_1();
 }

 return VAR_9;
}
