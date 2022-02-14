
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ empty_lebs; } ;
struct ubifs_info {scalar_t__ main_lebs; int lp_mutex; TYPE_1__ lst; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(struct ubifs_info *VAR_0)
{
 FUNC_2(FUNC_0(&VAR_0->lp_mutex));
 FUNC_2(VAR_0->lst.empty_lebs >= 0 &&
       VAR_0->lst.empty_lebs <= VAR_0->main_lebs);
 FUNC_1(&VAR_0->lp_mutex);
}
