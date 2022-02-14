
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* v_phys_read ) (TYPE_1__*,int ,int ,void*,size_t) ;int spa; int v_read_priv; } ;
typedef TYPE_1__ vdev_t ;
typedef int off_t ;
typedef int blkptr_t ;


 size_t FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,int ,void*,size_t) ;
 int FUNC_2 (int ,int const*,void*) ;

__attribute__((used)) static int
FUNC_3(vdev_t *VAR_1, const blkptr_t *VAR_2, void *VAR_3,
    off_t VAR_4, size_t VAR_5)
{
 size_t VAR_6;
 int VAR_7;

 if (!VAR_1->v_phys_read)
  return (VAR_0);

 if (VAR_2) {
  VAR_6 = FUNC_0(VAR_2);
 } else {
  VAR_6 = VAR_5;
 }


 VAR_7 = VAR_1->v_phys_read(VAR_1, VAR_1->v_read_priv, VAR_4, VAR_3, VAR_6);
 if (VAR_7)
  return (VAR_7);
 if (VAR_2 != ((void*)0))
  return (FUNC_2(VAR_1->spa, VAR_2, VAR_3));

 return (0);
}
