
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cch_fd; int cch_flags; } ;
typedef TYPE_1__ cap_channel_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static inline cap_channel_t *
FUNC_3(const cap_channel_t *VAR_0)
{
 cap_channel_t *VAR_1;

 VAR_1 = FUNC_0();
 if (VAR_1 == ((void*)0)) {
  return (((void*)0));
 }

 if (VAR_0->cch_fd == -1) {
  VAR_1->cch_fd = -1;
 } else {
  VAR_1->cch_fd = FUNC_1(VAR_0->cch_fd);
  if (VAR_1->cch_fd < 0) {
   FUNC_2(VAR_1);
   VAR_1 = ((void*)0);
  }
 }
 VAR_1->cch_flags = VAR_0->cch_flags;

 return (VAR_1);
}
