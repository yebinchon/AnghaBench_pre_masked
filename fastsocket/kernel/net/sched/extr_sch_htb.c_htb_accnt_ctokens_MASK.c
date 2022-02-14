
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htb_class {long ctokens; long cbuffer; long mbuffer; int ceil; } ;


 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct htb_class *VAR_0, int VAR_1, long VAR_2)
{
 long VAR_3 = VAR_2 + VAR_0->ctokens;

 if (VAR_3 > VAR_0->cbuffer)
  VAR_3 = VAR_0->cbuffer;
 VAR_3 -= (long) FUNC_0(VAR_0->ceil, VAR_1);
 if (VAR_3 <= -VAR_0->mbuffer)
  VAR_3 = 1 - VAR_0->mbuffer;

 VAR_0->ctokens = VAR_3;
}
