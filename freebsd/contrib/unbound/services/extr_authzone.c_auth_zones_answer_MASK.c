
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sldns_buffer {int dummy; } ;
struct regional {int dummy; } ;
struct query_info {scalar_t__ qtype; size_t qname_len; int qclass; int * qname; } ;
struct module_env {int dummy; } ;
struct edns_data {int dummy; } ;
struct dns_msg {int dummy; } ;
struct comm_reply {int dummy; } ;
struct auth_zones {int lock; int num_query_down; int have_downstream; } ;
struct auth_zone {int lock; scalar_t__ fallback_enabled; scalar_t__ zone_expired; int for_downstream; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct query_info*,struct module_env*,struct edns_data*,struct comm_reply*,struct sldns_buffer*,struct regional*,struct dns_msg*) ;
 int FUNC_1 (struct query_info*,struct module_env*,struct edns_data*,struct comm_reply*,struct sldns_buffer*,struct regional*,int ) ;
 int FUNC_2 (struct auth_zone*,struct query_info*,struct regional*,struct dns_msg**,int*) ;
 struct auth_zone* FUNC_3 (struct auth_zones*,int *,size_t,int ) ;
 int FUNC_4 (int **,size_t*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct auth_zones* VAR_2, struct module_env* VAR_3,
 struct query_info* VAR_4, struct edns_data* VAR_5,
 struct comm_reply* VAR_6, struct sldns_buffer* VAR_7, struct regional* VAR_8)
{
 struct dns_msg* VAR_9 = ((void*)0);
 struct auth_zone* VAR_10;
 int VAR_11;
 int VAR_12 = 0;

 FUNC_5(&VAR_2->lock);
 if(!VAR_2->have_downstream) {

  FUNC_6(&VAR_2->lock);
  return 0;
 }
 if(VAR_4->qtype == VAR_1) {
  uint8_t* VAR_13 = VAR_4->qname;
  size_t VAR_14 = VAR_4->qname_len;
  FUNC_4(&VAR_13, &VAR_14);
  VAR_10 = FUNC_3(VAR_2, VAR_13, VAR_14,
   VAR_4->qclass);
 } else {
  VAR_10 = FUNC_3(VAR_2, VAR_4->qname, VAR_4->qname_len,
   VAR_4->qclass);
 }
 if(!VAR_10) {

  FUNC_6(&VAR_2->lock);
  return 0;
 }
 FUNC_5(&VAR_10->lock);
 FUNC_6(&VAR_2->lock);
 if(!VAR_10->for_downstream) {
  FUNC_6(&VAR_10->lock);
  return 0;
 }
 if(VAR_10->zone_expired) {
  if(VAR_10->fallback_enabled) {
   FUNC_6(&VAR_10->lock);
   return 0;
  }
  FUNC_6(&VAR_10->lock);
  FUNC_7(&VAR_2->lock);
  VAR_2->num_query_down++;
  FUNC_6(&VAR_2->lock);
  FUNC_1(VAR_4, VAR_3, VAR_5, VAR_6, VAR_7, VAR_8,
   VAR_0);
  return 1;
 }


 VAR_11 = FUNC_2(VAR_10, VAR_4, VAR_8, &VAR_9, &VAR_12);
 FUNC_6(&VAR_10->lock);
 if(!VAR_11 && VAR_12) {

  return 0;
 }
 FUNC_7(&VAR_2->lock);
 VAR_2->num_query_down++;
 FUNC_6(&VAR_2->lock);


 if(!VAR_11)
  FUNC_1(VAR_4, VAR_3, VAR_5, VAR_6, VAR_7, VAR_8,
   VAR_0);
 else FUNC_0(VAR_4, VAR_3, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

 return 1;
}
