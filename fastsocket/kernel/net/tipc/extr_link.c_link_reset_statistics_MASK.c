
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int recv_info; int sent_info; } ;
struct link {int next_in_no; TYPE_1__ stats; int next_out_no; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct link *VAR_0)
{
 FUNC_0(&VAR_0->stats, 0, sizeof(VAR_0->stats));
 VAR_0->stats.sent_info = VAR_0->next_out_no;
 VAR_0->stats.recv_info = VAR_0->next_in_no;
}
