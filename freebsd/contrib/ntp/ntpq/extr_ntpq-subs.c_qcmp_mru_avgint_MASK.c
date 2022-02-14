
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double count; int last; int first; } ;
typedef TYPE_1__ mru ;
typedef int l_fp ;


 int FUNC_0 (int *,double) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int
FUNC_4(
 const void *VAR_0,
 const void *VAR_1
 )
{
 const mru * const * VAR_2 = VAR_0;
 const mru * const * VAR_3 = VAR_1;
 const mru * VAR_4;
 const mru * VAR_5;
 l_fp VAR_6;
 double VAR_7;
 double VAR_8;

 VAR_4 = *VAR_2;
 VAR_5 = *VAR_3;

 VAR_6 = VAR_4->last;
 FUNC_3(&VAR_6, &VAR_4->first);
 FUNC_0(&VAR_6, VAR_7);
 VAR_7 /= VAR_4->count;

 VAR_6 = VAR_5->last;
 FUNC_3(&VAR_6, &VAR_5->first);
 FUNC_0(&VAR_6, VAR_8);
 VAR_8 /= VAR_5->count;

 if (VAR_7 < VAR_8)
  return -1;
 else if (VAR_7 > VAR_8)
  return 1;


 if (FUNC_1(&VAR_4->last, &VAR_5->last))
  return 0;
 else if (FUNC_2(&VAR_4->last, &VAR_5->last))
  return -1;
 else
  return 1;
}
