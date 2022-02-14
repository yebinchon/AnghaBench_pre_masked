
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int vq_flags; int vq_max_indirect_size; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct virtqueue *VAR_1, int VAR_2)
{

 if ((VAR_1->vq_flags & VAR_0) == 0)
  return (0);

 if (VAR_1->vq_max_indirect_size < VAR_2)
  return (0);

 if (VAR_2 < 2)
  return (0);

 return (1);
}
