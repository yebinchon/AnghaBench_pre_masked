
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int video_adapter_t ;
typedef int u_int16_t ;


 int FUNC_0 (int *,scalar_t__,int,int) ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_0, vm_offset_t VAR_1, u_int16_t *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_0(VAR_0, VAR_1 + VAR_4, VAR_2[VAR_4] & 0xff, (VAR_2[VAR_4] & 0xff00) >> 8);

 return (0);
}
