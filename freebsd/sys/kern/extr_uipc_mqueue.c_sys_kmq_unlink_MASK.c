
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_ucred; } ;
struct mqfs_node {int dummy; } ;
struct kmq_unlink_args {int path; } ;
struct TYPE_2__ {int mi_lock; int mi_root; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int,int *) ;
 int FUNC_2 (struct mqfs_node*,int ) ;
 TYPE_1__ VAR_3 ;
 struct mqfs_node* FUNC_3 (int ,char*,int,int ) ;
 int * FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int
FUNC_9(struct thread *VAR_4, struct kmq_unlink_args *VAR_5)
{
 char VAR_6[VAR_2+1];
 struct mqfs_node *VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_1(VAR_5->path, VAR_6, VAR_2 + 1, ((void*)0));
        if (VAR_8)
  return (VAR_8);

 VAR_9 = FUNC_6(VAR_6);
 if (VAR_9 < 2 || VAR_6[0] != '/' || FUNC_4(VAR_6 + 1, '/') != ((void*)0))
  return (VAR_0);
 if (FUNC_5(VAR_6, "/.") == 0 || FUNC_5(VAR_6, "/..") == 0)
  return (VAR_0);
 FUNC_0(VAR_6);

 FUNC_7(&VAR_3.mi_lock);
 VAR_7 = FUNC_3(VAR_3.mi_root, VAR_6 + 1, VAR_9 - 1, VAR_4->td_ucred);
 if (VAR_7 != ((void*)0))
  VAR_8 = FUNC_2(VAR_7, VAR_4->td_ucred);
 else
  VAR_8 = VAR_1;
 FUNC_8(&VAR_3.mi_lock);
 return (VAR_8);
}
