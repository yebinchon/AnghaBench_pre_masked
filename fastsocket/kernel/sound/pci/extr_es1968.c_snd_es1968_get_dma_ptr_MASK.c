
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esschan {scalar_t__* base; int * apu; } ;
struct es1968 {int dummy; } ;


 unsigned int FUNC_0 (struct es1968*,int ,int) ;

__attribute__((used)) static inline unsigned int
FUNC_1(struct es1968 *VAR_0, struct esschan *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1->apu[0], 5);

 VAR_2 -= VAR_1->base[0];

 return (VAR_2 & 0xFFFE);
}
