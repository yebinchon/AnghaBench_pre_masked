
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int sigature ;
typedef TYPE_1__* gss_buffer_t ;
struct TYPE_3__ {int length; int value; } ;
typedef int RC4_KEY ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (int *,int,unsigned char*,unsigned char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int,unsigned char*) ;

__attribute__((used)) static OM_uint32
FUNC_5(gss_buffer_t VAR_1,
  RC4_KEY *VAR_2,
  uint32_t VAR_3,
  unsigned char VAR_4[16])
{
    unsigned char VAR_5[12];
    uint32_t VAR_6;

    FUNC_2();
    VAR_6 = FUNC_3(VAR_1->value, VAR_1->length, 0);

    FUNC_4(0, &VAR_5[0]);
    FUNC_4(VAR_6, &VAR_5[4]);
    FUNC_4(VAR_3, &VAR_5[8]);

    FUNC_4(1, VAR_4);
    FUNC_1(VAR_2, sizeof(VAR_5), VAR_5, VAR_4 + 4);

    if (FUNC_0(VAR_4 + 4, 4) != 1)
 return VAR_0;

    return 0;
}
