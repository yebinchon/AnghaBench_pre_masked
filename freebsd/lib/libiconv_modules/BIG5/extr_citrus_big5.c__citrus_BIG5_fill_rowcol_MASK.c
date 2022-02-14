
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int* cell; } ;
typedef TYPE_1__ _BIG5EncodingInfo ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char const*) ;

__attribute__((used)) static int
FUNC_1(void * __restrict VAR_1, const char * __restrict VAR_2,
    uint64_t VAR_3, uint64_t VAR_4)
{
 _BIG5EncodingInfo *VAR_5;
 uint64_t VAR_6;
 int VAR_7;

 if (VAR_3 > 0xFF || VAR_4 > 0xFF)
  return (VAR_0);
 VAR_5 = (_BIG5EncodingInfo *)VAR_1;
 VAR_7 = FUNC_0("row", VAR_2) ? 1 : 0;
 VAR_7 = 1 << VAR_7;
 for (VAR_6 = VAR_3; VAR_6 <= VAR_4; ++VAR_6)
  VAR_5->cell[VAR_6 & 0xFF] |= VAR_7;
 return (0);
}
