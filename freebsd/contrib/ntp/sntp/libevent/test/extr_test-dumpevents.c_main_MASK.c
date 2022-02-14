
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct timeval {int member_0; int member_1; scalar_t__ tv_usec; scalar_t__ tv_sec; } const timeval ;
struct event_base {int dummy; } ;
struct event {int dummy; } ;
typedef int evutil_socket_t ;
typedef int WSADATA ;
typedef int WORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct event*,int,int) ;
 int FUNC_3 (struct event*,struct timeval const*) ;
 int FUNC_4 (struct event_base*,int ) ;
 int FUNC_5 (struct event_base*) ;
 struct timeval const* FUNC_6 (struct event_base*,struct timeval const*) ;
 struct event_base* FUNC_7 () ;
 int FUNC_8 (struct event*) ;
 struct event* FUNC_9 (struct event_base*,int,int,int ,int *) ;
 struct event* FUNC_10 (struct event_base*,scalar_t__,int ,int *) ;
 struct event* FUNC_11 (struct event_base*,int ,int *) ;
 int FUNC_12 (struct timeval const*,int *) ;
 scalar_t__ FUNC_13 (int*) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (char*,long,...) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*) ;
 int VAR_8 ;
 int VAR_9 ;

int
FUNC_18(int VAR_10, char **VAR_11)
{

 int VAR_12;
 struct event *VAR_13[13];
 evutil_socket_t VAR_14[2];
 evutil_socket_t VAR_15[2];
 struct timeval VAR_16 = {1,0};
 struct timeval VAR_17 = {2,500*1000};
 const struct timeval *VAR_18;
 const struct timeval *VAR_19;
 struct event_base *VAR_20;
 struct timeval VAR_21;
 if (FUNC_13(VAR_14) < 0 ||
     FUNC_13(VAR_15) < 0) {
  FUNC_17("evutil_make_internal_pipe_");
  return 1;
 }

 if (!(VAR_20 = FUNC_7())) {
  FUNC_14(VAR_8,"Couldn't make event_base\n");
  return 2;
 }

 VAR_18 = FUNC_6(VAR_20, &VAR_16);
 VAR_19 = FUNC_6(VAR_20, &VAR_17);

 VAR_13[0] = FUNC_9(VAR_20, VAR_14[0], VAR_3, VAR_6, ((void*)0));
 VAR_13[1] = FUNC_9(VAR_20, VAR_14[1], VAR_1|VAR_0, VAR_6, ((void*)0));
 VAR_13[2] = FUNC_9(VAR_20, VAR_15[0], VAR_3|VAR_0, VAR_7, ((void*)0));
 VAR_13[3] = FUNC_9(VAR_20, VAR_15[1], VAR_1, VAR_7, ((void*)0));


 VAR_13[4] = FUNC_11(VAR_20, VAR_6, ((void*)0));
 VAR_13[5] = FUNC_11(VAR_20, VAR_6, ((void*)0));
 VAR_13[6] = FUNC_11(VAR_20, VAR_6, ((void*)0));
 VAR_13[7] = FUNC_9(VAR_20, -1, VAR_0, VAR_7, ((void*)0));
 VAR_13[8] = FUNC_9(VAR_20, -1, VAR_0, VAR_7, ((void*)0));
 VAR_13[9] = FUNC_9(VAR_20, -1, VAR_0, VAR_7, ((void*)0));


 VAR_13[10] = FUNC_9(VAR_20, -1, 0, VAR_6, ((void*)0));
 VAR_13[11] = FUNC_9(VAR_20, -1, 0, VAR_7, ((void*)0));


 VAR_13[12] = FUNC_10(VAR_20, VAR_5, VAR_7, ((void*)0));

 FUNC_3(VAR_13[0], ((void*)0));
 FUNC_3(VAR_13[1], &VAR_16);
 FUNC_3(VAR_13[2], VAR_18);
 FUNC_3(VAR_13[3], VAR_19);

 FUNC_3(VAR_13[4], VAR_18);
 FUNC_3(VAR_13[5], VAR_18);
 FUNC_3(VAR_13[6], &VAR_16);
 FUNC_3(VAR_13[7], VAR_19);
 FUNC_3(VAR_13[8], VAR_18);
 FUNC_3(VAR_13[9], &VAR_17);

 FUNC_2(VAR_13[10], VAR_1, 1);
 FUNC_2(VAR_13[11], VAR_1|VAR_3|VAR_2, 1);
 FUNC_2(VAR_13[1], VAR_1, 1);

 FUNC_3(VAR_13[12], ((void*)0));

 FUNC_12(&VAR_21,((void*)0));
 FUNC_16("=====expected");
 FUNC_15("Now= %ld.%06d\n",(long)VAR_21.tv_sec,(int)VAR_21.tv_usec);
 FUNC_16("Inserted:");
 FUNC_15("  %p [fd  %ld] Write\n",VAR_13[0],(long)VAR_14[0]);
 FUNC_15("  %p [fd  %ld] Read Persist Timeout=T+1\n",VAR_13[1],(long)VAR_14[1]);
 FUNC_15("  %p [fd  %ld] Write Persist Timeout=T+1\n",VAR_13[2],(long)VAR_15[0]);
 FUNC_15("  %p [fd  %ld] Read Timeout=T+2.5\n",VAR_13[3],(long)VAR_15[1]);
 FUNC_15("  %p [fd  -1] Timeout=T+1\n",VAR_13[4]);
 FUNC_15("  %p [fd  -1] Timeout=T+1\n",VAR_13[5]);
 FUNC_15("  %p [fd  -1] Timeout=T+1\n",VAR_13[6]);
 FUNC_15("  %p [fd  -1] Persist Timeout=T+2.5\n",VAR_13[7]);
 FUNC_15("  %p [fd  -1] Persist Timeout=T+1\n",VAR_13[8]);
 FUNC_15("  %p [fd  -1] Persist Timeout=T+2.5\n",VAR_13[9]);
 FUNC_15("  %p [sig %d] Signal Persist\n", VAR_13[12], (int)VAR_5);

 FUNC_16("Active:");
 FUNC_15("  %p [fd  -1, priority=0] Read active\n", VAR_13[10]);
 FUNC_15("  %p [fd  -1, priority=0] Read Write Timeout active\n", VAR_13[11]);
 FUNC_15("  %p [fd  %ld, priority=0] Read active\n", VAR_13[1], (long)VAR_14[1]);

 FUNC_16("======received");
 FUNC_4(VAR_20, VAR_9);

 for (VAR_12 = 0; VAR_12 < 13; ++VAR_12) {
  FUNC_8(VAR_13[VAR_12]);
 }
 FUNC_5(VAR_20);

 return 0;
}
