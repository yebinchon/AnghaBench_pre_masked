
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource_list_entry {struct resource* res; } ;
struct resource_list {int dummy; } ;
struct resource {int dummy; } ;
struct pcicfg_iov {int iov_num_vfs; int rman; TYPE_2__* iov_bar; scalar_t__ iov_pos; } ;
struct TYPE_3__ {struct pcicfg_iov* iov; } ;
struct pci_devinfo {TYPE_1__ cfg; struct resource_list resources; } ;
typedef int rman_res_t ;
struct TYPE_4__ {int bar_size; int bar_shift; struct resource* res; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 struct resource_list_entry* FUNC_2 (struct resource_list*,int ,scalar_t__) ;
 int FUNC_3 (struct resource*) ;
 int FUNC_4 (struct resource*) ;
 int FUNC_5 (struct resource*) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct pci_devinfo *VAR_3, int VAR_4)
{
 struct pcicfg_iov *VAR_5;
 rman_res_t VAR_6, VAR_7;
 struct resource *VAR_8;
 struct resource_list *VAR_9;
 struct resource_list_entry *VAR_10;

 VAR_9 = &VAR_3->resources;
 VAR_5 = VAR_3->cfg.iov;

 VAR_10 = FUNC_2(VAR_9, VAR_2,
     VAR_5->iov_pos + FUNC_0(VAR_4));
 if (VAR_10 == ((void*)0))
  VAR_10 = FUNC_2(VAR_9, VAR_1,
      VAR_5->iov_pos + FUNC_0(VAR_4));
 if (VAR_10 == ((void*)0))
  return (VAR_0);
 VAR_8 = VAR_10->res;

 VAR_5->iov_bar[VAR_4].res = VAR_8;
 VAR_5->iov_bar[VAR_4].bar_size = FUNC_4(VAR_8) / VAR_5->iov_num_vfs;
 VAR_5->iov_bar[VAR_4].bar_shift = FUNC_1(VAR_5->iov_bar[VAR_4].bar_size);

 VAR_6 = FUNC_5(VAR_8);
 VAR_7 = FUNC_3(VAR_8);

 return (FUNC_6(&VAR_5->rman, VAR_6, VAR_7));
}
