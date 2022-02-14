
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_ntb_softc {int allocated_interrupts; int device; struct amd_ntb_int_info* int_info; int db_mask; int db_valid_mask; } ;
struct amd_ntb_int_info {int * res; int * tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amd_ntb_softc*) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct amd_ntb_softc *VAR_2)
{
 struct amd_ntb_int_info *VAR_3;
 int VAR_4;


 VAR_2->db_mask = VAR_2->db_valid_mask;
 FUNC_1(4, VAR_0, VAR_2->db_mask);

 for (VAR_4 = 0; VAR_4 < VAR_2->allocated_interrupts; VAR_4++) {
  VAR_3 = &VAR_2->int_info[VAR_4];
  if (VAR_3->tag != ((void*)0))
   FUNC_3(VAR_2->device, VAR_3->res,
       VAR_3->tag);

  if (VAR_3->res != ((void*)0))
   FUNC_2(VAR_2->device, VAR_1,
       FUNC_4(VAR_3->res), VAR_3->res);
 }

 FUNC_0(VAR_2);
}
