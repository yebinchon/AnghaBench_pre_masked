
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ulg ;
typedef scalar_t__ uInt ;
struct TYPE_6__ {int pending_buf_size; int lookahead; scalar_t__ strstart; scalar_t__ w_size; long block_start; } ;
typedef TYPE_1__ deflate_state ;
typedef int block_state ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static block_state FUNC_4(
 deflate_state *VAR_5,
 int VAR_6
)
{



    ulg VAR_7 = 0xffff;
    ulg VAR_8;

    if (VAR_7 > VAR_5->pending_buf_size - 5) {
        VAR_7 = VAR_5->pending_buf_size - 5;
    }


    for (;;) {

        if (VAR_5->lookahead <= 1) {

            FUNC_0(VAR_5->strstart < VAR_5->w_size+FUNC_2(VAR_5) ||
     VAR_5->block_start >= (long)VAR_5->w_size, "slide too late");

            FUNC_3(VAR_5);
            if (VAR_5->lookahead == 0 && VAR_6 == VAR_1) return VAR_4;

            if (VAR_5->lookahead == 0) break;
        }
 FUNC_0(VAR_5->block_start >= 0L, "block gone");

 VAR_5->strstart += VAR_5->lookahead;
 VAR_5->lookahead = 0;


  VAR_8 = VAR_5->block_start + VAR_7;
        if (VAR_5->strstart == 0 || (ulg)VAR_5->strstart >= VAR_8) {

     VAR_5->lookahead = (uInt)(VAR_5->strstart - VAR_8);
     VAR_5->strstart = (uInt)VAR_8;
            FUNC_1(VAR_5, 0);
 }



        if (VAR_5->strstart - (uInt)VAR_5->block_start >= FUNC_2(VAR_5)) {
            FUNC_1(VAR_5, 0);
 }
    }
    FUNC_1(VAR_5, VAR_6 == VAR_0);
    return VAR_6 == VAR_0 ? VAR_3 : VAR_2;
}
