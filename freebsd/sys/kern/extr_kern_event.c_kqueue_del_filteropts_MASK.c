
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ for_refcnt; int * for_fop; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

int
FUNC_2(int VAR_6)
{
 int VAR_7;

 VAR_7 = 0;
 if (VAR_6 > 0 || VAR_6 + VAR_2 < 0)
  return VAR_1;

 FUNC_0(&VAR_3);
 if (VAR_5[~VAR_6].for_fop == &VAR_4 ||
     VAR_5[~VAR_6].for_fop == ((void*)0))
  VAR_7 = VAR_1;
 else if (VAR_5[~VAR_6].for_refcnt != 0)
  VAR_7 = VAR_0;
 else {
  VAR_5[~VAR_6].for_fop = &VAR_4;
  VAR_5[~VAR_6].for_refcnt = 0;
 }
 FUNC_1(&VAR_3);

 return VAR_7;
}
