
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_rl; int v_cache_dst; int v_cache_src; int v_bufobj; int * v_vnlock; int v_interlock; int v_lock; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int *,struct vnode*) ;
 int FUNC_3 (struct vnode*,int) ;
 int FUNC_4 (int *,int ,char*,int ,int) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(void *VAR_5, int VAR_6, int VAR_7)
{
 struct vnode *VAR_8;

 VAR_8 = VAR_5;
 FUNC_3(VAR_8, VAR_6);



 VAR_8->v_vnlock = &VAR_8->v_lock;
 FUNC_5(&VAR_8->v_interlock, "vnode interlock", ((void*)0), VAR_2);



 FUNC_4(VAR_8->v_vnlock, VAR_3, "vnode", VAR_4,
     VAR_1 | VAR_0);



 FUNC_2(&VAR_8->v_bufobj, VAR_8);



 FUNC_0(&VAR_8->v_cache_src);
 FUNC_1(&VAR_8->v_cache_dst);



 FUNC_6(&VAR_8->v_rl);
 return (0);
}
