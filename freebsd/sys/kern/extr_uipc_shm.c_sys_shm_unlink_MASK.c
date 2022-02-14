
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_2__* td_ucred; } ;
struct shm_unlink_args {int path; } ;
struct TYPE_4__ {TYPE_1__* cr_prison; } ;
struct TYPE_3__ {char* pr_path; } ;
typedef int Fnv32_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,scalar_t__,int *) ;
 int VAR_5 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (scalar_t__,int ,int ) ;
 int VAR_6 ;
 int FUNC_7 (char*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 size_t FUNC_9 (char*,char const*,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int
FUNC_12(struct thread *VAR_7, struct shm_unlink_args *VAR_8)
{
 char *VAR_9;
 const char *VAR_10;
 size_t VAR_11;
 Fnv32_t VAR_12;
 int VAR_13;

 VAR_9 = FUNC_6(VAR_2, VAR_3, VAR_4);
 VAR_10 = VAR_7->td_ucred->cr_prison->pr_path;
 VAR_11 = FUNC_8(VAR_10, "/") == 0 ? 0
     : FUNC_9(VAR_9, VAR_10, VAR_2);
 VAR_13 = FUNC_2(VAR_8->path, VAR_9 + VAR_11, VAR_2 - VAR_11,
     ((void*)0));
 if (VAR_13) {
  FUNC_4(VAR_9, VAR_3);
  return (VAR_13);
 }




 FUNC_0(VAR_9);
 VAR_12 = FUNC_3(VAR_9, VAR_0);
 FUNC_10(&VAR_6);
 VAR_13 = FUNC_7(VAR_9, VAR_12, VAR_7->td_ucred);
 FUNC_11(&VAR_6);
 FUNC_4(VAR_9, VAR_3);

 return (VAR_13);
}
