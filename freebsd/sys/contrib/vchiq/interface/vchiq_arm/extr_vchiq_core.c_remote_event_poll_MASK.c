
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ armed; scalar_t__ fired; } ;
typedef TYPE_1__ REMOTE_EVENT_T ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline void
FUNC_1(REMOTE_EVENT_T *VAR_0)
{
 if (VAR_0->fired && VAR_0->armed)
  FUNC_0(VAR_0);
}
