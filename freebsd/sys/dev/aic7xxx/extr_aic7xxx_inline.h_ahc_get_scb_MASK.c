
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scb {int dummy; } ;
struct ahc_softc {TYPE_1__* scb_data; } ;
struct TYPE_4__ {int sle; } ;
struct TYPE_3__ {int free_scbs; } ;


 struct scb* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct ahc_softc*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static __inline struct scb *
FUNC_3(struct ahc_softc *VAR_1)
{
 struct scb *VAR_2;

 if ((VAR_2 = FUNC_0(&VAR_1->scb_data->free_scbs)) == ((void*)0)) {
  if (FUNC_2(VAR_1) == 0)
   return (((void*)0));
  VAR_2 = FUNC_0(&VAR_1->scb_data->free_scbs);
  if (VAR_2 == ((void*)0))
   return (((void*)0));
 }
 FUNC_1(&VAR_1->scb_data->free_scbs, VAR_0.sle);
 return (VAR_2);
}
