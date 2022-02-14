
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u_int ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {scalar_t__ start; scalar_t__ end; } ;
typedef TYPE_1__ HAL_REGRANGE ;


 int FUNC_0 (struct ath_hal*,scalar_t__) ;

__attribute__((used)) static u_int
FUNC_1(struct ath_hal *VAR_0, const HAL_REGRANGE *VAR_1,
 void *VAR_2, int VAR_3)
{
 uint32_t *VAR_4 = VAR_2;
 int VAR_5;

 for (VAR_5 = 0; VAR_3 >= 2*sizeof(uint32_t); VAR_5++) {
  uint32_t VAR_6 = VAR_1[VAR_5].start;
  uint32_t VAR_7 = VAR_1[VAR_5].end;
  *VAR_4++ = VAR_6;
  *VAR_4++ = VAR_7;
  VAR_3 -= 2*sizeof(uint32_t);
  do {
   *VAR_4++ = FUNC_0(VAR_0, VAR_6);
   VAR_6 += sizeof(uint32_t);
   VAR_3 -= sizeof(uint32_t);
  } while (VAR_6 <= VAR_7 && VAR_3 >= sizeof(uint32_t));
 }
 return (char *) VAR_4 - (char *) VAR_2;
}
