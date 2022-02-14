
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int gss_buffer_t ;
typedef int RC4_KEY ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char const*,unsigned char*,int) ;
 scalar_t__ FUNC_1 (int ,unsigned char*,int *,int ,unsigned char*) ;

__attribute__((used)) static OM_uint32
FUNC_2(gss_buffer_t VAR_2,
    unsigned char VAR_3[16],
    RC4_KEY *VAR_4,
    uint32_t VAR_5,
    const unsigned char VAR_6[16])
{
    OM_uint32 VAR_7;
    unsigned char VAR_8[16];

    VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_8);
    if (VAR_7)
 return VAR_7;

    if (FUNC_0(VAR_6, VAR_8, 16) != 0)
 return VAR_0;

    return VAR_1;
}
