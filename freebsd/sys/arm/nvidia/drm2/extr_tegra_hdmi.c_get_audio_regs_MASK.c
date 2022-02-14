
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_reg {int audio_clk; int aval_reg; int nval_reg; int acr_reg; } ;
typedef int bus_size_t ;


 int VAR_0 ;
 struct audio_reg* VAR_1 ;
 int FUNC_0 (struct audio_reg*) ;

__attribute__((used)) static int
FUNC_1(int VAR_2, bus_size_t *VAR_3, bus_size_t *VAR_4,
    bus_size_t *VAR_5)
{
 int VAR_6;
 const struct audio_reg *VAR_7;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1) ; VAR_6++) {
  VAR_7 = VAR_1 + VAR_6;
  if (VAR_7->audio_clk == VAR_2) {
   if (VAR_3 != ((void*)0))
    *VAR_3 = VAR_7->acr_reg;
   if (VAR_4 != ((void*)0))
    *VAR_4 = VAR_7->nval_reg;
   if (VAR_5 != ((void*)0))
    *VAR_5 = VAR_7->aval_reg;
   return (0);
  }
 }
 return (VAR_0);
}
