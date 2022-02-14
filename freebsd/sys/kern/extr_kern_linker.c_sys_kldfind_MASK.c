
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int* td_retval; int td_ucred; } ;
struct kldfind_args {int file; } ;
typedef TYPE_1__* linker_file_t ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int *) ;
 int FUNC_1 (char*,int ) ;
 int VAR_4 ;
 char* FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(struct thread *VAR_5, struct kldfind_args *VAR_6)
{
 char *VAR_7;
 const char *VAR_8;
 linker_file_t VAR_9;
 int VAR_10;







 VAR_5->td_retval[0] = -1;

 VAR_7 = FUNC_5(VAR_1, VAR_2, VAR_3);
 if ((VAR_10 = FUNC_0(VAR_6->file, VAR_7, VAR_1, ((void*)0))) != 0)
  goto out;

 VAR_8 = FUNC_2(VAR_7);
 FUNC_6(&VAR_4);
 VAR_9 = FUNC_3(VAR_8);
 if (VAR_9)
  VAR_5->td_retval[0] = VAR_9->id;
 else
  VAR_10 = VAR_0;
 FUNC_7(&VAR_4);
out:
 FUNC_1(VAR_7, VAR_2);
 return (VAR_10);
}
