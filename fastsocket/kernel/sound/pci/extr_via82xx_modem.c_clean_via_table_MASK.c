
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * area; } ;
struct viadev {int * idx_table; TYPE_1__ table; } ;
struct snd_pcm_substream {int dummy; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct viadev *VAR_0, struct snd_pcm_substream *VAR_1,
      struct pci_dev *VAR_2)
{
 if (VAR_0->table.area) {
  FUNC_1(&VAR_0->table);
  VAR_0->table.area = ((void*)0);
 }
 FUNC_0(VAR_0->idx_table);
 VAR_0->idx_table = ((void*)0);
 return 0;
}
