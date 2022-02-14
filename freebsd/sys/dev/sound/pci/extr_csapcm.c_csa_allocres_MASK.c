
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * irq; int irq_rid; int * mem; int mem_rid; int * io; int io_rid; } ;
struct csa_info {int parent_dmat; TYPE_1__ res; } ;
typedef int device_t ;
typedef TYPE_1__ csa_res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ,int ,int *,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int *,int *,int ,int,int,int ,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_3(struct csa_info *VAR_9, device_t VAR_10)
{
 csa_res *VAR_11;

 VAR_11 = &VAR_9->res;
 if (VAR_11->io == ((void*)0)) {
  VAR_11->io = FUNC_0(VAR_10, VAR_7,
   &VAR_11->io_rid, VAR_4);
  if (VAR_11->io == ((void*)0))
   return (1);
 }
 if (VAR_11->mem == ((void*)0)) {
  VAR_11->mem = FUNC_0(VAR_10, VAR_7,
   &VAR_11->mem_rid, VAR_4);
  if (VAR_11->mem == ((void*)0))
   return (1);
 }
 if (VAR_11->irq == ((void*)0)) {
  VAR_11->irq = FUNC_0(VAR_10, VAR_6,
   &VAR_11->irq_rid, VAR_4 | VAR_5);
  if (VAR_11->irq == ((void*)0))
   return (1);
 }
 if (FUNC_1( FUNC_2(VAR_10),
                       VAR_2,
                      VAR_2,
                     VAR_1,
                      VAR_0,
                    ((void*)0), ((void*)0),
                     VAR_2, 1, 0x3ffff,
                   0, VAR_8,
                     &VAR_3, &VAR_9->parent_dmat) != 0)
  return (1);

 return (0);
}
