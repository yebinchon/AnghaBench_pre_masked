
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priq_opts {int flags; } ;
struct TYPE_2__ {struct priq_opts priq_opts; } ;
struct pf_altq {TYPE_1__ pq_u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(const struct pf_altq *VAR_6)
{
 const struct priq_opts *VAR_7;

 VAR_7 = &VAR_6->pq_u.priq_opts;

 if (VAR_7->flags) {
  FUNC_0("priq(");
  if (VAR_7->flags & VAR_4)
   FUNC_0(" red");
  if (VAR_7->flags & VAR_3)
   FUNC_0(" ecn");
  if (VAR_7->flags & VAR_5)
   FUNC_0(" rio");
  if (VAR_7->flags & VAR_1)
   FUNC_0(" codel");
  if (VAR_7->flags & VAR_0)
   FUNC_0(" cleardscp");
  if (VAR_7->flags & VAR_2)
   FUNC_0(" default");
  FUNC_0(" ) ");

  return (1);
 } else
  return (0);
}
