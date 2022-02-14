
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct canon_node {int val; unsigned int next_start; unsigned int next_end; unsigned int next_offset; } ;


 unsigned short* VAR_0 ;
 struct canon_node* VAR_1 ;
 int FUNC_0 (int const*,unsigned int) ;

__attribute__((used)) static uint32_t
FUNC_1(const uint32_t *VAR_2, unsigned VAR_3)
{
    unsigned short VAR_4 = 0;
    uint32_t VAR_5;
    unsigned VAR_6 = 0;

    VAR_5 = FUNC_0(VAR_2, VAR_3);
    if (VAR_5)
 return VAR_5;

    do {
 const struct canon_node *VAR_7 = &VAR_1[VAR_4];
 unsigned VAR_8;

 if (VAR_6 % 5 == 0) {
     VAR_5 = *VAR_2++;
     if (VAR_3-- == 0)
  return VAR_7->val;
 }

 VAR_8 = VAR_5 >> 16;
 if (VAR_8 < VAR_7->next_start || VAR_8 >= VAR_7->next_end)
     VAR_4 = 0;
 else
     VAR_4 =
  VAR_0[VAR_7->next_offset + VAR_8 - VAR_7->next_start];
 if (VAR_4 != 0) {
     VAR_5 = (VAR_5 << 4) & 0xFFFFF;
     ++VAR_6;
 }
    } while (VAR_4 != 0);
    return 0;
}
