
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int pqisrc_softstate_t ;
struct TYPE_4__ {int iu_length; } ;
typedef TYPE_1__ iu_header_t ;
struct TYPE_5__ {int pi_local; int num_elem; int* ci_virt_addr; int elem_size; char* array_virt_addr; int lock; int pi_register_offset; int pi_register_abs; } ;
typedef TYPE_2__ ib_queue_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,int ,int) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,void*,int) ;

int FUNC_7(pqisrc_softstate_t *VAR_2,
    ib_queue_t *VAR_3, void *VAR_4)
{
 char *VAR_5 = ((void*)0);
 uint32_t VAR_6;
 iu_header_t *VAR_7 = (iu_header_t *)VAR_4;
 uint32_t VAR_8 = VAR_7->iu_length + 4 ;
 int VAR_9 = 0;
 FUNC_0("IN\n");

 FUNC_4(&VAR_3->lock);


 if ((VAR_3->pi_local + 1) % VAR_3->num_elem == *(VAR_3->ci_virt_addr)) {
  FUNC_2("OUT Q full\n");
 FUNC_5(&VAR_3->lock);
  return VAR_0;
 }


 VAR_6 = VAR_3->pi_local * VAR_3->elem_size;
 VAR_5 = VAR_3->array_virt_addr + VAR_6;


 FUNC_6(VAR_5, VAR_4, VAR_8);
 FUNC_1("IU : \n");
 for(VAR_9 = 0; VAR_9< VAR_8; VAR_9++)
  FUNC_1(" IU [ %d ] : %x\n", VAR_9, *((unsigned char *)(VAR_5 + VAR_9)));


 VAR_3->pi_local = (VAR_3->pi_local + 1) % VAR_3->num_elem;
 FUNC_1("ib_q->pi_local : %x IU size : %d\n",
    VAR_3->pi_local, VAR_7->iu_length);
 FUNC_1("*ib_q->ci_virt_addr: %x\n",
    *(VAR_3->ci_virt_addr));


 FUNC_3(VAR_2, VAR_3->pi_register_abs, VAR_3->pi_register_offset, VAR_3->pi_local);
 FUNC_5(&VAR_3->lock);
 FUNC_0("OUT\n");
 return VAR_1;
}
