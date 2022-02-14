
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mpt_softc {int dummy; } ;
struct TYPE_6__ {int index; TYPE_2__* req_vbuf; } ;
typedef TYPE_1__ request_t ;
struct TYPE_7__ {int Switch; int MsgContext; int Function; } ;
typedef TYPE_2__ MSG_EVENT_NOTIFY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (struct mpt_softc*) ;
 TYPE_1__* FUNC_3 (struct mpt_softc*,int ) ;
 int FUNC_4 (struct mpt_softc*,int ,char*,char*) ;
 int FUNC_5 (struct mpt_softc*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(struct mpt_softc *VAR_5, int VAR_6)
{
 request_t *VAR_7;
 MSG_EVENT_NOTIFY *VAR_8;

 VAR_7 = FUNC_3(VAR_5, VAR_1);
 if (VAR_7 == ((void*)0)) {
  return (VAR_0);
 }
 VAR_8 = VAR_7->req_vbuf;
 FUNC_1(VAR_8, 0, sizeof *VAR_8);

 VAR_8->Function = VAR_2;
 VAR_8->MsgContext = FUNC_0(VAR_7->index | VAR_4);
 VAR_8->Switch = VAR_6;

 FUNC_2(VAR_5);
 FUNC_4(VAR_5, VAR_3, "%sabling async events\n",
     VAR_6 ? "en" : "dis");



 FUNC_5(VAR_5, VAR_7);
 return (0);
}
