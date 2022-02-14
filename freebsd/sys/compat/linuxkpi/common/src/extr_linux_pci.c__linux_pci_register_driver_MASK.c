
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int methods; int name; } ;
struct pci_driver {int bsdclass; TYPE_1__ bsddriver; int name; int links; } ;
struct pci_dev {int dummy; } ;
typedef int devclass_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct pci_driver *VAR_6, devclass_t VAR_7)
{
 int VAR_8;

 FUNC_1(VAR_2);
 FUNC_5(&VAR_4);
 FUNC_2(&VAR_6->links, &VAR_3);
 FUNC_6(&VAR_4);
 VAR_6->bsddriver.name = VAR_6->name;
 VAR_6->bsddriver.methods = VAR_5;
 VAR_6->bsddriver.size = sizeof(struct pci_dev);

 FUNC_3(&VAR_1);
 VAR_8 = FUNC_0(VAR_7, &VAR_6->bsddriver,
     VAR_0, &VAR_6->bsdclass);
 FUNC_4(&VAR_1);
 return (-VAR_8);
}
