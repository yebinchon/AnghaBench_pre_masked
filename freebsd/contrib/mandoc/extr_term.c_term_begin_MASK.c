
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* term_margin ;
struct termp {int (* begin ) (struct termp*) ;struct roff_meta const* argf; void* footf; void* headf; } ;
struct roff_meta {int dummy; } ;


 int FUNC_0 (struct termp*) ;

void
FUNC_1(struct termp *VAR_0, term_margin VAR_1,
  term_margin VAR_2, const struct roff_meta *VAR_3)
{

 VAR_0->headf = VAR_1;
 VAR_0->footf = VAR_2;
 VAR_0->argf = VAR_3;
 (*VAR_0->begin)(VAR_0);
}
