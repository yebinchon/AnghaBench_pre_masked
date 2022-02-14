
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;
struct g_part_table {int gpt_sectors; int gpt_heads; } ;



__attribute__((used)) static void
FUNC_0(struct g_part_table *VAR_0, uint32_t VAR_1, u_char *VAR_2, u_char *VAR_3,
    u_char *VAR_4)
{
 uint32_t VAR_5, VAR_6, VAR_7;

 VAR_7 = VAR_1 % VAR_0->gpt_sectors + 1;
 VAR_1 /= VAR_0->gpt_sectors;
 VAR_6 = VAR_1 % VAR_0->gpt_heads;
 VAR_1 /= VAR_0->gpt_heads;
 VAR_5 = VAR_1;
 if (VAR_5 > 1023)
  VAR_7 = VAR_6 = VAR_5 = ~0;

 *VAR_2 = VAR_5 & 0xff;
 *VAR_3 = VAR_6 & 0xff;
 *VAR_4 = (VAR_7 & 0x3f) | ((VAR_5 >> 2) & 0xc0);
}
