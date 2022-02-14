
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mpr_softc {int event_list; } ;
struct mpr_event_handle {void* data; int * callback; } ;
typedef int mpr_evt_callback_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,struct mpr_event_handle*,int ) ;
 int VAR_6 ;
 struct mpr_event_handle* FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct mpr_softc*,int,char*) ;
 int FUNC_3 (struct mpr_softc*,struct mpr_event_handle*,int *) ;

int
FUNC_4(struct mpr_softc *VAR_7, uint8_t *VAR_8,
    mpr_evt_callback_t *VAR_9, void *VAR_10, struct mpr_event_handle **VAR_11)
{
 struct mpr_event_handle *VAR_12;
 int VAR_13 = 0;

 VAR_12 = FUNC_1(sizeof(struct mpr_event_handle), VAR_3, VAR_4|VAR_5);
 if (!VAR_12) {
  FUNC_2(VAR_7, VAR_2|VAR_1,
      "Cannot allocate event memory\n");
  return (VAR_0);
 }
 VAR_12->callback = VAR_9;
 VAR_12->data = VAR_10;
 FUNC_0(&VAR_7->event_list, VAR_12, VAR_6);
 if (VAR_8 != ((void*)0))
  VAR_13 = FUNC_3(VAR_7, VAR_12, VAR_8);
 *VAR_11 = VAR_12;

 return (VAR_13);
}
