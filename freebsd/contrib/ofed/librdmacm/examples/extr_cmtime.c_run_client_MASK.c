
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_10__ {int ai_dst_addr; int ai_src_addr; int ai_connect_len; int ai_connect; } ;
struct TYPE_9__ {int responder_resources; int initiator_depth; int private_data_len; int private_data; void* retry_count; } ;
struct TYPE_8__ {int error; int id; void* retries; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__* VAR_6 ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (size_t) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int ,int ,int *,TYPE_3__**) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;
 int FUNC_4 (char*) ;
 int VAR_13 ;
 int FUNC_5 (char*,...) ;
 int VAR_14 ;
 int FUNC_6 (int *,int *,int ,int *) ;
 TYPE_3__* VAR_15 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (int ,int *,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (int ,int ) ;
 void* VAR_16 ;
 int FUNC_13 () ;
 scalar_t__ VAR_17 ;
 int FUNC_14 (TYPE_1__*,size_t) ;
 int FUNC_15 (size_t) ;
 scalar_t__* VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_16(void)
{
 pthread_t VAR_20;
 int VAR_21, VAR_22;

 VAR_22 = FUNC_3(VAR_17, VAR_9, VAR_13, &VAR_10, &VAR_15);
 if (VAR_22) {
  FUNC_5("getaddrinfo error: %s\n", FUNC_2(VAR_22));
  return VAR_22;
 }

 VAR_7.responder_resources = 1;
 VAR_7.initiator_depth = 1;
 VAR_7.retry_count = VAR_16;
 VAR_7.private_data = VAR_15->ai_connect;
 VAR_7.private_data_len = VAR_15->ai_connect_len;

 VAR_22 = FUNC_6(&VAR_20, ((void*)0), VAR_14, ((void*)0));
 if (VAR_22) {
  FUNC_4("failure creating event thread");
  return VAR_22;
 }

 if (VAR_17) {
  FUNC_5("binding source address\n");
  FUNC_15(VAR_0);
  for (VAR_21 = 0; VAR_21 < VAR_8; VAR_21++) {
   FUNC_14(&VAR_12[VAR_21], VAR_0);
   VAR_22 = FUNC_7(VAR_12[VAR_21].id, VAR_15->ai_src_addr);
   if (VAR_22) {
    FUNC_4("failure bind addr");
    VAR_12[VAR_21].error = 1;
    continue;
   }
   FUNC_0(&VAR_12[VAR_21], VAR_0);
  }
  FUNC_1(VAR_0);
 }

 FUNC_5("resolving address\n");
 FUNC_15(VAR_4);
 for (VAR_21 = 0; VAR_21 < VAR_8; VAR_21++) {
  if (VAR_12[VAR_21].error)
   continue;
  VAR_12[VAR_21].retries = VAR_16;
  FUNC_14(&VAR_12[VAR_21], VAR_4);
  VAR_22 = FUNC_11(VAR_12[VAR_21].id, VAR_15->ai_src_addr,
     VAR_15->ai_dst_addr, VAR_19);
  if (VAR_22) {
   FUNC_4("failure getting addr");
   VAR_12[VAR_21].error = 1;
   continue;
  }
  VAR_18[VAR_4]++;
 }
 while (VAR_18[VAR_4] != VAR_6[VAR_4]) FUNC_13();
 FUNC_1(VAR_4);

 FUNC_5("resolving route\n");
 FUNC_15(VAR_5);
 for (VAR_21 = 0; VAR_21 < VAR_8; VAR_21++) {
  if (VAR_12[VAR_21].error)
   continue;
  VAR_12[VAR_21].retries = VAR_16;
  FUNC_14(&VAR_12[VAR_21], VAR_5);
  VAR_22 = FUNC_12(VAR_12[VAR_21].id, VAR_19);
  if (VAR_22) {
   FUNC_4("failure resolving route");
   VAR_12[VAR_21].error = 1;
   continue;
  }
  VAR_18[VAR_5]++;
 }
 while (VAR_18[VAR_5] != VAR_6[VAR_5]) FUNC_13();
 FUNC_1(VAR_5);

 FUNC_5("creating qp\n");
 FUNC_15(VAR_2);
 for (VAR_21 = 0; VAR_21 < VAR_8; VAR_21++) {
  if (VAR_12[VAR_21].error)
   continue;
  FUNC_14(&VAR_12[VAR_21], VAR_2);
  VAR_22 = FUNC_9(VAR_12[VAR_21].id, ((void*)0), &VAR_11);
  if (VAR_22) {
   FUNC_4("failure creating qp");
   VAR_12[VAR_21].error = 1;
   continue;
  }
  FUNC_0(&VAR_12[VAR_21], VAR_2);
 }
 FUNC_1(VAR_2);

 FUNC_5("connecting\n");
 FUNC_15(VAR_1);
 for (VAR_21 = 0; VAR_21 < VAR_8; VAR_21++) {
  if (VAR_12[VAR_21].error)
   continue;
  FUNC_14(&VAR_12[VAR_21], VAR_1);
  VAR_22 = FUNC_8(VAR_12[VAR_21].id, &VAR_7);
  if (VAR_22) {
   FUNC_4("failure rconnecting");
   VAR_12[VAR_21].error = 1;
   continue;
  }
  VAR_18[VAR_1]++;
 }
 while (VAR_18[VAR_1] != VAR_6[VAR_1]) FUNC_13();
 FUNC_1(VAR_1);

 FUNC_5("disconnecting\n");
 FUNC_15(VAR_3);
 for (VAR_21 = 0; VAR_21 < VAR_8; VAR_21++) {
  if (VAR_12[VAR_21].error)
   continue;
  FUNC_14(&VAR_12[VAR_21], VAR_3);
  FUNC_10(VAR_12[VAR_21].id);
  VAR_18[VAR_3]++;
 }
 while (VAR_18[VAR_3] != VAR_6[VAR_3]) FUNC_13();
 FUNC_1(VAR_3);

 return VAR_22;
}
