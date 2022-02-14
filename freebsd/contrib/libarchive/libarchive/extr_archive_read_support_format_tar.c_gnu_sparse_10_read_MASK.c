
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tar {scalar_t__ entry_bytes_remaining; } ;
struct archive_read {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct archive_read*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct archive_read*,struct tar*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct tar*) ;
 scalar_t__ FUNC_3 (struct archive_read*,struct tar*,scalar_t__*,size_t*) ;
 int FUNC_4 (struct archive_read*,size_t*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct archive_read *VAR_2, struct tar *VAR_3, size_t *VAR_4)
{
 ssize_t VAR_5;
 int VAR_6;
 int64_t VAR_7, VAR_8, VAR_9, VAR_10;


 FUNC_2(VAR_3);

 VAR_10 = VAR_3->entry_bytes_remaining;


 VAR_6 = (int)FUNC_3(VAR_2, VAR_3, &VAR_10, VAR_4);
 if (VAR_6 < 0)
  return (VAR_0);

 while (VAR_6-- > 0) {

  VAR_7 = FUNC_3(VAR_2, VAR_3, &VAR_10, VAR_4);
  if (VAR_7 < 0)
   return (VAR_0);
  VAR_8 = FUNC_3(VAR_2, VAR_3, &VAR_10, VAR_4);
  if (VAR_8 < 0)
   return (VAR_0);

  if (FUNC_1(VAR_2, VAR_3, VAR_7, VAR_8) != VAR_1)
   return (VAR_0);
 }

 FUNC_4(VAR_2, VAR_4);
 VAR_5 = (ssize_t)(VAR_3->entry_bytes_remaining - VAR_10);
 VAR_9 = 0x1ff & -VAR_5;

 if (VAR_9 > VAR_10)
  return (VAR_0);
 if (VAR_9 != FUNC_0(VAR_2, VAR_9))
  return (VAR_0);
 return ((ssize_t)(VAR_5 + VAR_9));
}
