
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_evtchn {int enabled; int handle; struct per_user_data* user; int port; } ;
struct per_user_data {int bind_mutex; int evtchns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,struct user_evtchn*) ;
 int FUNC_1 (int ,int *,struct user_evtchn*) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct user_evtchn*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ,struct user_evtchn*,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static inline int
FUNC_9(struct per_user_data *VAR_7, struct user_evtchn *VAR_8)
{
 int VAR_9;

 VAR_8->port = FUNC_7(VAR_8->handle);
 VAR_8->user = VAR_7;
 VAR_8->enabled = 1;
 FUNC_4(&VAR_7->bind_mutex);
 FUNC_0(VAR_6, &VAR_7->evtchns, VAR_8);
 FUNC_5(&VAR_7->bind_mutex);
 VAR_9 = FUNC_6(FUNC_2(VAR_3),
     VAR_4, VAR_5, VAR_8,
     VAR_1 | VAR_0, VAR_8->handle);
 if (VAR_9 != 0) {
  FUNC_8(&VAR_8->handle);
  FUNC_4(&VAR_7->bind_mutex);
  FUNC_1(VAR_6, &VAR_7->evtchns, VAR_8);
  FUNC_5(&VAR_7->bind_mutex);
  FUNC_3(VAR_8, VAR_2);
 }
 return (VAR_9);
}
