
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xo_xff_flags_t ;
struct TYPE_3__ {int xm_value; scalar_t__ xm_name; } ;
typedef TYPE_1__ xo_mapping_t ;
typedef int ssize_t ;


 scalar_t__ isspace (int) ;
 int strlen (char const*) ;
 scalar_t__ strncmp (scalar_t__,char const*,int) ;

__attribute__((used)) static xo_xff_flags_t
xo_name_lookup (xo_mapping_t *map, const char *value, ssize_t len)
{
    if (len == 0)
 return 0;

    if (len < 0)
 len = strlen(value);

    while (isspace((int) *value)) {
 value += 1;
 len -= 1;
    }

    while (isspace((int) value[len]))
 len -= 1;

    if (*value == '\0')
 return 0;

    for ( ; map->xm_name; map++)
 if (strncmp(map->xm_name, value, len) == 0)
     return map->xm_value;

    return 0;
}
