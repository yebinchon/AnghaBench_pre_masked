
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ecore_sb_cnt_info {scalar_t__ iov_orig; scalar_t__ orig; scalar_t__ free_cnt_iov; scalar_t__ iov_cnt; scalar_t__ free_cnt; scalar_t__ cnt; } ;
struct ecore_ptt {int dummy; } ;
struct TYPE_4__ {TYPE_1__* p_igu_info; } ;
struct ecore_hwfn {TYPE_2__ hw_info; } ;
struct TYPE_3__ {struct ecore_sb_cnt_info usage; } ;


 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*) ;

int FUNC_1(struct ecore_hwfn *VAR_0,
        struct ecore_ptt *VAR_1)
{
 struct ecore_sb_cnt_info *VAR_2 = &VAR_0->hw_info.p_igu_info->usage;





 VAR_2->cnt = VAR_2->orig;
 VAR_2->free_cnt = VAR_2->orig;
 VAR_2->iov_cnt = VAR_2->iov_orig;
 VAR_2->free_cnt_iov = VAR_2->iov_orig;
 VAR_2->orig = 0;
 VAR_2->iov_orig = 0;


 return FUNC_0(VAR_0, VAR_1);
}
