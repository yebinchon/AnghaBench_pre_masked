
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ISCI_IO_REQUEST {TYPE_1__* ccb; } ;
struct TYPE_2__ {int csio; } ;


 void* FUNC_0 (int *) ;

void *
FUNC_1(void * VAR_0)
{
 struct ISCI_IO_REQUEST *VAR_1 =
     (struct ISCI_IO_REQUEST *)VAR_0;

 return (FUNC_0(&VAR_1->ccb->csio));
}
