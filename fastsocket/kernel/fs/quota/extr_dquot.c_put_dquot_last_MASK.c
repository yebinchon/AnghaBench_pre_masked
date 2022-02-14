
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dquot {int dq_free; } ;
struct TYPE_2__ {int free_dquots; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void FUNC_1(struct dquot *VAR_2)
{
 FUNC_0(&VAR_2->dq_free, &VAR_1);
 VAR_0.free_dquots++;
}
