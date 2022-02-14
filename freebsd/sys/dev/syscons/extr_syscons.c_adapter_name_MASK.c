
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int va_type; int va_flags; } ;
typedef TYPE_2__ video_adapter_t ;
struct TYPE_4__ {char* member_0; char* member_1; } ;
 int VAR_0 ;

__attribute__((used)) static char
*FUNC_0(video_adapter_t *VAR_1)
{
    static struct {
 int type;
 char *name[2];
    } VAR_2[] = {
 { 130, { "MDA", "MDA" } },
 { 131, { "Hercules", "Hercules" } },
 { 133, { "CGA", "CGA" } },
 { 132, { "EGA", "EGA (mono)" } },
 { 128, { "VGA", "VGA (mono)" } },
 { 129, { "TGA", "TGA" } },
 { -1, { "Unknown", "Unknown" } },
    };
    int VAR_3;

    for (VAR_3 = 0; VAR_2[VAR_3].type != -1; ++VAR_3)
 if (VAR_2[VAR_3].type == VAR_1->va_type)
     break;
    return VAR_2[VAR_3].name[(VAR_1->va_flags & VAR_0) ? 0 : 1];
}
