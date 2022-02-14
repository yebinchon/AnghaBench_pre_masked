
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmclog_parse_state {int ps_len; char* ps_data; scalar_t__ ps_buffer; } ;



int
FUNC_0(void *VAR_0, char *VAR_1, int VAR_2)
{
 struct pmclog_parse_state *VAR_3;

 VAR_3 = (struct pmclog_parse_state *) VAR_0;

 if (VAR_2 < 0 ||
     VAR_3->ps_buffer ||
     VAR_3->ps_len != 0)
  return -1;

 VAR_3->ps_data = VAR_1;
 VAR_3->ps_len = VAR_2;

 return 0;
}
