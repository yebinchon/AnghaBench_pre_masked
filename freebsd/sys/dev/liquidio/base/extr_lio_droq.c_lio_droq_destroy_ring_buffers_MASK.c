
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct octeon_device {int dummy; } ;
struct lio_droq {size_t max_count; TYPE_1__* recv_buf_list; } ;
struct TYPE_2__ {int * buffer; } ;


 int FUNC_0 (struct lio_droq*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct octeon_device *VAR_0,
         struct lio_droq *VAR_1)
{
 uint32_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->max_count; VAR_2++) {
  if (VAR_1->recv_buf_list[VAR_2].buffer != ((void*)0)) {
   FUNC_1(VAR_1->recv_buf_list[VAR_2].buffer);
   VAR_1->recv_buf_list[VAR_2].buffer = ((void*)0);
  }
 }

 FUNC_0(VAR_1);
}
