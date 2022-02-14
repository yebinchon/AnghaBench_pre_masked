
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u128 ;
struct TYPE_2__ {int* r; int* h; } ;
typedef TYPE_1__ poly1305_internal ;


 int FUNC_0 (int,int) ;
 size_t VAR_0 ;
 int FUNC_1 (unsigned char const*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, const unsigned char *VAR_2, size_t VAR_3, u32 VAR_4)
{
    poly1305_internal *VAR_5 = (poly1305_internal *)VAR_1;
    u64 VAR_6, VAR_7;
    u64 VAR_8;
    u64 VAR_9, VAR_10, VAR_11, VAR_12;
    u128 VAR_13, VAR_14;

    VAR_6 = VAR_5->r[0];
    VAR_7 = VAR_5->r[1];

    VAR_8 = VAR_7 + (VAR_7 >> 2);

    VAR_9 = VAR_5->h[0];
    VAR_10 = VAR_5->h[1];
    VAR_11 = VAR_5->h[2];

    while (VAR_3 >= VAR_0) {

        VAR_9 = (u64)(VAR_13 = (u128)VAR_9 + FUNC_1(VAR_2 + 0));
        VAR_10 = (u64)(VAR_14 = (u128)VAR_10 + (VAR_13 >> 64) + FUNC_1(VAR_2 + 8));




        VAR_11 += (u64)(VAR_14 >> 64) + VAR_4;


        VAR_13 = ((u128)VAR_9 * VAR_6) +
             ((u128)VAR_10 * VAR_8);
        VAR_14 = ((u128)VAR_9 * VAR_7) +
             ((u128)VAR_10 * VAR_6) +
             (VAR_11 * VAR_8);
        VAR_11 = (VAR_11 * VAR_6);



        VAR_9 = (u64)VAR_13;
        VAR_10 = (u64)(VAR_14 += VAR_13 >> 64);
        VAR_11 += (u64)(VAR_14 >> 64);

        VAR_12 = (VAR_11 >> 2) + (VAR_11 & ~3UL);
        VAR_11 &= 3;
        VAR_9 += VAR_12;
        VAR_10 += (VAR_12 = FUNC_0(VAR_9,VAR_12));
        VAR_11 += FUNC_0(VAR_10,VAR_12);
        VAR_2 += VAR_0;
        VAR_3 -= VAR_0;
    }

    VAR_5->h[0] = VAR_9;
    VAR_5->h[1] = VAR_10;
    VAR_5->h[2] = VAR_11;
}
