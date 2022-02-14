
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_block_record {int dummy; } ;
typedef int bqueue_t ;


 struct send_block_record* FUNC_0 (int *) ;
 int FUNC_1 (struct send_block_record*,int) ;

__attribute__((used)) static struct send_block_record *
FUNC_2(bqueue_t *VAR_0, struct send_block_record *VAR_1)
{
 struct send_block_record *VAR_2 = FUNC_0(VAR_0);
 FUNC_1(VAR_1, sizeof (*VAR_1));
 return (VAR_2);
}
