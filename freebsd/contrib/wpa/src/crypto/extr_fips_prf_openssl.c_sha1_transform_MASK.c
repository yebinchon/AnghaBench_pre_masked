
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
typedef int context ;
struct TYPE_4__ {void* h4; void* h3; void* h2; void* h1; void* h0; void** h; } ;
typedef TYPE_1__ SHA_CTX ;


 int FUNC_0 (TYPE_1__*,int const*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_2(u32 *VAR_0, const u8 VAR_1[64])
{
 SHA_CTX VAR_2;
 FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.h0 = VAR_0[0];
 VAR_2.h1 = VAR_0[1];
 VAR_2.h2 = VAR_0[2];
 VAR_2.h3 = VAR_0[3];
 VAR_2.h4 = VAR_0[4];
 FUNC_0(&VAR_2, VAR_1);
 VAR_0[0] = VAR_2.h0;
 VAR_0[1] = VAR_2.h1;
 VAR_0[2] = VAR_2.h2;
 VAR_0[3] = VAR_2.h3;
 VAR_0[4] = VAR_2.h4;

}
