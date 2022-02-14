
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct zone {int wait_table_bits; int * wait_table; } ;
struct page {int dummy; } ;


 size_t FUNC_0 (struct page*,int ) ;
 struct zone* FUNC_1 (struct page*) ;

__attribute__((used)) static wait_queue_head_t *FUNC_2(struct page *VAR_0)
{
 const struct zone *VAR_1 = FUNC_1(VAR_0);

 return &VAR_1->wait_table[FUNC_0(VAR_0, VAR_1->wait_table_bits)];
}
