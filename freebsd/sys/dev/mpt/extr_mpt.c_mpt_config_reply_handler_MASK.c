
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct mpt_softc {int request_pending_list; } ;
struct TYPE_10__ {int state; int IOCStatus; scalar_t__ req_vbuf; } ;
typedef TYPE_1__ request_t ;
struct TYPE_13__ {int ExtPageType; int ExtPageLength; int Header; } ;
struct TYPE_12__ {int ExtPageType; int ExtPageLength; int Header; } ;
struct TYPE_11__ {int IOCStatus; } ;
typedef TYPE_2__ MSG_DEFAULT_REPLY ;
typedef TYPE_3__ MSG_CONFIG_REPLY ;
typedef TYPE_4__ MSG_CONFIG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (struct mpt_softc*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(struct mpt_softc *VAR_6, request_t *VAR_7,
 uint32_t VAR_8, MSG_DEFAULT_REPLY *VAR_9)
{

 if (VAR_7 != ((void*)0)) {
  if (VAR_9 != ((void*)0)) {
   MSG_CONFIG *VAR_10;
   MSG_CONFIG_REPLY *VAR_11;

   VAR_10 = (MSG_CONFIG *)VAR_7->req_vbuf;
   VAR_11 = (MSG_CONFIG_REPLY *)VAR_9;
   VAR_7->IOCStatus = FUNC_2(VAR_9->IOCStatus);
   FUNC_1(&VAR_11->Header, &VAR_10->Header,
         sizeof(VAR_10->Header));
   VAR_10->ExtPageLength = VAR_11->ExtPageLength;
   VAR_10->ExtPageType = VAR_11->ExtPageType;
  }
  VAR_7->state &= ~VAR_2;
  VAR_7->state |= VAR_0;
  FUNC_0(&VAR_6->request_pending_list, VAR_7, VAR_5);
  if ((VAR_7->state & VAR_1) != 0) {
   FUNC_4(VAR_7);
  } else if ((VAR_7->state & VAR_3) != 0) {



   FUNC_3(VAR_6, VAR_7);
  }
 }

 return (VAR_4);
}
