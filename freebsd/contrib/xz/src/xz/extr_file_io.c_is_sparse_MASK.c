
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {scalar_t__* u64; } ;
typedef TYPE_1__ io_buf ;


 size_t FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool
FUNC_2(const io_buf *VAR_1)
{
 FUNC_1(VAR_0 % sizeof(uint64_t) == 0);

 for (size_t VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->u64); ++VAR_2)
  if (VAR_1->u64[VAR_2] != 0)
   return 0;

 return 1;
}
