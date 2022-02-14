
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int user_nodemask; } ;
struct mempolicy {scalar_t__ flags; TYPE_1__ w; } ;


 int FUNC_0 (struct mempolicy const*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(const struct mempolicy *VAR_0,
        const struct mempolicy *VAR_1)
{
 if (VAR_0->flags != VAR_1->flags)
  return 0;
 if (!FUNC_0(VAR_0))
  return 1;
 return FUNC_1(VAR_0->w.user_nodemask, VAR_1->w.user_nodemask);
}
