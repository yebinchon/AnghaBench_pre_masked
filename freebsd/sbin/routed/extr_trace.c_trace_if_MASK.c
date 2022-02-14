
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct interface {char* int_name; int int_if_flags; int int_metric; int int_adj_inmetric; int int_adj_outmetric; int int_state; int int_d_metric; int int_mask; int int_net; int int_dstaddr; int int_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char,int *) ;
 int * VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int ) ;

void
FUNC_8(const char *VAR_5,
  struct interface *VAR_6)
{
 if (!VAR_1 || VAR_2 == ((void*)0))
  return;

 FUNC_5();
 (void)FUNC_2(VAR_2, "%-3s interface %-4s ", VAR_5, VAR_6->int_name);
 (void)FUNC_2(VAR_2, "%-15s-->%-15s ",
        FUNC_6(VAR_6->int_addr),
        FUNC_1(((VAR_6->int_if_flags & VAR_0)
    ? VAR_6->int_dstaddr
    : FUNC_4(VAR_6->int_net)),
          VAR_6->int_mask, 1));
 if (VAR_6->int_metric != 0)
  (void)FUNC_2(VAR_2, "metric=%d ", VAR_6->int_metric);
 if (VAR_6->int_adj_inmetric != 0)
  (void)FUNC_2(VAR_2, "adj_inmetric=%u ",
         VAR_6->int_adj_inmetric);
 if (VAR_6->int_adj_outmetric != 0)
  (void)FUNC_2(VAR_2, "adj_outmetric=%u ",
         VAR_6->int_adj_outmetric);
 if (!FUNC_0(VAR_6->int_state)
     && VAR_6->int_d_metric != 0)
  (void)FUNC_2(VAR_2, "fake_default=%u ", VAR_6->int_d_metric);
 FUNC_7(VAR_3, VAR_6->int_if_flags, 0);
 FUNC_7(VAR_4, VAR_6->int_state, 0);
 (void)FUNC_3('\n',VAR_2);
}
