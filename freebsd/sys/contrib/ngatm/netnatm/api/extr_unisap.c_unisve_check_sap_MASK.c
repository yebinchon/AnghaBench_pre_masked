
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tag; } ;
struct TYPE_4__ {scalar_t__ plan; } ;
struct uni_sap {TYPE_1__ selector; TYPE_2__ addr; int bhli; int blli_id3; int blli_id2; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(const struct uni_sap *VAR_5)
{
 int VAR_6;

 if ((VAR_6 = FUNC_0(&VAR_5->addr)) != 0 ||
     (VAR_6 = FUNC_4(&VAR_5->selector)) != 0 ||
     (VAR_6 = FUNC_2(&VAR_5->blli_id2)) != 0 ||
     (VAR_6 = FUNC_3(&VAR_5->blli_id3)) != 0 ||
     (VAR_6 = FUNC_1(&VAR_5->bhli)) != 0)
  return (VAR_6);

 if (VAR_5->addr.plan == VAR_4) {
  if (VAR_5->selector.tag == VAR_2)
   return (VAR_1);
 } else if (VAR_5->addr.plan == VAR_3) {
  if (VAR_5->selector.tag == VAR_0)
   return (VAR_1);
 }
 return (0);
}
