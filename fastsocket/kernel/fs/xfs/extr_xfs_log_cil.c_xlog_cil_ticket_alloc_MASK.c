
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlog_ticket {scalar_t__ t_curr_res; int t_trans_type; } ;
struct log {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xlog_ticket* FUNC_0 (struct log*,int ,int,int ,int ,int) ;

__attribute__((used)) static struct xlog_ticket *
FUNC_1(
 struct log *VAR_4)
{
 struct xlog_ticket *VAR_5;

 VAR_5 = FUNC_0(VAR_4, 0, 1, VAR_2, 0,
    VAR_1|VAR_0);
 VAR_5->t_trans_type = VAR_3;





 VAR_5->t_curr_res = 0;
 return VAR_5;
}
