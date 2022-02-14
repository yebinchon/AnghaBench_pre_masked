
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmclog_parse_state {struct pmclog_parse_state* ps_buffer; } ;


 int FUNC_0 (struct pmclog_parse_state*) ;

void
FUNC_1(void *VAR_0)
{
 struct pmclog_parse_state *VAR_1;

 VAR_1 = (struct pmclog_parse_state *) VAR_0;

 if (VAR_1->ps_buffer)
  FUNC_0(VAR_1->ps_buffer);

 FUNC_0(VAR_1);
}
