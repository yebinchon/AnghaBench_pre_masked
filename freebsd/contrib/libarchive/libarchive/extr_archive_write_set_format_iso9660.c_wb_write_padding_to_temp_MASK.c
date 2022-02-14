
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int dummy; } ;
typedef size_t int64_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct archive_write*,size_t) ;

__attribute__((used)) static int
FUNC_1(struct archive_write *VAR_2, int64_t VAR_3)
{
 size_t VAR_4;
 int VAR_5;

 VAR_4 = (size_t)(VAR_3 % VAR_1);
 if (VAR_4 != 0)
  VAR_5 = FUNC_0(VAR_2, VAR_1 - VAR_4);
 else
  VAR_5 = VAR_0;
 return (VAR_5);
}
