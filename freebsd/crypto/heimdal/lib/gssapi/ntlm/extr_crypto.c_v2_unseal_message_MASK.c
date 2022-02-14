
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* gss_buffer_t ;
struct TYPE_6__ {int length; int * value; } ;
typedef int RC4_KEY ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,int *,int *) ;
 int FUNC_1 (scalar_t__*,TYPE_1__*) ;
 int * FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,unsigned char*,int *,int ,unsigned char const*) ;

__attribute__((used)) static OM_uint32
FUNC_4(gss_buffer_t VAR_1,
    unsigned char VAR_2[16],
    uint32_t VAR_3,
    RC4_KEY *VAR_4,
    gss_buffer_t VAR_5)
{
    OM_uint32 VAR_6;

    if (VAR_1->length < 16)
 return VAR_0;

    VAR_5->length = VAR_1->length - 16;
    VAR_5->value = FUNC_2(VAR_5->length);
    if (VAR_5->value == ((void*)0))
 return VAR_0;

    FUNC_0(VAR_4, VAR_5->length, VAR_1->value, VAR_5->value);

    VAR_6 = FUNC_3(VAR_5, VAR_2, VAR_4, VAR_3,
       ((const unsigned char *)VAR_1->value) + VAR_5->length);
    if (VAR_6) {
 OM_uint32 VAR_7;
 FUNC_1(&VAR_7, VAR_5);
    }
    return VAR_6;
}
