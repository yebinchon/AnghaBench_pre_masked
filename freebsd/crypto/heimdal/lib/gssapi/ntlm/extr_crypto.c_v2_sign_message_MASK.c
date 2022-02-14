
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* gss_buffer_t ;
struct TYPE_3__ {unsigned char* value; int length; } ;
typedef int RC4_KEY ;
typedef int OM_uint32 ;
typedef int HMAC_CTX ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,unsigned char*,unsigned int*) ;
 int FUNC_4 (int *,unsigned char*,int,int ,int *) ;
 int FUNC_5 (int *,unsigned char*,int) ;
 int FUNC_6 (int *,int,unsigned char*,unsigned char*) ;
 int FUNC_7 (int,unsigned char*) ;
 int FUNC_8 (unsigned char*,unsigned char*,int) ;
 int FUNC_9 (unsigned char*,int ,int) ;

__attribute__((used)) static OM_uint32
FUNC_10(gss_buffer_t VAR_2,
  unsigned char VAR_3[16],
  RC4_KEY *VAR_4,
  uint32_t VAR_5,
  unsigned char VAR_6[16])
{
    unsigned char VAR_7[16];
    unsigned int VAR_8;
    HMAC_CTX *VAR_9;

    VAR_9 = FUNC_2();
    if (VAR_9 == ((void*)0))
 return VAR_1;
    FUNC_4(VAR_9, VAR_3, 16, FUNC_0(), ((void*)0));

    FUNC_7(VAR_5, VAR_7);
    FUNC_5(VAR_9, VAR_7, 4);
    FUNC_5(VAR_9, VAR_2->value, VAR_2->length);
    FUNC_3(VAR_9, VAR_7, &VAR_8);
    FUNC_1(VAR_9);

    FUNC_7(1, &VAR_6[0]);
    if (VAR_4)
 FUNC_6(VAR_4, 8, VAR_7, &VAR_6[4]);
    else
 FUNC_8(&VAR_6[4], VAR_7, 8);

    FUNC_9(&VAR_6[12], 0, 4);

    return VAR_0;
}
