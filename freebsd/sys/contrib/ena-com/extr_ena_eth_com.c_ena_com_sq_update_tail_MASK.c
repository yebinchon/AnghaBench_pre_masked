
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_com_io_sq {scalar_t__ mem_queue_type; int tail; int q_depth; int phase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ena_com_io_sq*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(struct ena_com_io_sq *VAR_2)
{
 if (VAR_2->mem_queue_type == VAR_0)
  return FUNC_0(VAR_2);

 VAR_2->tail++;


 if (FUNC_1((VAR_2->tail & (VAR_2->q_depth - 1)) == 0))
  VAR_2->phase ^= 1;

 return VAR_1;
}
