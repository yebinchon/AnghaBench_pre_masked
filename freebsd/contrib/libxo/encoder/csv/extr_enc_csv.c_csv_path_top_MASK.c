
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_5__ {int c_flags; size_t c_path_cur; TYPE_1__* c_path; } ;
typedef TYPE_2__ csv_private_t ;
struct TYPE_4__ {char const* pf_name; } ;


 int VAR_0 ;

__attribute__((used)) static const char *
FUNC_0 (csv_private_t *VAR_1, ssize_t VAR_2)
{
    if (!(VAR_1->c_flags & VAR_0) || VAR_1->c_path == ((void*)0))
 return ((void*)0);

    ssize_t VAR_3 = VAR_1->c_path_cur + VAR_2;

    if (VAR_3 < 0)
 return ((void*)0);

    return VAR_1->c_path[VAR_3].pf_name;
}
