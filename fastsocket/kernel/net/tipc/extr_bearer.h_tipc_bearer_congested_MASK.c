
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link {int dummy; } ;
struct TYPE_2__ {int blocked; } ;
struct bearer {int cong_links; TYPE_1__ publ; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bearer*,struct link*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline int FUNC_4(struct bearer *VAR_0, struct link *VAR_1)
{
 if (FUNC_3(VAR_0->publ.blocked))
  return 1;
 if (FUNC_0(FUNC_1(&VAR_0->cong_links)))
  return 0;
 return !FUNC_2(VAR_0, VAR_1);
}
