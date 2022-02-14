
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct archive_write*,void const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_1(struct archive_write *VAR_0, const void *VAR_1, size_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 >= 0)
  return (VAR_2);
 else
  return (VAR_3);
}
