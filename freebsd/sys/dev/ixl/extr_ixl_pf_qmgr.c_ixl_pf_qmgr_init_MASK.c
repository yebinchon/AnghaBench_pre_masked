
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ixl_pf_qmgr_qinfo {int dummy; } ;
struct ixl_pf_qmgr {int num_queues; int * qinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int,int ,int) ;

int
FUNC_1(struct ixl_pf_qmgr *VAR_5, u16 VAR_6)
{
 if (VAR_6 < 1)
  return (VAR_0);

 VAR_5->num_queues = VAR_6;
 VAR_5->qinfo = FUNC_0(VAR_6 * sizeof(struct ixl_pf_qmgr_qinfo),
     VAR_2, VAR_4 | VAR_3);
 if (VAR_5->qinfo == ((void*)0))
  return VAR_1;

 return (0);
}
