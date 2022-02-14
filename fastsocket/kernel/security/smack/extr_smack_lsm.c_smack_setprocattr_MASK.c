
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct cred {char* security; } ;
struct TYPE_2__ {char* smk_known; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cred*) ;
 struct task_struct* VAR_5 ;
 struct cred* FUNC_2 () ;
 TYPE_1__ VAR_6 ;
 char* FUNC_3 (void*,size_t) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(struct task_struct *VAR_7, char *VAR_8,
        void *VAR_9, size_t VAR_10)
{
 struct cred *VAR_11;
 char *VAR_12;





 if (VAR_7 != VAR_5)
  return -VAR_3;

 if (!FUNC_0(VAR_0))
  return -VAR_3;

 if (VAR_9 == ((void*)0) || VAR_10 == 0 || VAR_10 >= VAR_4)
  return -VAR_1;

 if (FUNC_4(VAR_8, "current") != 0)
  return -VAR_1;

 VAR_12 = FUNC_3(VAR_9, VAR_10);
 if (VAR_12 == ((void*)0))
  return -VAR_1;




 if (VAR_12 == VAR_6.smk_known)
  return -VAR_3;

 VAR_11 = FUNC_2();
 if (VAR_11 == ((void*)0))
  return -VAR_2;
 VAR_11->security = VAR_12;
 FUNC_1(VAR_11);
 return VAR_10;
}
