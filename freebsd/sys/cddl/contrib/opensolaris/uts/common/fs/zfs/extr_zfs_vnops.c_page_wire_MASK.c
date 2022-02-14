
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int v_object; } ;
typedef TYPE_1__ vnode_t ;
typedef int vm_page_t ;
typedef int vm_object_t ;
typedef int int64_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static vm_page_t
FUNC_3(vnode_t *VAR_4, int64_t VAR_5)
{
 vm_object_t VAR_6;
 vm_page_t VAR_7;

 VAR_6 = VAR_4->v_object;
 FUNC_2(VAR_6);

 FUNC_1(&VAR_7, VAR_6, FUNC_0(VAR_5), VAR_2 |
     VAR_3 | VAR_0 | VAR_1);
 return (VAR_7);
}
