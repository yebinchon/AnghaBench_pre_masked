
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printf_info {int width; int pad; scalar_t__ left; } ;
struct __printf_io {int dummy; } ;


 scalar_t__ FUNC_0 (struct __printf_io*,int,int) ;
 scalar_t__ FUNC_1 (struct __printf_io*,void const*,int) ;

int
FUNC_2(struct __printf_io *VAR_0, const struct printf_info *VAR_1, const void *VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 if ((!VAR_1->left) && VAR_1->width > VAR_3)
  VAR_4 += FUNC_0(VAR_0, VAR_1->width - VAR_3, VAR_1->pad == '0');
 VAR_4 += FUNC_1(VAR_0, VAR_2, VAR_3);
 if (VAR_1->left && VAR_1->width > VAR_3)
  VAR_4 += FUNC_0(VAR_0, VAR_1->width - VAR_3, VAR_1->pad == '0');
 return (VAR_4);
}
