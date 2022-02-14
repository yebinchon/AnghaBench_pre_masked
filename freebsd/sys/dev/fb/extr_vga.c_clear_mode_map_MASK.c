
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vi_flags; } ;
typedef TYPE_1__ video_info_t ;
typedef int video_adapter_t ;
typedef int u_char ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(video_adapter_t *VAR_1, u_char *VAR_2[], int VAR_3, int VAR_4)
{
    video_info_t VAR_5;
    int VAR_6;





    for(VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
 if (FUNC_0(VAR_1, VAR_6, &VAR_5))
     continue;
 if ((VAR_5.vi_flags & VAR_0) != VAR_4)
     VAR_2[VAR_6] = ((void*)0);
    }
}
