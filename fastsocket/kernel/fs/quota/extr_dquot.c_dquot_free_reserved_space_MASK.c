
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dqb_rsvspace; } ;
struct dquot {TYPE_1__ dq_dqb; } ;
typedef scalar_t__ qsize_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline
void FUNC_1(struct dquot *VAR_0, qsize_t VAR_1)
{
 if (VAR_0->dq_dqb.dqb_rsvspace >= VAR_1)
  VAR_0->dq_dqb.dqb_rsvspace -= VAR_1;
 else {
  FUNC_0(1);
  VAR_0->dq_dqb.dqb_rsvspace = 0;
 }
}
