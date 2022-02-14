
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ts ;
typedef int time_t ;
struct sockaddr_storage {int dummy; } ;
struct query_info {int qclass; int qtype; int * qname; } ;
struct lruhash_entry {int lock; int data; } ;
struct infra_cache {int dummy; } ;
struct comm_reply {int addrlen; int addr; } ;
typedef int ip ;
typedef int cs ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_storage*,int ,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct infra_cache*,int *,size_t,int ) ;
 int VAR_1 ;
 struct lruhash_entry* FUNC_3 (struct infra_cache*,int *,size_t,int) ;
 int FUNC_4 (struct infra_cache*,int *,size_t) ;
 int* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int ,char*,char*,int,char*,char*,char*,...) ;

int FUNC_11(struct infra_cache* VAR_2, uint8_t* VAR_3,
 size_t VAR_4, time_t VAR_5, struct query_info* VAR_6,
 struct comm_reply* VAR_7)
{
 int VAR_8, VAR_9;
 struct lruhash_entry* VAR_10;

 if(!VAR_1)
  return 1;


 VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_4);
 if(!VAR_8)
  return 1;


 VAR_10 = FUNC_3(VAR_2, VAR_3, VAR_4, 1);
 if(VAR_10) {
  int VAR_11 = FUNC_6(VAR_10->data, VAR_5);
  int* VAR_12 = FUNC_5(VAR_10->data, VAR_5);
  (*VAR_12)++;
  VAR_9 = FUNC_6(VAR_10->data, VAR_5);
  FUNC_7(&VAR_10->lock);

  if(VAR_11 < VAR_8 && VAR_9 >= VAR_8) {
   char VAR_13[257], VAR_14[257], VAR_15[12], VAR_16[12], VAR_17[128];
   FUNC_1(VAR_3, VAR_13);
   FUNC_1(VAR_6->qname, VAR_14);
   FUNC_9(VAR_6->qtype, VAR_15, sizeof(VAR_15));
   FUNC_8(VAR_6->qclass, VAR_16, sizeof(VAR_16));
   VAR_17[0]=0;
   if(VAR_7) {
    FUNC_0((struct sockaddr_storage *)&VAR_7->addr,
     VAR_7->addrlen, VAR_17, sizeof(VAR_17));
    FUNC_10(VAR_0, "ratelimit exceeded %s %d query %s %s %s from %s", VAR_13, VAR_8, VAR_14, VAR_16, VAR_15, VAR_17);
   } else {
    FUNC_10(VAR_0, "ratelimit exceeded %s %d query %s %s %s", VAR_13, VAR_8, VAR_14, VAR_16, VAR_15);
   }
  }
  return (VAR_9 < VAR_8);
 }


 FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
 return (1 < VAR_8);
}
