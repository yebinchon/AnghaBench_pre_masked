
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octeon_device {TYPE_1__* response_list; } ;
struct TYPE_2__ {int pending_req_count; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int
FUNC_2(struct octeon_device *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < 100; VAR_2++) {
  VAR_3 = FUNC_0(
         &VAR_1->response_list[VAR_0].
          pending_req_count);
  if (VAR_3)
   FUNC_1(100);
  else
   break;
 }

 if (VAR_3)
  return (1);

 return (0);
}
