
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
typedef int dbuf ;
struct TYPE_3__ {scalar_t__ key_len; int key_seq; int typen; } ;
typedef TYPE_1__ Key_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int const*,scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (int *,int const*,scalar_t__) ;

int
FUNC_2(
 void const * VAR_2,
 int VAR_3,
 int VAR_4,
 Key_T const * VAR_5
 )
{
 u_int VAR_6 = 0;
 u_char const * VAR_7 = VAR_2;
 u_char VAR_8[VAR_0];

 if (VAR_4 <= 0 || (size_t)VAR_4 > sizeof(VAR_8))
  return VAR_1;

 VAR_6 = FUNC_0(VAR_8, VAR_5->typen,
     VAR_7, (u_int)VAR_3,
     VAR_5->key_seq, (u_int)VAR_5->key_len);

 VAR_7 += VAR_3 + 4;
 if (VAR_6 > (u_int)VAR_4)
  VAR_6 = (u_int)VAR_4;





 return ((u_int)VAR_4 == VAR_6) && !FUNC_1(VAR_8, VAR_7, VAR_6);
}
