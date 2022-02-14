
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint32_t ;
struct ecore_raw_obj {int state; unsigned long* pstate; int wait_comp; int set_pending; int clear_pending; int check_pending; int obj_type; int rdata_mapping; void* rdata; void* cl_id; int cid; void* func_id; } ;
typedef int ecore_obj_type ;
typedef int ecore_dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_0(struct ecore_raw_obj *VAR_4, uint8_t VAR_5,
 uint32_t VAR_6, uint8_t VAR_7, void *VAR_8, ecore_dma_addr_t VAR_9, int VAR_10,
 unsigned long *VAR_11, ecore_obj_type VAR_12)
{
 VAR_4->func_id = VAR_7;
 VAR_4->cid = VAR_6;
 VAR_4->cl_id = VAR_5;
 VAR_4->rdata = VAR_8;
 VAR_4->rdata_mapping = VAR_9;
 VAR_4->state = VAR_10;
 VAR_4->pstate = VAR_11;
 VAR_4->obj_type = VAR_12;
 VAR_4->check_pending = VAR_0;
 VAR_4->clear_pending = VAR_1;
 VAR_4->set_pending = VAR_2;
 VAR_4->wait_comp = VAR_3;
}
