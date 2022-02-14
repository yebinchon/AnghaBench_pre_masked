
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct __timer* timer_t ;
struct sigevent {scalar_t__ sigev_notify; } ;
struct sigev_node {int sn_id; int sn_dispatch; int sn_flags; int sn_gen; } ;
struct __timer {struct sigev_node* node; int oshandle; } ;
typedef int clockid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sigev_node* FUNC_0 (int ,struct sigevent*,int *,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct sigev_node*) ;
 int FUNC_3 (struct sigev_node*,struct sigevent*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct sigev_node*) ;
 int FUNC_7 (int ,struct sigevent*,int *) ;
 int VAR_5 ;
 int FUNC_8 (struct __timer*) ;
 struct __timer* FUNC_9 (int) ;
 int VAR_6 ;

int
FUNC_10(clockid_t VAR_7, struct sigevent *VAR_8, timer_t *VAR_9)
{
 struct __timer *VAR_10;
 struct sigevent VAR_11;
 struct sigev_node *VAR_12;
 int VAR_13, VAR_14;

 VAR_10 = FUNC_9(sizeof(struct __timer));
 if (VAR_10 == ((void*)0))
  return (-1);

 if (VAR_8 == ((void*)0) || VAR_8->sigev_notify != VAR_2) {
  VAR_13 = FUNC_7(VAR_7, VAR_8, &VAR_10->oshandle);
  if (VAR_13 == -1) {
   VAR_14 = VAR_5;
   FUNC_8(VAR_10);
   VAR_5 = VAR_14;
   return (VAR_13);
  }
  VAR_10->node = ((void*)0);
  *VAR_9 = VAR_10;
  return (0);
 }

 if (FUNC_1()) {
  FUNC_8(VAR_10);
  VAR_5 = VAR_1;
  return (-1);
 }

 VAR_12 = FUNC_0(VAR_3, VAR_8, ((void*)0), 0);
 if (VAR_12 == ((void*)0)) {
  FUNC_8(VAR_10);
  VAR_5 = VAR_0;
  return (-1);
 }

 FUNC_3(VAR_12, &VAR_11, VAR_12->sn_gen);
 VAR_13 = FUNC_7(VAR_7, &VAR_11, &VAR_10->oshandle);
 if (VAR_13 != 0) {
  VAR_14 = VAR_5;
  FUNC_2(VAR_12);
  FUNC_8(VAR_10);
  VAR_5 = VAR_14;
  return (-1);
 }
 VAR_12->sn_flags |= VAR_4;
 VAR_12->sn_dispatch = VAR_6;
 VAR_12->sn_id = VAR_10->oshandle;
 VAR_10->node = VAR_12;
 FUNC_4();
 FUNC_6(VAR_12);
 FUNC_5();
 *VAR_9 = VAR_10;
 return (0);
}
