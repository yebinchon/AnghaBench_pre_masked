
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {int vq_nentries; TYPE_1__* vq_descx; } ;
struct TYPE_2__ {int * cookie; } ;


 int FUNC_0 (struct virtqueue*,int) ;

void *
FUNC_1(struct virtqueue *VAR_0, int *VAR_1)
{
 void *VAR_2;
 int VAR_3;

 VAR_2 = ((void*)0);
 VAR_3 = *VAR_1;

 while (VAR_3 < VAR_0->vq_nentries && VAR_2 == ((void*)0)) {
  if ((VAR_2 = VAR_0->vq_descx[VAR_3].cookie) != ((void*)0)) {
   VAR_0->vq_descx[VAR_3].cookie = ((void*)0);

   FUNC_0(VAR_0, VAR_3);
  }
  VAR_3++;
 }

 *VAR_1 = VAR_3;

 return (VAR_2);
}
