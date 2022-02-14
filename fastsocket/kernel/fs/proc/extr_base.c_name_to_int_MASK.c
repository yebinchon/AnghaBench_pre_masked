
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;



__attribute__((used)) static unsigned FUNC_0(struct dentry *VAR_0)
{
 const char *VAR_1 = VAR_0->d_name.name;
 int VAR_2 = VAR_0->d_name.len;
 unsigned VAR_3 = 0;

 if (VAR_2 > 1 && *VAR_1 == '0')
  goto out;
 while (VAR_2-- > 0) {
  unsigned VAR_4 = *VAR_1++ - '0';
  if (VAR_4 > 9)
   goto out;
  if (VAR_3 >= (~0U-9)/10)
   goto out;
  VAR_3 *= 10;
  VAR_3 += VAR_4;
 }
 return VAR_3;
out:
 return ~0U;
}
