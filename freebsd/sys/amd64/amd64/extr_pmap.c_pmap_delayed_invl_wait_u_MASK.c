
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_page_t ;
typedef scalar_t__ u_long ;
struct lock_delay_arg {int dummy; } ;
struct TYPE_2__ {int gen; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct lock_delay_arg*) ;
 int FUNC_6 (struct lock_delay_arg*,int *) ;
 int VAR_3 ;
 scalar_t__* FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_9(vm_page_t VAR_8)
{
 u_long *VAR_9;
 struct lock_delay_arg VAR_10;
 bool VAR_11;

 VAR_11 = 1;
 VAR_9 = FUNC_7(VAR_8);
 FUNC_6(&VAR_10, &VAR_0);
 while (*VAR_9 > FUNC_3(&VAR_6.gen)) {
  if (VAR_11 || !VAR_5) {
   FUNC_0(FUNC_2(&VAR_1, 1));
   FUNC_5(&VAR_10);
   VAR_11 = 0;
  } else {
   FUNC_1(&VAR_7, 1);
   if (*VAR_9 >
       FUNC_3(&VAR_6.gen)) {
    FUNC_4(&VAR_4, 1,
        VAR_3, ((void*)0));
    FUNC_0(FUNC_2(&VAR_2, 1));
    FUNC_8(VAR_9,
        &VAR_6.gen);
   }
   FUNC_1(&VAR_7, -1);
  }
 }
}
