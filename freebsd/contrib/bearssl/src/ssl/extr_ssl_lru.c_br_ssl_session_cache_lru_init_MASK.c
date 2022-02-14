
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* store; size_t store_len; void* root; void* tail; void* head; scalar_t__ init_done; scalar_t__ store_ptr; int * vtable; } ;
typedef TYPE_1__ br_ssl_session_cache_lru ;


 void* VAR_0 ;
 int VAR_1 ;

void
FUNC_0(br_ssl_session_cache_lru *VAR_2,
 unsigned char *VAR_3, size_t VAR_4)
{
 VAR_2->vtable = &VAR_1;
 VAR_2->store = VAR_3;
 VAR_2->store_len = VAR_4;
 VAR_2->store_ptr = 0;
 VAR_2->init_done = 0;
 VAR_2->head = VAR_0;
 VAR_2->tail = VAR_0;
 VAR_2->root = VAR_0;
}
