
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct mpt_softc {int request_pending_list; } ;
struct TYPE_7__ {int state; int * ccb; } ;
typedef TYPE_1__ request_t ;
typedef int MSG_DEFAULT_REPLY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mpt_softc*,TYPE_1__*) ;
 int FUNC_2 (struct mpt_softc*,TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(struct mpt_softc *VAR_5, request_t *VAR_6,
    uint32_t VAR_7, MSG_DEFAULT_REPLY *VAR_8)
{
 int VAR_9;

 if (VAR_6 == ((void*)0))
  return (VAR_3);

 VAR_9 = VAR_3;
 if (VAR_8 != ((void*)0))
  VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_8);






 VAR_6->state &= ~VAR_2;
 VAR_6->state |= VAR_0;
 FUNC_0(&VAR_5->request_pending_list, VAR_6, VAR_4);

 if ((VAR_6->state & VAR_1) != 0) {
  FUNC_3(VAR_6);
 } else if (VAR_9) {
  FUNC_1(VAR_5, VAR_6);
 }

 return (VAR_3);
}
