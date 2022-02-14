
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct regional {int dummy; } ;
struct query_info {int dummy; } ;
struct module_env {int dummy; } ;
struct edns_data {int bits; scalar_t__ ext_rcode; int udp_size; int edns_version; } ;
struct dns_msg {TYPE_1__* rep; } ;
struct comm_reply {int dummy; } ;
typedef int sldns_buffer ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int *,int,struct query_info*,int ,int ,struct edns_data*) ;
 int FUNC_2 (struct module_env*,struct query_info*,int *,TYPE_1__*,int,struct edns_data*,struct comm_reply*,struct regional*) ;
 int FUNC_3 (struct query_info*,TYPE_1__*,int ,int ,int *,int ,int ,struct regional*,int ,struct edns_data*,int,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void
FUNC_6(struct query_info* VAR_5, struct module_env* VAR_6,
 struct edns_data* VAR_7, struct comm_reply* VAR_8, sldns_buffer* VAR_9,
 struct regional* VAR_10, struct dns_msg* VAR_11)
{
 uint16_t VAR_12;
 VAR_12 = VAR_7->udp_size;
 VAR_7->edns_version = VAR_2;
 VAR_7->udp_size = VAR_1;
 VAR_7->ext_rcode = 0;
 VAR_7->bits &= VAR_3;

 if(!FUNC_2(VAR_6, VAR_5, ((void*)0), VAR_11->rep,
  (int)FUNC_0(VAR_11->rep->flags), VAR_7, VAR_8, VAR_10)
  || !FUNC_3(VAR_5, VAR_11->rep,
  *(uint16_t*)FUNC_4(VAR_9),
  FUNC_5(VAR_9, 2),
  VAR_9, 0, 0, VAR_10, VAR_12, VAR_7,
  (int)(VAR_7->bits&VAR_3), 0)) {
  FUNC_1(VAR_9, (VAR_4|VAR_0), VAR_5,
   *(uint16_t*)FUNC_4(VAR_9),
   FUNC_5(VAR_9, 2), VAR_7);
 }
}
