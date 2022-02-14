
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_4__ {int count; } ;
typedef TYPE_1__ RMD160_CTX ;


 int * VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int VAR_1 ;

void
FUNC_2(RMD160_CTX *VAR_2)
{
 u_int8_t VAR_3[8];
 size_t VAR_4;

 FUNC_0(VAR_3, VAR_2->count);





 VAR_4 = VAR_1 - ((VAR_2->count / 8) % VAR_1);
 if (VAR_4 < 1 + 8)
  VAR_4 += VAR_1;
 FUNC_1(VAR_2, VAR_0, VAR_4 - 8);
 FUNC_1(VAR_2, VAR_3, 8);
}
