
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct michael_mic_ctx {int l; int r; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct michael_mic_ctx *VAR_0, u32 VAR_1)
{
 VAR_0->l ^= VAR_1;
 VAR_0->r ^= FUNC_0(VAR_0->l, 17);
 VAR_0->l += VAR_0->r;
 VAR_0->r ^= ((VAR_0->l & 0xff00ff00) >> 8) |
     ((VAR_0->l & 0x00ff00ff) << 8);
 VAR_0->l += VAR_0->r;
 VAR_0->r ^= FUNC_0(VAR_0->l, 3);
 VAR_0->l += VAR_0->r;
 VAR_0->r ^= FUNC_1(VAR_0->l, 2);
 VAR_0->l += VAR_0->r;
}
