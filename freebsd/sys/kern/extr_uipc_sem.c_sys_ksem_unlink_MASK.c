
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_2__* td_ucred; } ;
struct ksem_unlink_args {int name; } ;
struct TYPE_4__ {TYPE_1__* cr_prison; } ;
struct TYPE_3__ {char* pr_path; } ;
typedef int Fnv32_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,scalar_t__,int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_4 ;
 int FUNC_4 (char*,int ,TYPE_2__*) ;
 char* FUNC_5 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 size_t FUNC_7 (char*,char const*,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int
FUNC_10(struct thread *VAR_5, struct ksem_unlink_args *VAR_6)
{
 char *VAR_7;
 const char *VAR_8;
 size_t VAR_9;
 Fnv32_t VAR_10;
 int VAR_11;

 VAR_7 = FUNC_5(VAR_1, VAR_2, VAR_3);
 VAR_8 = VAR_5->td_ucred->cr_prison->pr_path;
 VAR_9 = FUNC_6(VAR_8, "/") == 0 ? 0
     : FUNC_7(VAR_7, VAR_8, VAR_1);
 VAR_11 = FUNC_1(VAR_6->name, VAR_7 + VAR_9, VAR_1 - VAR_9,
     ((void*)0));
 if (VAR_11) {
  FUNC_3(VAR_7, VAR_2);
  return (VAR_11);
 }

 FUNC_0(VAR_7);
 VAR_10 = FUNC_2(VAR_7, VAR_0);
 FUNC_8(&VAR_4);
 VAR_11 = FUNC_4(VAR_7, VAR_10, VAR_5->td_ucred);
 FUNC_9(&VAR_4);
 FUNC_3(VAR_7, VAR_2);

 return (VAR_11);
}
