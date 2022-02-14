
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_msg {int * hdr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct tipc_msg*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct tipc_msg *VAR_0, u32 VAR_1)
{
 VAR_0->hdr[0] = FUNC_0((FUNC_1(VAR_0, 0) & ~0x1ffff) | VAR_1);
}
