
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filecore_direntry {size_t len; int member_0; } ;



int
FUNC_0(void)
{
 struct filecore_direntry VAR_0 = { 0 };
 size_t VAR_1 = 0;
 size_t VAR_2 = (((VAR_0.len)<(VAR_1))?(VAR_0.len):(VAR_1));
 return VAR_2;
}
