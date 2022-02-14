
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mps_softc {int event_list; } ;
struct mps_event_handle {void* data; int * callback; } ;
typedef int mps_evt_callback_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct mps_event_handle*,int ) ;
 int VAR_5 ;
 struct mps_event_handle* FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct mps_softc*,int ,char*) ;
 int FUNC_3 (struct mps_softc*,struct mps_event_handle*,int *) ;

int
FUNC_4(struct mps_softc *VAR_6, u32 *VAR_7,
    mps_evt_callback_t *VAR_8, void *VAR_9, struct mps_event_handle **VAR_10)
{
 struct mps_event_handle *VAR_11;
 int VAR_12 = 0;

 VAR_11 = FUNC_1(sizeof(struct mps_event_handle), VAR_2, VAR_3|VAR_4);
 if(!VAR_11) {
  FUNC_2(VAR_6, VAR_1, "Cannot allocate event memory\n");
  return (VAR_0);
 }
 VAR_11->callback = VAR_8;
 VAR_11->data = VAR_9;
 FUNC_0(&VAR_6->event_list, VAR_11, VAR_5);
 if (VAR_7 != ((void*)0))
  VAR_12 = FUNC_3(VAR_6, VAR_11, VAR_7);
 *VAR_10 = VAR_11;

 return (VAR_12);
}
