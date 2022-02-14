
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ush ;
typedef int ulg ;
struct TYPE_5__ {int last_eob_len; int bits_sent; size_t pending; int * pending_buf; } ;
typedef TYPE_1__ deflate_state ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(
 deflate_state *VAR_0,
 char *VAR_1,
 unsigned VAR_2,
 int VAR_3
)
{
    FUNC_0(VAR_0);
    VAR_0->last_eob_len = 8;

    if (VAR_3) {
        FUNC_2(VAR_0, (ush)VAR_2);
        FUNC_2(VAR_0, (ush)~VAR_2);



    }




    FUNC_1(&VAR_0->pending_buf[VAR_0->pending], VAR_1, VAR_2);
    VAR_0->pending += VAR_2;
}
