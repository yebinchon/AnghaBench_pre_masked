
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_softc {int allocated_interrupts; int device; struct ntb_int_info* int_info; } ;
struct ntb_int_info {int * res; int * tag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (struct ntb_softc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct ntb_softc *VAR_1)
{
 struct ntb_int_info *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->allocated_interrupts; VAR_3++) {
  VAR_2 = &VAR_1->int_info[VAR_3];
  if (VAR_2->tag != ((void*)0))
   FUNC_1(VAR_1->device, VAR_2->res,
       VAR_2->tag);

  if (VAR_2->res != ((void*)0))
   FUNC_0(VAR_1->device, VAR_0,
       FUNC_4(VAR_2->res), VAR_2->res);
 }

 FUNC_2(VAR_1);
 FUNC_3(VAR_1->device);
}
