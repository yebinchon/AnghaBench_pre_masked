
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; } ;
struct sillyrename {int s_cred; struct vnode* s_dvp; int s_namlen; int s_name; } ;
struct nfsnode {struct sillyrename* n_sillyrename; } ;
struct componentname {TYPE_2__* cn_thread; int cn_cred; } ;
struct TYPE_4__ {TYPE_1__* td_proc; } ;
struct TYPE_3__ {short p_pid; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct vnode*) ;
 struct nfsnode* FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sillyrename*,int ) ;
 struct sillyrename* FUNC_7 (int,int ,int ) ;
 int FUNC_8 (struct vnode*,int ,int ,int ,TYPE_2__*,struct nfsnode**) ;
 int FUNC_9 (struct vnode*,struct vnode*,struct componentname*,struct sillyrename*) ;
 int FUNC_10 (int ,char*,unsigned int,short) ;
 scalar_t__ VAR_3 ;
 int FUNC_11 (struct vnode*) ;

__attribute__((used)) static int
FUNC_12(struct vnode *VAR_4, struct vnode *VAR_5, struct componentname *VAR_6)
{
 struct sillyrename *VAR_7;
 struct nfsnode *VAR_8;
 int VAR_9;
 short VAR_10;
 unsigned int VAR_11;

 FUNC_3(VAR_4);
 VAR_8 = FUNC_2(VAR_5);
 FUNC_0(VAR_5->v_type != VAR_2, ("nfs: sillyrename dir"));
 VAR_7 = FUNC_7(sizeof (struct sillyrename),
     VAR_0, VAR_1);
 VAR_7->s_cred = FUNC_5(VAR_6->cn_cred);
 VAR_7->s_dvp = VAR_4;
 FUNC_1(VAR_4);
 VAR_10 = VAR_6->cn_thread->td_proc->p_pid;
 VAR_11 = (unsigned int)VAR_3;
 for ( ; ; ) {
  VAR_7->s_namlen = FUNC_10(VAR_7->s_name,
           ".nfs.%08x.%04x4.4", VAR_11,
           VAR_10);
  if (FUNC_8(VAR_4, VAR_7->s_name, VAR_7->s_namlen, VAR_7->s_cred,
     VAR_6->cn_thread, ((void*)0)))
   break;
  VAR_11++;
 }
 VAR_9 = FUNC_9(VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_9)
  goto bad;
 VAR_9 = FUNC_8(VAR_4, VAR_7->s_name, VAR_7->s_namlen, VAR_7->s_cred,
  VAR_6->cn_thread, &VAR_8);
 VAR_8->n_sillyrename = VAR_7;
 return (0);
bad:
 FUNC_11(VAR_7->s_dvp);
 FUNC_4(VAR_7->s_cred);
 FUNC_6(VAR_7, VAR_0);
 return (VAR_9);
}
