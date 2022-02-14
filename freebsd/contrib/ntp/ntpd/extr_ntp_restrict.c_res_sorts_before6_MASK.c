
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mask; int addr; } ;
struct TYPE_7__ {TYPE_1__ v6; } ;
struct TYPE_8__ {scalar_t__ mflags; TYPE_2__ u; } ;
typedef TYPE_3__ restrict_u ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(
 restrict_u *VAR_0,
 restrict_u *VAR_1
 )
{
 int VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_0->u.v6.addr, &VAR_1->u.v6.addr);
 if (VAR_3 > 0)
  VAR_2 = 1;
 else if (VAR_3 < 0)
  VAR_2 = 0;
 else {
  VAR_3 = FUNC_0(&VAR_0->u.v6.mask, &VAR_1->u.v6.mask);
  if (VAR_3 > 0)
   VAR_2 = 1;
  else if (VAR_3 < 0)
   VAR_2 = 0;
  else if (VAR_0->mflags > VAR_1->mflags)
   VAR_2 = 1;
  else
   VAR_2 = 0;
 }

 return VAR_2;
}
