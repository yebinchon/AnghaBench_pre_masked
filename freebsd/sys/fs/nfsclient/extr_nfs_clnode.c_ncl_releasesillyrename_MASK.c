
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; } ;
struct thread {int dummy; } ;
struct sillyrename {int s_task; int s_cred; } ;
struct nfsnode {struct sillyrename* n_sillyrename; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int FUNC_1 (struct nfsnode*) ;
 int FUNC_2 (struct nfsnode*) ;
 int FUNC_3 (struct nfsnode*) ;
 int FUNC_4 (int *,int ,int ,struct sillyrename*) ;
 scalar_t__ VAR_0 ;
 struct nfsnode* FUNC_5 (struct vnode*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sillyrename*,struct vnode*) ;
 int FUNC_8 (struct vnode*,int ,struct thread*,int) ;
 int VAR_1 ;
 int FUNC_9 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_10(struct vnode *VAR_3, struct thread *VAR_4)
{
 struct nfsnode *VAR_5;
 struct sillyrename *VAR_6;

 FUNC_0(VAR_3, "releasesillyrename");
 VAR_5 = FUNC_5(VAR_3);
 FUNC_1(VAR_5);
 if (VAR_3->v_type != VAR_0) {
  VAR_6 = VAR_5->n_sillyrename;
  VAR_5->n_sillyrename = ((void*)0);
 } else
  VAR_6 = ((void*)0);
 if (VAR_6 != ((void*)0)) {
  FUNC_3(VAR_5);
  (void) FUNC_8(VAR_3, 0, VAR_4, 1);



  FUNC_7(VAR_6, VAR_3);
  FUNC_6(VAR_6->s_cred);
  FUNC_4(&VAR_6->s_task, 0, VAR_1, VAR_6);
  FUNC_9(VAR_2, &VAR_6->s_task);
  FUNC_2(VAR_5);
 }
}
