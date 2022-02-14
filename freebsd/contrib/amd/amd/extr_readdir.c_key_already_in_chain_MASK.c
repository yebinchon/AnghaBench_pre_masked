
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* ne_nextentry; scalar_t__ ne_name; } ;
typedef TYPE_1__ nfsentry ;


 scalar_t__ FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(char *VAR_0, const nfsentry *VAR_1)
{
  const nfsentry *VAR_2 = VAR_1;

  while (VAR_2) {
    if (VAR_0 && VAR_2->ne_name && FUNC_0(VAR_0, VAR_2->ne_name))
        return 1;
    VAR_2 = VAR_2->ne_nextentry;
  }

  return 0;
}
