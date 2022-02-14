
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbp_dev {TYPE_1__* target; int status; } ;
struct TYPE_2__ {int scan_callout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ,int ,void*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static __inline void
FUNC_1(struct sbp_dev *VAR_4)
{
 VAR_4->status = VAR_0;
 FUNC_0(&VAR_4->target->scan_callout, VAR_1 * VAR_3, 0,
     VAR_2, (void *)VAR_4->target, 0);
}
