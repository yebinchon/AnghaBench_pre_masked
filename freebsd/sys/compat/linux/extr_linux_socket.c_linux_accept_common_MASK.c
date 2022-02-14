
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__* td_retval; } ;
struct socket {scalar_t__ so_type; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef struct sockaddr l_sockaddr ;
struct file {struct socket* f_data; } ;
typedef int len ;
typedef int l_uintptr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct sockaddr*,struct sockaddr**,int) ;
 int VAR_5 ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (struct sockaddr*,int *,int) ;
 int FUNC_4 (struct file*,struct thread*) ;
 int FUNC_5 (struct sockaddr*,int ) ;
 int FUNC_6 (struct thread*,int,int *,struct file**,int *,int *) ;
 int FUNC_7 (struct thread*,int,struct sockaddr**,int*,int,struct file**) ;
 int FUNC_8 (struct thread*,scalar_t__) ;
 int FUNC_9 (int,int*) ;

__attribute__((used)) static int
FUNC_10(struct thread *VAR_6, int VAR_7, l_uintptr_t VAR_8,
    l_uintptr_t VAR_9, int VAR_10)
{
 struct l_sockaddr *VAR_11;
 struct sockaddr *VAR_12;
 struct file *VAR_13;
 int VAR_14, VAR_15;
 struct socket *VAR_16;
 int VAR_17, VAR_18;

 VAR_14 = 0;
 VAR_17 = FUNC_9(VAR_10, &VAR_14);
 if (VAR_17 != 0)
  return (VAR_17);

 VAR_12 = ((void*)0);
 if (FUNC_0(VAR_8) == ((void*)0)) {
  VAR_15 = 0;
  VAR_17 = FUNC_7(VAR_6, VAR_7, ((void*)0), ((void*)0), VAR_14, ((void*)0));
 } else {
  VAR_17 = FUNC_2(FUNC_0(VAR_9), &VAR_15, sizeof(VAR_15));
  if (VAR_17 != 0)
   return (VAR_17);
  if (VAR_15 < 0)
   return (VAR_1);
  VAR_17 = FUNC_7(VAR_6, VAR_7, &VAR_12, &VAR_15, VAR_14, &VAR_13);
  if (VAR_17 == 0)
   FUNC_4(VAR_13, VAR_6);
 }

 if (VAR_17 != 0) {




  if (VAR_17 == VAR_0 && VAR_9 != sizeof(struct sockaddr_in))
  {
   VAR_17 = VAR_1;
   goto out;
  }
  if (VAR_17 == VAR_1) {
   VAR_18 = FUNC_6(VAR_6, VAR_7, &VAR_5, &VAR_13, ((void*)0), ((void*)0));
   if (VAR_18 != 0) {
    VAR_17 = VAR_18;
    goto out;
   }
   VAR_16 = VAR_13->f_data;
   if (VAR_16->so_type == VAR_4)
    VAR_17 = VAR_2;
   FUNC_4(VAR_13, VAR_6);
  }
  goto out;
 }

 if (VAR_15 != 0 && VAR_17 == 0) {
  VAR_17 = FUNC_1(VAR_12, &VAR_11, VAR_15);
  if (VAR_17 == 0)
   VAR_17 = FUNC_3(VAR_11, FUNC_0(VAR_8), VAR_15);
  FUNC_5(VAR_11, VAR_3);
 }

 FUNC_5(VAR_12, VAR_3);

out:
 if (VAR_17 != 0) {
  (void)FUNC_8(VAR_6, VAR_6->td_retval[0]);
  VAR_6->td_retval[0] = 0;
 }
 return (VAR_17);
}
