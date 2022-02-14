
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct filterops {int dummy; } ;
struct TYPE_2__ {struct filterops* for_fop; int for_refcnt; scalar_t__ for_nolock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct filterops VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static struct filterops *
FUNC_2(int VAR_4)
{

 if (VAR_4 > 0 || VAR_4 + VAR_0 < 0)
  return ((void*)0);

 if (VAR_3[~VAR_4].for_nolock)
  return VAR_3[~VAR_4].for_fop;

 FUNC_0(&VAR_1);
 VAR_3[~VAR_4].for_refcnt++;
 if (VAR_3[~VAR_4].for_fop == ((void*)0))
  VAR_3[~VAR_4].for_fop = &VAR_2;
 FUNC_1(&VAR_1);

 return VAR_3[~VAR_4].for_fop;
}
