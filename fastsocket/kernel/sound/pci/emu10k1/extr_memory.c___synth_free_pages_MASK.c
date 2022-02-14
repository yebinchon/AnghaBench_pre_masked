
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1 {int ** page_ptr_table; scalar_t__* page_addr_table; } ;


 int FUNC_0 (unsigned long) ;

__attribute__((used)) static void FUNC_1(struct snd_emu10k1 *VAR_0, int VAR_1,
          int VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_1; VAR_3 <= VAR_2; VAR_3++) {
  FUNC_0((unsigned long)VAR_0->page_ptr_table[VAR_3]);
  VAR_0->page_addr_table[VAR_3] = 0;
  VAR_0->page_ptr_table[VAR_3] = ((void*)0);
 }
}
