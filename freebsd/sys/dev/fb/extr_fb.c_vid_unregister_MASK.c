
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t va_index; } ;
typedef TYPE_1__ video_adapter_t ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 size_t VAR_2 ;
 int ** VAR_3 ;

int
FUNC_0(video_adapter_t *VAR_4)
{
 if ((VAR_4->va_index < 0) || (VAR_4->va_index >= VAR_2))
  return VAR_0;
 if (VAR_1[VAR_4->va_index] != VAR_4)
  return VAR_0;

 VAR_1[VAR_4->va_index] = ((void*)0);
 VAR_3[VAR_4->va_index] = ((void*)0);
 return 0;
}
