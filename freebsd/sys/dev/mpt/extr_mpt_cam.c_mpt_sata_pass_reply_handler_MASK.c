
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct mpt_softc {int request_pending_list; } ;
struct TYPE_8__ {int state; int IOCStatus; } ;
typedef TYPE_1__ request_t ;
struct TYPE_9__ {int IOCStatus; } ;
typedef TYPE_2__ MSG_DEFAULT_REPLY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (struct mpt_softc*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(struct mpt_softc *VAR_6, request_t *VAR_7,
 uint32_t VAR_8, MSG_DEFAULT_REPLY *VAR_9)
{

 if (VAR_7 != ((void*)0)) {
  if (VAR_9 != ((void*)0)) {
   VAR_7->IOCStatus = FUNC_1(VAR_9->IOCStatus);
  }
  VAR_7->state &= ~VAR_2;
  VAR_7->state |= VAR_0;
  FUNC_0(&VAR_6->request_pending_list, VAR_7, VAR_5);
  if ((VAR_7->state & VAR_1) != 0) {
   FUNC_3(VAR_7);
  } else if ((VAR_7->state & VAR_3) != 0) {



   FUNC_2(VAR_6, VAR_7);
  }
 }

 return (VAR_4);
}
