
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* dma; } ;
struct TYPE_2__ {int * bufs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (int,int ,int) ;
 int FUNC_1 (int *,int ,int) ;

int FUNC_2(struct drm_device *VAR_5)
{
 int VAR_6;

 VAR_5->dma = FUNC_0(sizeof(*VAR_5->dma), VAR_1, VAR_3 | VAR_4);
 if (!VAR_5->dma)
  return -VAR_2;

 for (VAR_6 = 0; VAR_6 <= VAR_0; VAR_6++)
  FUNC_1(&VAR_5->dma->bufs[VAR_6], 0, sizeof(VAR_5->dma->bufs[0]));

 return 0;
}
