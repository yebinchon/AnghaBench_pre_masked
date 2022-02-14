
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* va_name; int va_type; int va_unit; scalar_t__ va_flags; } ;
typedef TYPE_1__ video_adapter_t ;



void
FUNC_0(video_adapter_t *VAR_0, char *VAR_1, int VAR_2, int VAR_3)
{
 VAR_0->va_flags = 0;
 VAR_0->va_name = VAR_1;
 VAR_0->va_type = VAR_2;
 VAR_0->va_unit = VAR_3;
}
