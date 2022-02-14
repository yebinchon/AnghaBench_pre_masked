
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int video_adapter_t ;
struct TYPE_2__ {int active; int initialized; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_2, int VAR_3)
{
 if (!VAR_0.initialized || !VAR_0.active)
  return 0;

 if (VAR_3==VAR_1)
  return 0;

 VAR_1=VAR_3;

 FUNC_0(!VAR_1);

 return 0;
}
