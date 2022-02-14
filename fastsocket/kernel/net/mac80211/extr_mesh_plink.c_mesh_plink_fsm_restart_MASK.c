
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {scalar_t__ plink_retries; scalar_t__ reason; scalar_t__ plid; scalar_t__ llid; int plink_state; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct sta_info *VAR_1)
{
 VAR_1->plink_state = VAR_0;
 VAR_1->llid = VAR_1->plid = VAR_1->reason = 0;
 VAR_1->plink_retries = 0;
}
