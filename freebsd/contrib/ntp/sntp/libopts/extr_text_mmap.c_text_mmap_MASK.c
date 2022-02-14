
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ txt_errno; void* txt_data; } ;
typedef TYPE_1__ tmap_info_t ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (char const*,int,int,TYPE_1__*) ;

void *
FUNC_3(char const * VAR_2, int VAR_3, int VAR_4, tmap_info_t * VAR_5)
{
    FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
    if (VAR_5->txt_errno != 0)
        return VAR_0;

    FUNC_1(VAR_5, VAR_2);

    if (VAR_5->txt_errno == 0)
        return VAR_5->txt_data;

    FUNC_0(VAR_5);

    VAR_1 = VAR_5->txt_errno;
    VAR_5->txt_data = VAR_0;
    return VAR_5->txt_data;
}
