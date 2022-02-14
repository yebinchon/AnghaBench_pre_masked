
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct mtx {int dummy; } ;
struct celockstate {struct mtx** vlp; } ;


 int FUNC_0 (int ) ;
 struct mtx* FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct mtx*) ;
 int VAR_0 ;
 int FUNC_3 (struct celockstate*) ;
 int FUNC_4 (struct mtx*) ;
 scalar_t__ FUNC_5 (struct mtx*) ;

__attribute__((used)) static bool
FUNC_6(struct celockstate *VAR_1, struct vnode *VAR_2)
{
 struct mtx *VAR_3;
 bool VAR_4;

 FUNC_2(VAR_1->vlp[0]);
 FUNC_2(VAR_1->vlp[1]);
 FUNC_0(VAR_1->vlp[2] == ((void*)0));

 FUNC_0(VAR_2 != ((void*)0));
 VAR_3 = FUNC_1(VAR_2);

 VAR_4 = 1;
 if (VAR_3 >= VAR_1->vlp[1]) {
  FUNC_4(VAR_3);
 } else {
  if (FUNC_5(VAR_3))
   goto out;
  VAR_0++;
  FUNC_3(VAR_1);
  if (VAR_3 < VAR_1->vlp[0]) {
   FUNC_4(VAR_3);
   FUNC_4(VAR_1->vlp[0]);
   FUNC_4(VAR_1->vlp[1]);
  } else {
   if (VAR_1->vlp[0] != ((void*)0))
    FUNC_4(VAR_1->vlp[0]);
   FUNC_4(VAR_3);
   FUNC_4(VAR_1->vlp[1]);
  }
  VAR_4 = 0;
 }
out:
 VAR_1->vlp[2] = VAR_3;
 return (VAR_4);
}
