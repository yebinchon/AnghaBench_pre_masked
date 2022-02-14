
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* probe ) (int,int **,int *,int) ;} ;
typedef TYPE_1__ video_switch_t ;
typedef int video_adapter_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int,int **,int *,int) ;
 TYPE_1__* FUNC_2 (int ) ;

int
FUNC_3(int VAR_1, video_adapter_t *VAR_2, int VAR_3)
{
 video_adapter_t *VAR_4;
 video_switch_t *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_0);
 if (VAR_5 == ((void*)0))
  return 0;
 VAR_6 = (*VAR_5->probe)(VAR_1, &VAR_4, ((void*)0), VAR_3);
 if (VAR_6)
  return VAR_6;
 FUNC_0(VAR_4, VAR_2, sizeof(*VAR_2));
 return 0;
}
