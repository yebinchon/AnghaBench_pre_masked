
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_2__ {size_t rs_count; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline void
FUNC_2(size_t VAR_1)
{

 static pid_t VAR_2 = 0;
 pid_t VAR_3 = FUNC_1();


 if (VAR_2 == 0 || VAR_2 != VAR_3) {
  VAR_2 = VAR_3;
  if (VAR_0)
   VAR_0->rs_count = 0;
 }

 if (!VAR_0 || VAR_0->rs_count <= VAR_1)
  FUNC_0();
 if (VAR_0->rs_count <= VAR_1)
  VAR_0->rs_count = 0;
 else
  VAR_0->rs_count -= VAR_1;
}
