
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct sym_hist {int* addr; scalar_t__ sum; } ;
struct annotation {int dummy; } ;


 struct sym_hist* FUNC_0 (struct annotation*,int) ;
 struct annotation* FUNC_1 (struct symbol*) ;
 int FUNC_2 (struct symbol*) ;

void FUNC_3(struct symbol *VAR_0, int VAR_1)
{
 struct annotation *VAR_2 = FUNC_1(VAR_0);
 struct sym_hist *VAR_3 = FUNC_0(VAR_2, VAR_1);
 int VAR_4 = FUNC_2(VAR_0), VAR_5;

 VAR_3->sum = 0;
 for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
  VAR_3->addr[VAR_5] = VAR_3->addr[VAR_5] * 7 / 8;
  VAR_3->sum += VAR_3->addr[VAR_5];
 }
}
