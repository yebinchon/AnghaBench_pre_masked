
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mpt_softc {int dummy; } ;
typedef int U8 ;
struct TYPE_4__ {int MsgContext; int PortNumber; int Function; } ;
typedef int MSG_PORT_FACTS_REPLY ;
typedef TYPE_1__ MSG_PORT_FACTS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (struct mpt_softc*,int,int *) ;
 int FUNC_3 (struct mpt_softc*,int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(struct mpt_softc *VAR_2, U8 VAR_3, MSG_PORT_FACTS_REPLY *VAR_4)
{
 MSG_PORT_FACTS VAR_5;
 int VAR_6;

 FUNC_1(&VAR_5, 0, sizeof VAR_5);
 VAR_5.Function = VAR_0;
 VAR_5.PortNumber = VAR_3;
 VAR_5.MsgContext = FUNC_0(VAR_1);
 VAR_6 = FUNC_3(VAR_2, sizeof VAR_5, &VAR_5);
 if (VAR_6) {
  return(VAR_6);
 }
 VAR_6 = FUNC_2(VAR_2, sizeof (*VAR_4), VAR_4);
 return (VAR_6);
}
