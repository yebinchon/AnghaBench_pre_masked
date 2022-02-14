
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct zone {int wait_table_bits; int * wait_table; } ;


 int VAR_0 ;
 size_t FUNC_0 (unsigned long,int ) ;
 struct zone* FUNC_1 (int ) ;
 int FUNC_2 (void*) ;

wait_queue_head_t *FUNC_3(void *VAR_1, int VAR_2)
{
 const int VAR_3 = VAR_0 == 32 ? 5 : 6;
 const struct zone *VAR_4 = FUNC_1(FUNC_2(VAR_1));
 unsigned long VAR_5 = (unsigned long)VAR_1 << VAR_3 | VAR_2;

 return &VAR_4->wait_table[FUNC_0(VAR_5, VAR_4->wait_table_bits)];
}
