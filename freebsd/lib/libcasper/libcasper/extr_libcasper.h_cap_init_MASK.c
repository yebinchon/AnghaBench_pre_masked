
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cch_fd; } ;
typedef TYPE_1__ cap_channel_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline cap_channel_t *
FUNC_1(void)
{
 cap_channel_t *VAR_0;

 VAR_0 = (cap_channel_t *)FUNC_0(sizeof(*VAR_0));
 if (VAR_0 != ((void*)0)) {
  VAR_0->cch_fd = -1;
 }
 return (VAR_0);
}
