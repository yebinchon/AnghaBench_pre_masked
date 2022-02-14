
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sockaddr_un {int sun_len; int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
struct netconfig {int dummy; } ;
struct gssd_syscall_args {int path; } ;
typedef int path ;
typedef int CLIENT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct sockaddr_un*) ;
 int * FUNC_4 (struct netconfig*,struct sockaddr*,int ,int ,int ,int ) ;
 int FUNC_5 (int ,char*,int,int *) ;
 struct netconfig* FUNC_6 (char*) ;
 int * VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct thread*,int ) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (char*) ;

int
FUNC_12(struct thread *VAR_10, struct gssd_syscall_args *VAR_11)
{
        struct sockaddr_un VAR_12;
        struct netconfig *VAR_13;
 char VAR_14[VAR_5];
 int VAR_15;
 CLIENT *VAR_16, *VAR_17;

 VAR_15 = FUNC_9(VAR_10, VAR_6);
 if (VAR_15)
  return (VAR_15);

 VAR_15 = FUNC_5(VAR_11->path, VAR_14, sizeof(VAR_14), ((void*)0));
 if (VAR_15)
  return (VAR_15);
 if (FUNC_11(VAR_14) + 1 > sizeof(VAR_12.sun_path))
  return (VAR_2);

 if (VAR_14[0] != '\0') {
  VAR_12.sun_family = VAR_0;
  FUNC_10(VAR_12.sun_path, VAR_14, sizeof(VAR_12.sun_path));
  VAR_12.sun_len = FUNC_3(&VAR_12);

  VAR_13 = FUNC_6("local");
  VAR_16 = FUNC_4(VAR_13,
      (struct sockaddr *) &VAR_12, VAR_3, VAR_4,
      VAR_7, VAR_7);





  if (VAR_16 != ((void*)0)) {
   int VAR_18 = 5;
   FUNC_1(VAR_16, VAR_1, &VAR_18);
  }
 } else
  VAR_16 = ((void*)0);

 FUNC_7(&VAR_9);
 VAR_17 = VAR_8;
 VAR_8 = VAR_16;
 FUNC_8(&VAR_9);

 if (VAR_17 != ((void*)0)) {
  FUNC_0(VAR_17);
  FUNC_2(VAR_17);
 }

 return (0);
}
