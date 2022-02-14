
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct sockaddr_storage {int dummy; } ;
struct sldns_buffer {int dummy; } ;
struct lruhash_entry {int lock; int data; } ;
struct infra_cache {int dummy; } ;
struct comm_reply {int addrlen; int addr; } ;
typedef int qnm ;
typedef int client_ip ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct sockaddr_storage*,int ,char*,int) ;
 struct lruhash_entry* FUNC_2 (struct infra_cache*,struct comm_reply*,int) ;
 int FUNC_3 (struct infra_cache*,struct comm_reply*,int ) ;
 int VAR_3 ;
 int* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sldns_buffer*,scalar_t__) ;
 int FUNC_8 (struct sldns_buffer*) ;
 scalar_t__ FUNC_9 (struct sldns_buffer*) ;
 int FUNC_10 (int ,scalar_t__,char*,int) ;
 char* FUNC_11 (char*,char) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,char*,char*,int,...) ;

int FUNC_14(struct infra_cache* VAR_4,
  struct comm_reply* VAR_5, time_t VAR_6, struct sldns_buffer* VAR_7)
{
 int VAR_8;
 struct lruhash_entry* VAR_9;


 if(!VAR_3) {
  return 1;
 }

 VAR_9 = FUNC_2(VAR_4, VAR_5, 1);
 if(VAR_9) {
  int VAR_10 = FUNC_5(VAR_9->data, VAR_6);
  int* VAR_11 = FUNC_4(VAR_9->data, VAR_6);
  (*VAR_11)++;
  VAR_8 = FUNC_5(VAR_9->data, VAR_6);
  FUNC_6(&VAR_9->lock);

  if(VAR_10 < VAR_3 && VAR_8 >= VAR_3) {
   char VAR_12[128], VAR_13[VAR_1+1+12+12];
   FUNC_1((struct sockaddr_storage *)&VAR_5->addr,
    VAR_5->addrlen, VAR_12, sizeof(VAR_12));
   VAR_13[0]=0;
   if(FUNC_9(VAR_7)>VAR_0 &&
    FUNC_0(FUNC_8(VAR_7))!=0) {
    (void)FUNC_10(
     FUNC_7(VAR_7, VAR_0),
     FUNC_9(VAR_7)-VAR_0,
     VAR_13, sizeof(VAR_13));
    if(FUNC_12(VAR_13)>0 && VAR_13[FUNC_12(VAR_13)-1]=='\n')
     VAR_13[FUNC_12(VAR_13)-1] = 0;
    if(FUNC_11(VAR_13, '\t'))
     *FUNC_11(VAR_13, '\t') = ' ';
    if(FUNC_11(VAR_13, '\t'))
     *FUNC_11(VAR_13, '\t') = ' ';
    FUNC_13(VAR_2, "ip_ratelimit exceeded %s %d %s",
     VAR_12, VAR_3, VAR_13);
   } else {
    FUNC_13(VAR_2, "ip_ratelimit exceeded %s %d (no query name)",
     VAR_12, VAR_3);
   }
  }
  return (VAR_8 <= VAR_3);
 }


 FUNC_3(VAR_4, VAR_5, VAR_6);
 return 1;
}
