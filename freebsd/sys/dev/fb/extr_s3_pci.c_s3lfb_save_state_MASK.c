
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int video_adapter_t ;
struct TYPE_2__ {int (* save_state ) (int *,void*,size_t) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,void*,size_t) ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_1, void *VAR_2, size_t VAR_3)
{
 return (*VAR_0->save_state)(VAR_1, VAR_2, VAR_3);
}
