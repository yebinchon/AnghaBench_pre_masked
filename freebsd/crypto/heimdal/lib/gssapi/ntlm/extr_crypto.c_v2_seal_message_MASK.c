
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* gss_buffer_t ;
struct TYPE_5__ {int length; unsigned char* value; } ;
typedef int RC4_KEY ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int,unsigned char*,unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__* const,unsigned char*,int *,int ,unsigned char*) ;

__attribute__((used)) static OM_uint32
FUNC_4(const gss_buffer_t VAR_2,
  unsigned char VAR_3[16],
  uint32_t VAR_4,
  RC4_KEY *VAR_5,
  gss_buffer_t VAR_6)
{
    unsigned char *VAR_7;
    OM_uint32 VAR_8;

    if (VAR_2->length + 16 < VAR_2->length)
 return VAR_0;

    VAR_7 = FUNC_2(VAR_2->length + 16);
    if (VAR_7 == ((void*)0))
 return VAR_1;

    FUNC_0(VAR_5, VAR_2->length, VAR_2->value, VAR_7);

    VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_5, VAR_4, &VAR_7[VAR_2->length]);
    if (VAR_8) {
 FUNC_1(VAR_7);
 return VAR_8;
    }

    VAR_6->value = VAR_7;
    VAR_6->length = VAR_2->length + 16;

    return 0;
}
