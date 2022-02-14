
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct g_part_gpt_table {int* mbr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int
FUNC_2(struct g_part_gpt_table *VAR_2, const char *VAR_3)
{
 uint8_t *VAR_4;

 VAR_4 = VAR_2->mbr + VAR_0;
 if (VAR_4[4] != 0xee || FUNC_0(VAR_4 + 8) != 1)
  return (0);

 VAR_4 += VAR_1;
 if (VAR_4[4] != 0xaf)
  return (0);

 FUNC_1("GEOM: %s: enabling Boot Camp\n", VAR_3);
 return (1);
}
