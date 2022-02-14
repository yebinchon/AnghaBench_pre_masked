
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int video_info_t ;
struct TYPE_6__ {int va_name; } ;
typedef TYPE_1__ video_adapter_t ;


 int FUNC_0 (int ,TYPE_1__*,int) ;
 int FUNC_1 (int ,TYPE_1__*,int *,int) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int
FUNC_3(video_adapter_t *VAR_0, int VAR_1)
{
 video_info_t VAR_2;

 FUNC_0(VAR_0->va_name, VAR_0, VAR_1);
 FUNC_2(VAR_0, 0, &VAR_2);
 FUNC_1(VAR_0->va_name, VAR_0, &VAR_2, VAR_1);

 return (0);
}
