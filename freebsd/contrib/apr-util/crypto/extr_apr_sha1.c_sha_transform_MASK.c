
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int apr_uint32_t ;
struct TYPE_3__ {int* data; int* digest; } ;
typedef TYPE_1__ apr_sha1_ctx_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(apr_sha1_ctx_t *VAR_0)
{
    int VAR_1;
    apr_uint32_t VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8[80];

    for (VAR_1 = 0; VAR_1 < 16; ++VAR_1) {
 VAR_8[VAR_1] = VAR_0->data[VAR_1];
    }
    for (VAR_1 = 16; VAR_1 < 80; ++VAR_1) {
 VAR_8[VAR_1] = VAR_8[VAR_1-3] ^ VAR_8[VAR_1-8] ^ VAR_8[VAR_1-14] ^ VAR_8[VAR_1-16];



    }
    VAR_3 = VAR_0->digest[0];
    VAR_4 = VAR_0->digest[1];
    VAR_5 = VAR_0->digest[2];
    VAR_6 = VAR_0->digest[3];
    VAR_7 = VAR_0->digest[4];
    for (VAR_1 = 0; VAR_1 < 20; ++VAR_1) {
 FUNC_0(1,VAR_1);
    }
    for (VAR_1 = 20; VAR_1 < 40; ++VAR_1) {
 FUNC_0(2,VAR_1);
    }
    for (VAR_1 = 40; VAR_1 < 60; ++VAR_1) {
 FUNC_0(3,VAR_1);
    }
    for (VAR_1 = 60; VAR_1 < 80; ++VAR_1) {
 FUNC_0(4,VAR_1);
    }

    VAR_0->digest[0] += VAR_3;
    VAR_0->digest[1] += VAR_4;
    VAR_0->digest[2] += VAR_5;
    VAR_0->digest[3] += VAR_6;
    VAR_0->digest[4] += VAR_7;
}
