
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t wpend_tot; unsigned char const* wpend_buf; int wpend_type; int numwpipes; size_t wpend_ret; int * wbuf; } ;
struct TYPE_7__ {int mode; TYPE_1__ rlayer; int rwstate; int * wbio; } ;
typedef int SSL3_BUFFER ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (int *,size_t) ;
 int * FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_9 () ;

int FUNC_10(SSL *VAR_7, int VAR_8, const unsigned char *VAR_9, size_t VAR_10,
                       size_t *VAR_11)
{
    int VAR_12;
    SSL3_BUFFER *VAR_13 = VAR_7->rlayer.wbuf;
    size_t VAR_14 = 0;
    size_t VAR_15 = 0;

    if ((VAR_7->rlayer.wpend_tot > VAR_10)
        || (!(VAR_7->mode & VAR_2)
            && (VAR_7->rlayer.wpend_buf != VAR_9))
        || (VAR_7->rlayer.wpend_type != VAR_8)) {
        FUNC_8(VAR_7, VAR_0, VAR_1,
                 VAR_4);
        return -1;
    }

    for (;;) {

        if (FUNC_3(&VAR_13[VAR_14]) == 0
            && VAR_14 < VAR_7->rlayer.numwpipes - 1) {
            VAR_14++;
            continue;
        }
        FUNC_9();
        if (VAR_7->wbio != ((void*)0)) {
            VAR_7->rwstate = VAR_6;

            VAR_12 = FUNC_0(VAR_7->wbio, (char *)
                          &(FUNC_2(&VAR_13[VAR_14])
                            [FUNC_4(&VAR_13[VAR_14])]),
                          (unsigned int)FUNC_3(&VAR_13[VAR_14]));
            if (VAR_12 >= 0)
                VAR_15 = VAR_12;
        } else {
            FUNC_8(VAR_7, VAR_0, VAR_1,
                     VAR_5);
            VAR_12 = -1;
        }
        if (VAR_12 > 0 && VAR_15 == FUNC_3(&VAR_13[VAR_14])) {
            FUNC_5(&VAR_13[VAR_14], 0);
            FUNC_1(&VAR_13[VAR_14], VAR_15);
            if (VAR_14 + 1 < VAR_7->rlayer.numwpipes)
                continue;
            VAR_7->rwstate = VAR_3;
            *VAR_11 = VAR_7->rlayer.wpend_ret;
            return 1;
        } else if (VAR_12 <= 0) {
            if (FUNC_7(VAR_7)) {




                FUNC_5(&VAR_13[VAR_14], 0);
            }
            return VAR_12;
        }
        FUNC_1(&VAR_13[VAR_14], VAR_15);
        FUNC_6(&VAR_13[VAR_14], VAR_15);
    }
}
