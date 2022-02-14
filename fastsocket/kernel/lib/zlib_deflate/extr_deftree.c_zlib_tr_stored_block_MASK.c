
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ulg ;
struct TYPE_5__ {int compressed_len; } ;
typedef TYPE_1__ deflate_state ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,unsigned int,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;

void FUNC_2(
 deflate_state *VAR_1,
 char *VAR_2,
 ulg VAR_3,
 int VAR_4
)
{
    FUNC_1(VAR_1, (VAR_0<<1)+VAR_4, 3);
    VAR_1->compressed_len = (VAR_1->compressed_len + 3 + 7) & (ulg)~7L;
    VAR_1->compressed_len += (VAR_3 + 4) << 3;

    FUNC_0(VAR_1, VAR_2, (unsigned)VAR_3, 1);
}
