
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct mtx {int dummy; } ;
struct celockstate {struct mtx** vlp; } ;


 int FUNC_0 (int) ;
 struct mtx* FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct mtx**,struct mtx**) ;
 int FUNC_3 (struct mtx*) ;

__attribute__((used)) static void
FUNC_4(struct celockstate *VAR_0, struct vnode *VAR_1,
    struct vnode *VAR_2)
{
 struct mtx *VAR_3, *VAR_4;

 FUNC_0(VAR_0->vlp[0] == ((void*)0));
 FUNC_0(VAR_0->vlp[1] == ((void*)0));
 FUNC_0(VAR_0->vlp[2] == ((void*)0));

 FUNC_0(VAR_1 != ((void*)0) || VAR_2 != ((void*)0));

 VAR_3 = FUNC_1(VAR_1);
 VAR_4 = FUNC_1(VAR_2);
 FUNC_2(&VAR_3, &VAR_4);

 if (VAR_3 != ((void*)0)) {
  FUNC_3(VAR_3);
  VAR_0->vlp[0] = VAR_3;
 }
 FUNC_3(VAR_4);
 VAR_0->vlp[1] = VAR_4;
}
