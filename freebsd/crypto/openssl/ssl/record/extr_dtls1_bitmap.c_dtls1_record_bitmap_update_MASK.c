
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int map; int max_seq_num; } ;
struct TYPE_5__ {int rlayer; } ;
typedef TYPE_1__ SSL ;
typedef TYPE_2__ DTLS1_BITMAP ;


 unsigned char* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned char const*,int ) ;
 int FUNC_2 (unsigned char const*,int ) ;

void FUNC_3(SSL *VAR_1, DTLS1_BITMAP *VAR_2)
{
    int VAR_3;
    unsigned int VAR_4;
    const unsigned char *VAR_5 = FUNC_0(&VAR_1->rlayer);

    VAR_3 = FUNC_2(VAR_5, VAR_2->max_seq_num);
    if (VAR_3 > 0) {
        VAR_4 = VAR_3;
        if (VAR_4 < sizeof(VAR_2->map) * 8)
            VAR_2->map <<= VAR_4, VAR_2->map |= 1UL;
        else
            VAR_2->map = 1UL;
        FUNC_1(VAR_2->max_seq_num, VAR_5, VAR_0);
    } else {
        VAR_4 = -VAR_3;
        if (VAR_4 < sizeof(VAR_2->map) * 8)
            VAR_2->map |= 1UL << VAR_4;
    }
}
