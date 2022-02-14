
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbp_dev {scalar_t__ status; int * path; scalar_t__ freeze; TYPE_1__* target; } ;
struct TYPE_2__ {int sbp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct sbp_dev*,int ) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_5(struct sbp_dev *VAR_5)
{
 if (VAR_5 == ((void*)0))
  return;
 if (VAR_5->status == VAR_2)
  return;
 if (VAR_5->status == VAR_3)
  return;
 FUNC_0(VAR_5->target->sbp);
 FUNC_1(VAR_5, VAR_1);
 if (VAR_5->path) {
  FUNC_4(VAR_5->path,
     VAR_5->freeze, VAR_4);
  VAR_5->freeze = 0;
  FUNC_2(VAR_0, VAR_5->path, ((void*)0));
  FUNC_3(VAR_5->path);
  VAR_5->path = ((void*)0);
 }
}
