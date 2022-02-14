
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_iov_schema {size_t len; scalar_t__ error; int schema; } ;
struct TYPE_4__ {TYPE_1__* iov; } ;
struct pci_devinfo {TYPE_2__ cfg; } ;
struct cdev {struct pci_devinfo* si_drv1; } ;
struct TYPE_3__ {int iov_schema; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,int ,size_t) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ,size_t*) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_4, struct pci_iov_schema *VAR_5)
{
 struct pci_devinfo *VAR_6;
 void *VAR_7;
 size_t VAR_8, VAR_9;
 int VAR_10;

 VAR_7 = ((void*)0);

 FUNC_2(&VAR_2);
 VAR_6 = VAR_4->si_drv1;
 VAR_7 = FUNC_4(VAR_6->cfg.iov->iov_schema, &VAR_9);
 FUNC_3(&VAR_2);

 if (VAR_7 == ((void*)0)) {
  VAR_10 = VAR_1;
  goto fail;
 }

 VAR_8 = VAR_5->len;
 VAR_5->len = VAR_9;
 if (VAR_9 <= VAR_8) {
  VAR_10 = FUNC_0(VAR_7, VAR_5->schema, VAR_9);

  if (VAR_10 != 0)
   goto fail;

  VAR_5->error = 0;
 } else





  VAR_5->error = VAR_0;

 VAR_10 = 0;

fail:
 FUNC_1(VAR_7, VAR_3);

 return (VAR_10);
}
