
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef struct sigevent {scalar_t__ sigev_notify; } const sigevent ;
struct sigev_node {int sn_gen; int sn_dispatch; int sn_id; } ;
typedef TYPE_1__* mqd_t ;
struct TYPE_3__ {int oshandle; struct sigev_node* node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct sigev_node* FUNC_0 (int ,struct sigevent const*,struct sigev_node*,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct sigev_node*) ;
 int FUNC_3 (struct sigev_node*,struct sigevent const*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct sigev_node*) ;
 int FUNC_7 (int ,struct sigevent const*) ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_8(mqd_t VAR_6, const struct sigevent *VAR_7)
{
 struct sigevent VAR_8;
 struct sigev_node *VAR_9;
 int VAR_10;

 if (VAR_7 == ((void*)0) || VAR_7->sigev_notify != VAR_2) {
  if (VAR_6->node != ((void*)0)) {
   FUNC_4();
   FUNC_2(VAR_6->node);
   VAR_6->node = ((void*)0);
   FUNC_5();
  }
  return FUNC_7(VAR_6->oshandle, VAR_7);
 }

 if (FUNC_1()) {



  VAR_4 = VAR_1;
  return (-1);
 }

 VAR_9 = FUNC_0(VAR_3, VAR_7, VAR_6->node, 1);
 if (VAR_9 == ((void*)0)) {
  VAR_4 = VAR_0;
  return (-1);
 }

 VAR_9->sn_id = VAR_6->oshandle;
 VAR_9->sn_dispatch = VAR_5;
 FUNC_3(VAR_9, &VAR_8, VAR_9->sn_gen);
 FUNC_4();
 if (VAR_6->node != ((void*)0))
  FUNC_2(VAR_6->node);
 VAR_6->node = VAR_9;
 FUNC_6(VAR_9);
 VAR_10 = FUNC_7(VAR_6->oshandle, &VAR_8);
 FUNC_5();
 return (VAR_10);
}
