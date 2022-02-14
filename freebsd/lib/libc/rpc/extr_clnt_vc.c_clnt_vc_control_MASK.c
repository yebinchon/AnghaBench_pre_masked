
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct timeval {int dummy; } ;
struct netbuf {int len; int buf; } ;
struct TYPE_4__ {int ct_mcallc; int ct_mcalli; } ;
struct ct_data {size_t ct_fd; TYPE_1__ ct_u; struct netbuf ct_addr; struct timeval ct_wait; void* ct_waitset; void* ct_closeit; } ;
typedef int sigset_t ;
typedef void* bool_t ;
struct TYPE_5__ {scalar_t__ cl_private; } ;
typedef TYPE_2__ CLIENT ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (void*,int ,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (void*,int *) ;
 int FUNC_7 (size_t,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *,int *) ;
 int FUNC_10 (struct timeval*) ;
 int * VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static bool_t
FUNC_11(CLIENT *VAR_8, u_int VAR_9, void *VAR_10)
{
 struct ct_data *VAR_11;
 void *VAR_12 = VAR_10;
 sigset_t VAR_13;
 sigset_t VAR_14;
 int VAR_15;

 FUNC_0(VAR_8 != ((void*)0));

 VAR_11 = (struct ct_data *)VAR_8->cl_private;

 FUNC_8(&VAR_14);
 FUNC_9(VAR_2, &VAR_14, &VAR_13);
 FUNC_4(&VAR_5);
 while (VAR_7[VAR_11->ct_fd])
  FUNC_1(&VAR_6[VAR_11->ct_fd], &VAR_5);
 if (VAR_4)
                VAR_15 = 1;
        else
                VAR_15 = 0;
 VAR_7[VAR_11->ct_fd] = VAR_15;
 FUNC_5(&VAR_5);

 switch (VAR_9) {
 case 134:
  VAR_11->ct_closeit = VAR_3;
  FUNC_7(VAR_11->ct_fd, VAR_13);
  return (VAR_3);
 case 133:
  VAR_11->ct_closeit = VAR_1;
  FUNC_7(VAR_11->ct_fd, VAR_13);
  return (VAR_3);
 default:
  break;
 }


 if (VAR_10 == ((void*)0)) {
  FUNC_7(VAR_11->ct_fd, VAR_13);
  return (VAR_1);
 }
 switch (VAR_9) {
 case 130:
  if (FUNC_10((struct timeval *)VAR_10)) {
   FUNC_7(VAR_11->ct_fd, VAR_13);
   return (VAR_1);
  }
  VAR_11->ct_wait = *(struct timeval *)VAR_12;
  VAR_11->ct_waitset = VAR_3;
  break;
 case 137:
  *(struct timeval *)VAR_12 = VAR_11->ct_wait;
  break;
 case 139:
  (void) FUNC_3(VAR_10, VAR_11->ct_addr.buf, (size_t)VAR_11->ct_addr.len);
  break;
 case 141:
  *(int *)VAR_10 = VAR_11->ct_fd;
  break;
 case 138:

  *(struct netbuf *)VAR_10 = VAR_11->ct_addr;
  break;
 case 131:
  FUNC_7(VAR_11->ct_fd, VAR_13);
  return (VAR_1);
 case 135:





  FUNC_6(VAR_10, &VAR_11->ct_u.ct_mcalli);
  break;
 case 128:


  FUNC_2(&VAR_11->ct_u.ct_mcalli, VAR_10, 1);
  break;
 case 136:






  FUNC_6(VAR_10, VAR_11->ct_u.ct_mcallc + 4 * VAR_0);
  break;

 case 129:
  FUNC_2(VAR_11->ct_u.ct_mcallc + 4 * VAR_0, VAR_10, 0);
  break;

 case 140:






  FUNC_6(VAR_10, VAR_11->ct_u.ct_mcallc + 3 * VAR_0);
  break;

 case 132:
  FUNC_2(VAR_11->ct_u.ct_mcallc + 3 * VAR_0, VAR_10, 0);
  break;

 default:
  FUNC_7(VAR_11->ct_fd, VAR_13);
  return (VAR_1);
 }
 FUNC_7(VAR_11->ct_fd, VAR_13);
 return (VAR_3);
}
