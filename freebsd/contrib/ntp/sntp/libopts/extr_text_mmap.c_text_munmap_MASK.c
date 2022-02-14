
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int txt_errno; int txt_data; int txt_size; int txt_fd; int txt_flags; int txt_prot; int txt_full_size; } ;
typedef TYPE_1__ tmap_info_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;

int
FUNC_6(tmap_info_t * VAR_2)
{
    VAR_1 = 0;
    if ( FUNC_0(VAR_2->txt_prot, VAR_2->txt_flags)
        && (FUNC_3(VAR_2->txt_fd, 0, VAR_0) >= 0) ) {
        FUNC_5(VAR_2->txt_fd, VAR_2->txt_data, VAR_2->txt_size);
    }

    FUNC_2(VAR_2->txt_data);


    VAR_2->txt_errno = VAR_1;
    FUNC_1(VAR_2);

    return VAR_2->txt_errno;
}
