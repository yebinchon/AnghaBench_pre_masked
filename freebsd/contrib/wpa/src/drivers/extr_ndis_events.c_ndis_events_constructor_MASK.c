
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndis_events_data {int ref; int write_pipe; int read_pipe; int * event_avail; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ,int ,int *) ;
 int FUNC_2 (int *,int *,int *,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct ndis_events_data *VAR_3)
{
 VAR_3->ref = 1;

 if (!FUNC_2(&VAR_3->read_pipe, &VAR_3->write_pipe, ((void*)0), 512)) {
  FUNC_4(VAR_1, "CreatePipe() failed: %d",
      (int) FUNC_3());
  return -1;
 }
 VAR_3->event_avail = FUNC_1(((void*)0), VAR_2, VAR_0, ((void*)0));
 if (VAR_3->event_avail == ((void*)0)) {
  FUNC_4(VAR_1, "CreateEvent() failed: %d",
      (int) FUNC_3());
  FUNC_0(VAR_3->read_pipe);
  FUNC_0(VAR_3->write_pipe);
  return -1;
 }

 return 0;
}
