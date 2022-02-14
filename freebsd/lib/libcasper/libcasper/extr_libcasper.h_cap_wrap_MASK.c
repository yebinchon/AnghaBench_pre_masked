
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cch_fd; int cch_flags; } ;
typedef TYPE_1__ cap_channel_t ;


 TYPE_1__* FUNC_0 () ;

__attribute__((used)) static inline cap_channel_t *
FUNC_1(int VAR_0, int VAR_1)
{
 cap_channel_t *VAR_2;

 VAR_2 = FUNC_0();
 if (VAR_2 != ((void*)0)) {
  VAR_2->cch_fd = VAR_0;
  VAR_2->cch_flags = VAR_1;
 }
 return (VAR_2);
}
