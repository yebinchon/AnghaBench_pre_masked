
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int video_info_t ;
typedef int video_adapter_t ;
struct TYPE_2__ {int (* query_mode ) (int *,int *) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_1, video_info_t *VAR_2)
{
 return (*VAR_0->query_mode)(VAR_1, VAR_2);
}
