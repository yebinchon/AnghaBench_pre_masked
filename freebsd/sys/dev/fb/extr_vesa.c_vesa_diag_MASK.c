
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int video_adapter_t ;
struct TYPE_2__ {int (* diag ) (int *,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int) ;
 int * VAR_1 ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_2, int VAR_3)
{
 int VAR_4;


 VAR_4 = (*VAR_0->diag)(VAR_2, VAR_3);
 if (VAR_4)
  return (VAR_4);

 if (VAR_2 != VAR_1)
  return (1);

 if (VAR_3 <= 0)
  return (0);

 return (0);
}
