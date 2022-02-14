
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
typedef int fhandle_t ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 char* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct vnode*,int ,char*,int*,int*,int *,int *,int *,char*,int *,int *,int *,int *,int *,int *) ;

int
FUNC_3(struct vnode *VAR_2, NFSPROC_T *VAR_3, int *VAR_4,
    fhandle_t *VAR_5, char *VAR_6)
{
 int VAR_7, VAR_8;
 char *VAR_9;

 VAR_7 = 1024;
 VAR_9 = FUNC_1(VAR_7, VAR_0, VAR_1);
 VAR_8 = FUNC_2(VAR_2, 0, VAR_9, &VAR_7, VAR_4, VAR_3, ((void*)0),
     VAR_5, VAR_6, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
 FUNC_0(VAR_9, VAR_0);
 return (VAR_8);
}
