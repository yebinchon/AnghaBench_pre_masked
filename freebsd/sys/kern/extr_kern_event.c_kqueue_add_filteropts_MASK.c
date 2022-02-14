
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct filterops {int dummy; } ;
struct TYPE_2__ {scalar_t__ for_refcnt; struct filterops* for_fop; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct filterops VAR_4 ;
 int FUNC_2 (char*,int,scalar_t__) ;
 TYPE_1__* VAR_5 ;

int
FUNC_3(int VAR_6, struct filterops *VAR_7)
{
 int VAR_8;

 VAR_8 = 0;
 if (VAR_6 > 0 || VAR_6 + VAR_2 < 0) {
  FUNC_2(
"trying to add a filterop that is out of range: %d is beyond %d\n",
      ~VAR_6, VAR_2);
  return VAR_1;
 }
 FUNC_0(&VAR_3);
 if (VAR_5[~VAR_6].for_fop != &VAR_4 &&
     VAR_5[~VAR_6].for_fop != ((void*)0))
  VAR_8 = VAR_0;
 else {
  VAR_5[~VAR_6].for_fop = VAR_7;
  VAR_5[~VAR_6].for_refcnt = 0;
 }
 FUNC_1(&VAR_3);

 return (VAR_8);
}
