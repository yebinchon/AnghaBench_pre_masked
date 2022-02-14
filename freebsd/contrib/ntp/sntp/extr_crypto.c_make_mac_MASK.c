
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct TYPE_3__ {int key_len; int key_seq; int typen; } ;
typedef TYPE_1__ Key_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,void const*,scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (void*,int *,scalar_t__) ;

int
FUNC_2(
 const void * VAR_1,
 int VAR_2,
 int VAR_3,
 Key_T const * VAR_4,
 void * VAR_5
 )
{
 u_int VAR_6;
 u_char VAR_7[VAR_0];

 if (VAR_4->key_len > 64 || VAR_3 <= 0)
  return 0;
 if (VAR_2 % 4 != 0)
  return 0;

 VAR_6 = FUNC_0(VAR_7, VAR_4->typen,
     VAR_1, (u_int)VAR_2,
     VAR_4->key_seq, (u_int)VAR_4->key_len);


 if (VAR_6) {
  if (VAR_6 > (u_int)VAR_3)
   VAR_6 = (u_int)VAR_3;
  FUNC_1(VAR_5, VAR_7, VAR_6);
 }
 return (int)VAR_6;
}
