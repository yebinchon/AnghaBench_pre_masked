
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mpt_softc {int dummy; } ;
struct TYPE_4__ {int MsgContext; int Function; } ;
typedef int MSG_IOC_FACTS_REPLY ;
typedef TYPE_1__ MSG_IOC_FACTS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (struct mpt_softc*,int,int *) ;
 int FUNC_3 (struct mpt_softc*,int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(struct mpt_softc *VAR_2, MSG_IOC_FACTS_REPLY *VAR_3)
{
 MSG_IOC_FACTS VAR_4;
 int VAR_5;

 FUNC_1(&VAR_4, 0, sizeof VAR_4);
 VAR_4.Function = VAR_0;
 VAR_4.MsgContext = FUNC_0(VAR_1);
 VAR_5 = FUNC_3(VAR_2, sizeof VAR_4, &VAR_4);
 if (VAR_5) {
  return(VAR_5);
 }
 VAR_5 = FUNC_2(VAR_2, sizeof (*VAR_3), VAR_3);
 return (VAR_5);
}
