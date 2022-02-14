
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int count; } ;
typedef TYPE_1__ MD4_CTX ;


 int FUNC_0 (TYPE_1__*,int *,int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(MD4_CTX *VAR_2)
{
 u8 VAR_3[8];
 size_t VAR_4;


 FUNC_1(VAR_3, VAR_2->count);


 VAR_4 = VAR_0 -
     ((VAR_2->count >> 3) & (VAR_0 - 1));
 if (VAR_4 < 1 + 8)
  VAR_4 += VAR_0;
 FUNC_0(VAR_2, VAR_1, VAR_4 - 8);
 FUNC_0(VAR_2, VAR_3, 8);
}
