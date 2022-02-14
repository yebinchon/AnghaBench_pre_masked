
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serviced_query {scalar_t__ status; int pending; TYPE_1__* outnet; int last_sent_time; } ;
typedef int sldns_buffer ;
struct TYPE_2__ {int * now_tv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct serviced_query*,int *,int ,int ,struct serviced_query*) ;
 int FUNC_1 (struct serviced_query*,int ,int *,int *) ;
 int FUNC_2 (struct serviced_query*,int *,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_4(struct serviced_query* VAR_5, sldns_buffer* VAR_6)
{
 FUNC_3(VAR_2, "initiate TCP query %s",
  VAR_5->status==VAR_3?"EDNS":"");
 FUNC_2(VAR_5, VAR_6, VAR_5->status == VAR_3);
 VAR_5->last_sent_time = *VAR_5->outnet->now_tv;
 VAR_5->pending = FUNC_0(VAR_5, VAR_6, VAR_1,
  VAR_4, VAR_5);
 if(!VAR_5->pending) {


  FUNC_3(VAR_2, "serviced_tcp_initiate: failed to send tcp query");
  FUNC_1(VAR_5, VAR_0, ((void*)0), ((void*)0));
 }
}
