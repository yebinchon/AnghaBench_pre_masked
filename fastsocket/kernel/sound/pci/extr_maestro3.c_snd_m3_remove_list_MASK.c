
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_m3 {int dummy; } ;
struct m3_list {int curlen; scalar_t__ mem_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_m3*,int ,scalar_t__) ;
 int FUNC_1 (struct snd_m3*,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_m3 *VAR_1, struct m3_list *VAR_2, int VAR_3)
{
 u16 VAR_4;
 int VAR_5 = VAR_2->curlen - 1;

 if (VAR_3 != VAR_5) {
  VAR_4 = FUNC_0(VAR_1, VAR_0,
           VAR_2->mem_addr + VAR_5);
  FUNC_1(VAR_1, VAR_0,
      VAR_2->mem_addr + VAR_3,
      VAR_4);
 }

 FUNC_1(VAR_1, VAR_0,
     VAR_2->mem_addr + VAR_5,
     0);

 VAR_2->curlen--;
}
