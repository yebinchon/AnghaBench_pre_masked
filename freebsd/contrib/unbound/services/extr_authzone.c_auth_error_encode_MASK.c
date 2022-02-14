
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct regional {int dummy; } ;
struct query_info {int dummy; } ;
struct module_env {int dummy; } ;
struct edns_data {int * opt_list; int bits; scalar_t__ ext_rcode; int udp_size; int edns_version; } ;
struct comm_reply {int dummy; } ;
typedef int sldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,struct query_info*,int ,int ,struct edns_data*) ;
 int FUNC_1 (struct module_env*,struct query_info*,int *,int *,int,struct edns_data*,struct comm_reply*,struct regional*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(struct query_info* VAR_4, struct module_env* VAR_5,
 struct edns_data* VAR_6, struct comm_reply* VAR_7, sldns_buffer* VAR_8,
 struct regional* VAR_9, int VAR_10)
{
 VAR_6->edns_version = VAR_2;
 VAR_6->udp_size = VAR_1;
 VAR_6->ext_rcode = 0;
 VAR_6->bits &= VAR_3;

 if(!FUNC_1(VAR_5, VAR_4, ((void*)0), ((void*)0),
  VAR_10, VAR_6, VAR_7, VAR_9))
  VAR_6->opt_list = ((void*)0);
 FUNC_0(VAR_8, VAR_10|VAR_0, VAR_4,
  *(uint16_t*)FUNC_2(VAR_8),
  FUNC_3(VAR_8, 2), VAR_6);
}
