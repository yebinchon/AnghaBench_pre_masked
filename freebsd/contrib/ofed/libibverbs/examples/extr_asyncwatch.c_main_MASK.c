
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {char* name; int has_arg; char val; } ;
struct ibv_device {int dummy; } ;
struct ibv_context {int async_fd; } ;
struct TYPE_2__ {int port_num; } ;
struct ibv_async_event {int event_type; TYPE_1__ element; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int,char**,char*,struct option*,int *) ;
 int FUNC_3 (struct ibv_async_event*) ;
 scalar_t__ FUNC_4 (struct ibv_context*,struct ibv_async_event*) ;
 struct ibv_device** FUNC_5 (int *) ;
 char* FUNC_6 (struct ibv_device*) ;
 struct ibv_context* FUNC_7 (struct ibv_device*) ;
 int VAR_2 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int,...) ;
 int FUNC_10 (int ,int *,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (char*,char*) ;
 char* FUNC_12 (int ) ;
 int FUNC_13 (char*) ;

int FUNC_14(int VAR_5, char *VAR_6[])
{
 struct ibv_device **VAR_7;
 struct ibv_context *VAR_8;
 struct ibv_async_event VAR_9;
 char *VAR_10 = ((void*)0);
 int VAR_11 = 0;


 FUNC_10(VAR_4, ((void*)0), VAR_1, 0);

 while (1) {
  int VAR_12 = 1;
  int VAR_13;
  static struct option VAR_14[] = {
   { .name = "ib-dev", .has_arg = 1, .val = 'd' },
   { .name = "help", .has_arg = 0, .val = 'h' },
   {}
  };

  VAR_13 = FUNC_2(VAR_5, VAR_6, "d:h", VAR_14, ((void*)0));
  if (VAR_13 == -1)
   break;
  switch (VAR_13) {
  case 'd':
   VAR_10 = FUNC_12(VAR_2);
   break;
  case 'h':
   VAR_12 = 0;
   VAR_0;
  default:
   FUNC_13(VAR_6[0]);
   return VAR_12;
  }
 }
 VAR_7 = FUNC_5(((void*)0));
 if (!VAR_7) {
  FUNC_8("Failed to get IB devices list");
  return 1;
 }
 if (VAR_10) {
  for (; VAR_7[VAR_11]; ++VAR_11) {
   if (!FUNC_11(FUNC_6(VAR_7[VAR_11]), VAR_10))
    break;
  }
 }

 if (!VAR_7[VAR_11]) {
  FUNC_1(VAR_3, "IB device %s not found\n",
   VAR_10 ? VAR_10 : "");
  return 1;
 }

 VAR_8 = FUNC_7(VAR_7[VAR_11]);
 if (!VAR_8) {
  FUNC_1(VAR_3, "Couldn't get context for %s\n",
   FUNC_6(VAR_7[VAR_11]));
  return 1;
 }

 FUNC_9("%s: async event FD %d\n",
        FUNC_6(VAR_7[VAR_11]), VAR_8->async_fd);

 while (1) {
  if (FUNC_4(VAR_8, &VAR_9))
   return 1;

  FUNC_9("  event_type %s (%d), port %d\n",
         FUNC_0(VAR_9.event_type),
         VAR_9.event_type, VAR_9.element.port_num);

  FUNC_3(&VAR_9);
 }

 return 0;
}
