
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {TYPE_1__* h; } ;
typedef TYPE_2__ poly1305_internal ;
struct TYPE_3__ {int u; } ;


 int FUNC_0 (unsigned char*,int) ;

void FUNC_1(void *VAR_0, unsigned char VAR_1[16], const u32 VAR_2[4])
{
    poly1305_internal *VAR_3 = (poly1305_internal *) VAR_0;
    u64 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    u32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    u64 VAR_14;
    u32 VAR_15;




    VAR_4 = VAR_3->h[0].u & 0x000fffffffffffffULL;
    VAR_5 = VAR_3->h[1].u & 0x000fffffffffffffULL;
    VAR_6 = VAR_3->h[2].u & 0x000fffffffffffffULL;
    VAR_7 = VAR_3->h[3].u & 0x000fffffffffffffULL;




    VAR_8 = VAR_7>>32; VAR_7 &= 0xffffffffU;
    VAR_13 = VAR_8&-4;
    VAR_8 &= 3;
    VAR_13 += VAR_13>>2;

    VAR_4 += VAR_13;
    VAR_5 += VAR_4>>32; VAR_4 &= 0xffffffffU;
    VAR_6 += VAR_5>>32; VAR_5 &= 0xffffffffU;
    VAR_7 += VAR_6>>32; VAR_6 &= 0xffffffffU;


    VAR_9 = (u32)(VAR_14 = VAR_4 + 5);
    VAR_10 = (u32)(VAR_14 = VAR_5 + (VAR_14 >> 32));
    VAR_11 = (u32)(VAR_14 = VAR_6 + (VAR_14 >> 32));
    VAR_12 = (u32)(VAR_14 = VAR_7 + (VAR_14 >> 32));
    VAR_13 = VAR_8 + (u32)(VAR_14 >> 32);


    VAR_15 = 0 - (VAR_13 >> 2);
    VAR_9 &= VAR_15;
    VAR_10 &= VAR_15;
    VAR_11 &= VAR_15;
    VAR_12 &= VAR_15;
    VAR_15 = ~VAR_15;
    VAR_9 |= (VAR_4 & VAR_15);
    VAR_10 |= (VAR_5 & VAR_15);
    VAR_11 |= (VAR_6 & VAR_15);
    VAR_12 |= (VAR_7 & VAR_15);


    VAR_9 = (u32)(VAR_14 = (u64)VAR_9 + VAR_2[0]);
    VAR_10 = (u32)(VAR_14 = (u64)VAR_10 + (VAR_14 >> 32) + VAR_2[1]);
    VAR_11 = (u32)(VAR_14 = (u64)VAR_11 + (VAR_14 >> 32) + VAR_2[2]);
    VAR_12 = (u32)(VAR_14 = (u64)VAR_12 + (VAR_14 >> 32) + VAR_2[3]);

    FUNC_0(VAR_1 + 0, VAR_9);
    FUNC_0(VAR_1 + 4, VAR_10);
    FUNC_0(VAR_1 + 8, VAR_11);
    FUNC_0(VAR_1 + 12, VAR_12);
}
