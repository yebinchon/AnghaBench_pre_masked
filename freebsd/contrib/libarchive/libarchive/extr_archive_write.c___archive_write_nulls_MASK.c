
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {size_t null_length; int nulls; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_write*,int ,size_t) ;

int
FUNC_1(struct archive_write *VAR_1, size_t VAR_2)
{
 if (VAR_2 == 0)
  return (VAR_0);

 while (VAR_2 > 0) {
  size_t VAR_3 = VAR_2 < VAR_1->null_length ? VAR_2 : VAR_1->null_length;
  int VAR_4 = FUNC_0(VAR_1, VAR_1->nulls, VAR_3);
  if (VAR_4 < VAR_0)
   return (VAR_4);
  VAR_2 -= VAR_3;
 }
 return (VAR_0);
}
