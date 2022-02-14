
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int in_use; int allocation; } ;
typedef TYPE_1__ page_group ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static inline void
FUNC_1 (page_group *VAR_0, char *VAR_1)
{
  VAR_0->in_use &= ~(1 << FUNC_0 (VAR_0->allocation, VAR_1));
}
