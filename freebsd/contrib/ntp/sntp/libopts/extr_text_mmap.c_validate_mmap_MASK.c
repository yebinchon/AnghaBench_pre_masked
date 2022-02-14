
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ txt_fd; int txt_prot; int txt_flags; size_t txt_size; void* txt_errno; scalar_t__ txt_zero_fd; } ;
typedef TYPE_1__ tmap_info_t ;
struct stat {scalar_t__ st_size; int st_mode; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 void* VAR_7 ;
 scalar_t__ FUNC_3 (scalar_t__,struct stat*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_5 (char const*,int) ;

__attribute__((used)) static void
FUNC_6(char const * VAR_8, int VAR_9, int VAR_10, tmap_info_t * VAR_11)
{
    FUNC_4(VAR_11, 0, sizeof(*VAR_11));



    VAR_11->txt_fd = VAR_0;
    VAR_11->txt_prot = VAR_9;
    VAR_11->txt_flags = VAR_10;




    {






        int VAR_12 = FUNC_0(VAR_9, VAR_10) ? VAR_5 : VAR_4;





        if (((VAR_10 & VAR_2) == 0) && (VAR_9 & VAR_6))
            VAR_12 |= VAR_3;

        VAR_11->txt_fd = FUNC_5(VAR_8, VAR_12);
        if (VAR_11->txt_fd < 0) {
            VAR_11->txt_errno = VAR_7;
            VAR_11->txt_fd = VAR_0;
            return;
        }
    }




    {
        struct stat VAR_13;
        if (FUNC_3(VAR_11->txt_fd, &VAR_13) != 0) {
            VAR_11->txt_errno = VAR_7;
            FUNC_2(VAR_11->txt_fd);
            return;
        }

        if (! FUNC_1(VAR_13.st_mode)) {
            VAR_11->txt_errno = VAR_7 = VAR_1;
            FUNC_2(VAR_11->txt_fd);
            return;
        }

        VAR_11->txt_size = (size_t)VAR_13.st_size;
    }

    if (VAR_11->txt_fd == VAR_0)
        VAR_11->txt_errno = VAR_7;
}
