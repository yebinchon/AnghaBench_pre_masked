
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ for_refcnt; scalar_t__ for_nolock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_3(int VAR_3)
{

 if (VAR_3 > 0 || VAR_3 + VAR_0 < 0)
  return;

 if (VAR_2[~VAR_3].for_nolock)
  return;

 FUNC_1(&VAR_1);
 FUNC_0(VAR_2[~VAR_3].for_refcnt > 0,
     ("filter object refcount not valid on release"));
 VAR_2[~VAR_3].for_refcnt--;
 FUNC_2(&VAR_1);
}
