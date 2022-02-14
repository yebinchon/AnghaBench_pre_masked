
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_data; } ;
struct smbnode {scalar_t__ n_parent; scalar_t__ n_nmlen; int n_name; } ;
struct smbcmp {scalar_t__ n_parent; scalar_t__ n_nmlen; int n_name; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int __inline
FUNC_1(struct vnode *VAR_0, void *VAR_1)
{
 struct smbnode *VAR_2;
 struct smbcmp *VAR_3;

 VAR_2 = (struct smbnode *) VAR_0->v_data;
 VAR_3 = (struct smbcmp *) VAR_1;
 if (VAR_2->n_parent != VAR_3->n_parent || VAR_2->n_nmlen != VAR_3->n_nmlen ||
     FUNC_0(VAR_3->n_name, VAR_2->n_name, VAR_3->n_nmlen) != 0)
  return 1;
 return 0;
}
