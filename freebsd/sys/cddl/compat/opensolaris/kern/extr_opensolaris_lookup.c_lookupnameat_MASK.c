
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
struct nameidata {int * ni_vp; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
typedef enum symfollow { ____Placeholder_symfollow } symfollow ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nameidata*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct nameidata*,int ,int,int,char*,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct nameidata*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;

int
FUNC_8(char *VAR_5, enum uio_seg VAR_6, enum symfollow VAR_7,
    vnode_t **VAR_8, vnode_t **VAR_9, vnode_t *VAR_10)
{
 struct nameidata VAR_11;
 int VAR_12, VAR_13;

 FUNC_0(VAR_8 == ((void*)0));

 FUNC_7(VAR_10);
 VAR_13 = FUNC_3(VAR_10);
 FUNC_4(VAR_10, 0);
 FUNC_2(&VAR_11, VAR_2, VAR_1 | VAR_7, VAR_6, VAR_5,
     VAR_10, VAR_4);
 VAR_12 = FUNC_5(&VAR_11);
 *VAR_9 = VAR_11.ni_vp;
 FUNC_1(&VAR_11, VAR_3);
 FUNC_6(VAR_10, VAR_13 | VAR_0);
 return (VAR_12);
}
