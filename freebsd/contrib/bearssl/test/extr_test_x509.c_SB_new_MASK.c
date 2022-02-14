
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; scalar_t__ ptr; void* buf; } ;
typedef TYPE_1__ string_builder ;


 void* FUNC_0 (int) ;

__attribute__((used)) static string_builder *
FUNC_1(void)
{
 string_builder *VAR_0;

 VAR_0 = FUNC_0(sizeof *VAR_0);
 VAR_0->len = 8;
 VAR_0->buf = FUNC_0(VAR_0->len);
 VAR_0->ptr = 0;
 return VAR_0;
}
