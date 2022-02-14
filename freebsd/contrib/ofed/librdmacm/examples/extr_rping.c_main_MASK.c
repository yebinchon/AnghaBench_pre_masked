
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct rping_cb {int server; int size; int count; int cm_id; int cm_channel; int cmthread; int validate; int verbose; void* port; int ssource; int sin; int sem; int state; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (struct rping_cb*) ;
 int FUNC_4 (char*,struct sockaddr*) ;
 int FUNC_5 (int,char**,char*) ;
 void* FUNC_6 (int) ;
 struct rping_cb* FUNC_7 (int) ;
 int FUNC_8 (struct rping_cb*,int ,int) ;
 char* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,int *,int ,struct rping_cb*) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int*,struct rping_cb*,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (struct rping_cb*) ;
 int FUNC_16 (struct rping_cb*) ;
 int FUNC_17 (struct rping_cb*) ;
 int FUNC_18 (int *,int ,int ) ;
 int VAR_11 ;
 int FUNC_19 (char*) ;

int FUNC_20(int VAR_12, char *VAR_13[])
{
 struct rping_cb *VAR_14;
 int VAR_15;
 int VAR_16 = 0;
 int VAR_17 = 0;

 VAR_14 = FUNC_7(sizeof(*VAR_14));
 if (!VAR_14)
  return -VAR_1;

 FUNC_8(VAR_14, 0, sizeof(*VAR_14));
 VAR_14->server = -1;
 VAR_14->state = VAR_2;
 VAR_14->size = 64;
 VAR_14->port = FUNC_6(7174);
 FUNC_18(&VAR_14->sem, 0, 0);


 VAR_16 = FUNC_4("0.0.0.0", (struct sockaddr *) &VAR_14->sin);
 if (VAR_16)
  goto out;

 VAR_10 = 0;
 while ((VAR_15=FUNC_5(VAR_12, VAR_13, "a:I:Pp:C:S:t:scvVd")) != -1) {
  switch (VAR_15) {
  case 'a':
   VAR_16 = FUNC_4(VAR_9, (struct sockaddr *) &VAR_14->sin);
   break;
  case 'I':
   VAR_16 = FUNC_4(VAR_9, (struct sockaddr *) &VAR_14->ssource);
   break;
  case 'P':
   VAR_17 = 1;
   break;
  case 'p':
   VAR_14->port = FUNC_6(FUNC_1(VAR_9));
   FUNC_0("port %d\n", (int) FUNC_1(VAR_9));
   break;
  case 's':
   VAR_14->server = 1;
   FUNC_0("server\n");
   break;
  case 'c':
   VAR_14->server = 0;
   FUNC_0("client\n");
   break;
  case 'S':
   VAR_14->size = FUNC_1(VAR_9);
   if ((VAR_14->size < VAR_5) ||
       (VAR_14->size > (VAR_4 - 1))) {
    FUNC_2(VAR_11, "Invalid size %d "
           "(valid range is %d to %d)\n",
           VAR_14->size, VAR_5, VAR_4);
    VAR_16 = VAR_0;
   } else
    FUNC_0("size %d\n", (int) FUNC_1(VAR_9));
   break;
  case 'C':
   VAR_14->count = FUNC_1(VAR_9);
   if (VAR_14->count < 0) {
    FUNC_2(VAR_11, "Invalid count %d\n",
     VAR_14->count);
    VAR_16 = VAR_0;
   } else
    FUNC_0("count %d\n", (int) VAR_14->count);
   break;
  case 'v':
   VAR_14->verbose++;
   FUNC_0("verbose\n");
   break;
  case 'V':
   VAR_14->validate++;
   FUNC_0("validate data\n");
   break;
  case 'd':
   VAR_7++;
   break;
  default:
   FUNC_19("rping");
   VAR_16 = VAR_0;
   goto out;
  }
 }
 if (VAR_16)
  goto out;

 if (VAR_14->server == -1) {
  FUNC_19("rping");
  VAR_16 = VAR_0;
  goto out;
 }

 VAR_14->cm_channel = FUNC_11();
 if (!VAR_14->cm_channel) {
  FUNC_9("rdma_create_event_channel");
  VAR_16 = VAR_8;
  goto out;
 }

 VAR_16 = FUNC_12(VAR_14->cm_channel, &VAR_14->cm_id, VAR_14, VAR_3);
 if (VAR_16) {
  FUNC_9("rdma_create_id");
  goto out2;
 }
 FUNC_0("created cm_id %p\n", VAR_14->cm_id);

 VAR_16 = FUNC_10(&VAR_14->cmthread, ((void*)0), VAR_6, VAR_14);
 if (VAR_16) {
  FUNC_9("pthread_create");
  goto out2;
 }

 if (VAR_14->server) {
  if (VAR_17)
   VAR_16 = FUNC_16(VAR_14);
  else
   VAR_16 = FUNC_17(VAR_14);
 } else {
  VAR_16 = FUNC_15(VAR_14);
 }

 FUNC_0("destroy cm_id %p\n", VAR_14->cm_id);
 FUNC_14(VAR_14->cm_id);
out2:
 FUNC_13(VAR_14->cm_channel);
out:
 FUNC_3(VAR_14);
 return VAR_16;
}
