
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct mwl_hal_priv {int dummy; } ;
struct TYPE_3__ {int start; int end; } ;
typedef TYPE_1__ MWL_DIAG_REGRANGE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct mwl_hal_priv*,int) ;
 int FUNC_4 (struct mwl_hal_priv*,int ,scalar_t__,int*) ;
 int FUNC_5 (struct mwl_hal_priv*,int ,scalar_t__,int*) ;

__attribute__((used)) static u_int
FUNC_6(struct mwl_hal_priv *VAR_4, const MWL_DIAG_REGRANGE *VAR_5,
 void *VAR_6, int VAR_7)
{
 uint32_t *VAR_8 = VAR_6;
 int VAR_9;

 for (VAR_9 = 0; VAR_7 >= 2*sizeof(uint32_t); VAR_9++) {
  u_int VAR_10 = VAR_5[VAR_9].start;
  u_int VAR_11 = VAR_5[VAR_9].end;
  *VAR_8++ = (VAR_10<<16) | VAR_11;
  VAR_7 -= sizeof(uint32_t);
  do {
   if (FUNC_1(VAR_10))
    *VAR_8 = FUNC_3(VAR_4, VAR_10);
   else if (FUNC_0(VAR_10))
    FUNC_4(VAR_4, VAR_0,
        VAR_10 - VAR_2, VAR_8);
   else if (FUNC_2(VAR_10))
    FUNC_5(VAR_4, VAR_0,
        VAR_10 - VAR_3, VAR_8);
   else if (VAR_10 < 0x1000 || VAR_10 == VAR_1)
    *VAR_8 = FUNC_3(VAR_4, VAR_10);
   else
    *VAR_8 = 0xffffffff;
   VAR_8++;
   VAR_10 += sizeof(uint32_t);
   VAR_7 -= sizeof(uint32_t);
  } while (VAR_10 <= VAR_11 && VAR_7 >= sizeof(uint32_t));
 }
 return (char *) VAR_8 - (char *) VAR_6;
}
