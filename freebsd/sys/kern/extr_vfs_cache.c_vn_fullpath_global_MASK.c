
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct thread*,struct vnode*,int ,char*,char**,int ) ;

int
FUNC_4(struct thread *VAR_7, struct vnode *VAR_8,
    char **VAR_9, char **VAR_10)
{
 char *VAR_11;
 int VAR_12;

 if (FUNC_0(VAR_5))
  return (VAR_1);
 if (FUNC_0(VAR_8 == ((void*)0)))
  return (VAR_0);
 VAR_11 = FUNC_2(VAR_2, VAR_3, VAR_4);
 VAR_12 = FUNC_3(VAR_7, VAR_8, VAR_6, VAR_11, VAR_9, VAR_2);
 if (!VAR_12)
  *VAR_10 = VAR_11;
 else
  FUNC_1(VAR_11, VAR_3);
 return (VAR_12);
}
