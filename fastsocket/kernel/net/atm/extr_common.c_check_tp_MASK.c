
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_trafprm {scalar_t__ traffic_class; scalar_t__ min_pcr; scalar_t__ max_pcr; int pcr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(const struct atm_trafprm *VAR_4)
{

 if (!VAR_4->traffic_class || VAR_4->traffic_class == VAR_0) return 0;
 if (VAR_4->traffic_class != VAR_2 && !VAR_4->min_pcr && !VAR_4->pcr &&
     !VAR_4->max_pcr) return -VAR_3;
 if (VAR_4->min_pcr == VAR_1) return -VAR_3;
 if (VAR_4->min_pcr && VAR_4->max_pcr && VAR_4->max_pcr != VAR_1 &&
     VAR_4->min_pcr > VAR_4->max_pcr) return -VAR_3;




 return 0;
}
