
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {int proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ecore_hwfn*,int ,int ,int ) ;
 int FUNC_1 (struct ecore_hwfn*,int ,int ) ;
 int FUNC_2 (struct ecore_hwfn*,int ) ;
 int FUNC_3 (struct ecore_hwfn*,int ) ;
 int FUNC_4 (struct ecore_hwfn*) ;

__attribute__((used)) static void FUNC_5(struct ecore_hwfn *VAR_5)
{

 FUNC_0(
  VAR_5, VAR_0,
  FUNC_2(VAR_5,
           VAR_5->p_rdma_info->proto),
  FUNC_1(VAR_5,
           VAR_5->p_rdma_info->proto,
           VAR_3));




 FUNC_0(VAR_5, VAR_2, 0,
     FUNC_3(
      VAR_5, VAR_4));


 FUNC_0(VAR_5, VAR_1, 0,
     FUNC_4(VAR_5));
}
