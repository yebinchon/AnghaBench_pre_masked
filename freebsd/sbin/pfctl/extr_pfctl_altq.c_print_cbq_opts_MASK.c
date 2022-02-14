
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cbq_opts {int flags; } ;
struct TYPE_2__ {struct cbq_opts cbq_opts; } ;
struct pf_altq {TYPE_1__ pq_u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(const struct pf_altq *VAR_11)
{
 const struct cbq_opts *VAR_12;

 VAR_12 = &VAR_11->pq_u.cbq_opts;
 if (VAR_12->flags) {
  FUNC_0("cbq(");
  if (VAR_12->flags & VAR_7)
   FUNC_0(" red");
  if (VAR_12->flags & VAR_4)
   FUNC_0(" ecn");
  if (VAR_12->flags & VAR_8)
   FUNC_0(" rio");
  if (VAR_12->flags & VAR_2)
   FUNC_0(" codel");
  if (VAR_12->flags & VAR_1)
   FUNC_0(" cleardscp");
  if (VAR_12->flags & VAR_6)
   FUNC_0(" flowvalve");
  if (VAR_12->flags & VAR_0)
   FUNC_0(" borrow");
  if (VAR_12->flags & VAR_10)
   FUNC_0(" wrr");
  if (VAR_12->flags & VAR_5)
   FUNC_0(" efficient");
  if (VAR_12->flags & VAR_9)
   FUNC_0(" root");
  if (VAR_12->flags & VAR_3)
   FUNC_0(" default");
  FUNC_0(" ) ");

  return (1);
 } else
  return (0);
}
