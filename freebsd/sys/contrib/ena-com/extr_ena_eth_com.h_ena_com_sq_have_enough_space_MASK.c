
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int descs_per_entry; } ;
struct ena_com_io_sq {scalar_t__ mem_queue_type; TYPE_1__ llq_info; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ena_com_io_sq*) ;

__attribute__((used)) static inline bool FUNC_1(struct ena_com_io_sq *VAR_1,
      u16 VAR_2)
{
 int VAR_3;

 if (VAR_1->mem_queue_type == VAR_0)
  return FUNC_0(VAR_1) >= VAR_2;






 VAR_3 = VAR_2 / VAR_1->llq_info.descs_per_entry + 2;

 return FUNC_0(VAR_1) > VAR_3;
}
