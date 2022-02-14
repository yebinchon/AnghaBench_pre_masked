
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int16_t ;
typedef int u_char ;
typedef TYPE_1__* sc_p ;
struct TYPE_3__ {int* abuf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __inline void
FUNC_1(const sc_p VAR_3, u_int16_t *VAR_4, u_int32_t VAR_5, int *VAR_6, u_char VAR_7)
{
 *VAR_4 = FUNC_0(*VAR_4, VAR_7);
 if ((VAR_7 < 32 && ((1 << VAR_7) & VAR_5))
     || (VAR_7 == VAR_0)
     || (VAR_7 == VAR_1)) {
  VAR_3->abuf[(*VAR_6)++] = VAR_0;
  VAR_7 ^= VAR_2;
 }
 VAR_3->abuf[(*VAR_6)++] = VAR_7;
}
