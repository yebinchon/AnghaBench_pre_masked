
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct hpt_iop_hba {int sim; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 union ccb* FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int *,int ,int ,int ) ;
 int FUNC_3 (union ccb*) ;
 int FUNC_4 (union ccb*) ;

__attribute__((used)) static int FUNC_5(struct hpt_iop_hba * VAR_5)
{
 union ccb *VAR_6;

 if ((VAR_6 = FUNC_1()) == ((void*)0))
  return(VAR_4);
 if (FUNC_2(&VAR_6->ccb_h.path, ((void*)0), FUNC_0(VAR_5->sim),
  VAR_2, VAR_0) != VAR_1) {
  FUNC_3(VAR_6);
  return(VAR_3);
 }
 FUNC_4(VAR_6);
 return(0);
}
