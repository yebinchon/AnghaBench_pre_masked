
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_uint32_t ;
struct TYPE_3__ {int* pool; int cursor; int rotate; } ;
typedef TYPE_1__ isc_entropypool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline void
FUNC_0(isc_entropypool_t *VAR_6, isc_uint32_t VAR_7) {
 VAR_7 ^= VAR_6->pool[(VAR_6->cursor + VAR_1) & (VAR_0 - 1)];
 VAR_7 ^= VAR_6->pool[(VAR_6->cursor + VAR_2) & (VAR_0 - 1)];
 VAR_7 ^= VAR_6->pool[(VAR_6->cursor + VAR_3) & (VAR_0 - 1)];
 VAR_7 ^= VAR_6->pool[(VAR_6->cursor + VAR_4) & (VAR_0 - 1)];
 VAR_7 ^= VAR_6->pool[(VAR_6->cursor + VAR_5) & (VAR_0 - 1)];
 if (VAR_6->rotate == 0)
  VAR_6->pool[VAR_6->cursor++] ^= VAR_7;
 else
  VAR_6->pool[VAR_6->cursor++] ^=
    ((VAR_7 << VAR_6->rotate) | (VAR_7 >> (32 - VAR_6->rotate)));
 if (VAR_6->cursor == VAR_0) {
  VAR_6->cursor = 0;
  VAR_6->rotate = (VAR_6->rotate + 7) & 31;
 }
}
