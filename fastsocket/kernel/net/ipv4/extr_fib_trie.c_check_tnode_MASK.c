
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnode {int pos; int bits; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(const struct tnode *VAR_0)
{
 FUNC_0(VAR_0 && VAR_0->pos+VAR_0->bits > 32);
}
