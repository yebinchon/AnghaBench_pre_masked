
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int cnt; scalar_t__* p; } ;
typedef TYPE_1__ ib_dr_path_t ;



__attribute__((used)) static int FUNC_0(ib_dr_path_t * VAR_0, int VAR_1)
{
 if (VAR_0->cnt + 2 >= sizeof(VAR_0->p))
  return -1;
 ++VAR_0->cnt;
 VAR_0->p[VAR_0->cnt] = (uint8_t) VAR_1;
 return VAR_0->cnt;
}
