
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource_list {int dummy; } ;
struct pccard_ivar {TYPE_2__* pf; struct resource_list resources; } ;
typedef int device_t ;
struct TYPE_4__ {int number; TYPE_1__* cfe; } ;
struct TYPE_3__ {int number; } ;


 struct pccard_ivar* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct resource_list*,char*,int ,int ,char*) ;
 scalar_t__ FUNC_4 (char*,...) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_8, device_t VAR_9)
{
 struct pccard_ivar *VAR_10 = FUNC_0(VAR_9);
 struct resource_list *VAR_11 = &VAR_10->resources;
 int VAR_12 = 0;

 VAR_12 += FUNC_2(VAR_8, VAR_9);
 VAR_12 += FUNC_4(" at");

 if (VAR_10 != ((void*)0)) {
  FUNC_3(VAR_11, "port", VAR_5,
      VAR_3, "%#lx");
  FUNC_3(VAR_11, "iomem", VAR_7,
      VAR_2, "%#lx");
  FUNC_3(VAR_11, "irq", VAR_6, VAR_1,
      "%ld");
  FUNC_3(VAR_11, "drq", VAR_4, VAR_0,
      "%ld");
  VAR_12 += FUNC_4(" function %d config %d", VAR_10->pf->number,
      VAR_10->pf->cfe->number);
 }

 VAR_12 += FUNC_1(VAR_8, VAR_9);

 return (VAR_12);
}
