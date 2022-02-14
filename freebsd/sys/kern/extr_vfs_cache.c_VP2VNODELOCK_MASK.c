
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct mtx {int dummy; } ;


 uintptr_t VAR_0 ;
 struct mtx* VAR_1 ;

__attribute__((used)) static inline struct mtx *
FUNC_0(struct vnode *VAR_2)
{

 return (&VAR_1[(((uintptr_t)(VAR_2) >> 8) & VAR_0)]);
}
