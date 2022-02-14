
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct TYPE_2__ {int dccps_pcrlen; int dccps_pcslen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*,int ,int,int*,int) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_4, int VAR_5, bool VAR_6)
{
 u8 *VAR_7, VAR_8;
 int VAR_9, VAR_10;

 if (VAR_5 < 0 || VAR_5 > 15)
  return -VAR_1;






 if (VAR_5 == 0)
  return 0;
 VAR_8 = 16 - VAR_5;

 VAR_7 = FUNC_3(VAR_8, VAR_3);
 if (VAR_7 == ((void*)0))
  return -VAR_2;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
  VAR_7[VAR_9] = VAR_5++;

 VAR_10 = FUNC_0(VAR_4, VAR_0, VAR_6, VAR_7, VAR_8);

 if (VAR_10 == 0) {
  if (VAR_6)
   FUNC_1(VAR_4)->dccps_pcrlen = VAR_5;
  else
   FUNC_1(VAR_4)->dccps_pcslen = VAR_5;
 }
 FUNC_2(VAR_7);
 return VAR_10;
}
