
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void** digest; } ;
typedef TYPE_1__ wc_Sha ;
typedef int u8 ;
typedef void* u32 ;
typedef int sha ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int const*,int) ;

__attribute__((used)) static void FUNC_2(u32 *VAR_0, const u8 VAR_1[64])
{
 wc_Sha VAR_2;

 FUNC_0(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.digest[0] = VAR_0[0];
 VAR_2.digest[1] = VAR_0[1];
 VAR_2.digest[2] = VAR_0[2];
 VAR_2.digest[3] = VAR_0[3];
 VAR_2.digest[4] = VAR_0[4];
 FUNC_1(&VAR_2, VAR_1, 64);
 VAR_0[0] = VAR_2.digest[0];
 VAR_0[1] = VAR_2.digest[1];
 VAR_0[2] = VAR_2.digest[2];
 VAR_0[3] = VAR_2.digest[3];
 VAR_0[4] = VAR_2.digest[4];
}
