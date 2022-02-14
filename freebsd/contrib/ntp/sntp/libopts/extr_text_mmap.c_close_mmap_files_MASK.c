
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ txt_fd; scalar_t__ txt_zero_fd; } ;
typedef TYPE_1__ tmap_info_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(tmap_info_t * VAR_1)
{
    if (VAR_1->txt_fd == VAR_0)
        return;

    FUNC_0(VAR_1->txt_fd);
    VAR_1->txt_fd = VAR_0;
}
