
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct op_struct {int dummy; } ;
struct TYPE_4__ {unsigned long long sort_value; int no_nibbles; int min_cpu; int mode_bits; int format; int mnemonic; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_3, char *VAR_4, char *VAR_5,
       int VAR_6, int VAR_7)
{
  char *VAR_8;
  unsigned long long VAR_9;
  int VAR_10;
  int VAR_11, VAR_12;

  while (VAR_1 >= VAR_0)
    {
      VAR_0 = VAR_0 * 2;
      VAR_2 = FUNC_0 (VAR_2, VAR_0 * sizeof (struct op_struct));
    }

  VAR_9 = 0;
  VAR_8 = VAR_3;
  for (VAR_11 = 0; VAR_11 < 16; VAR_11++)
    {
      if (*VAR_8 >= '0' && *VAR_8 <= '9')
 VAR_9 = (VAR_9 << 4) + (*VAR_8 - '0');
      else if (*VAR_8 >= 'a' && *VAR_8 <= 'f')
 VAR_9 = (VAR_9 << 4) + (*VAR_8 - 'a' + 10);
      else if (*VAR_8 >= 'A' && *VAR_8 <= 'F')
 VAR_9 = (VAR_9 << 4) + (*VAR_8 - 'A' + 10);
      else if (*VAR_8 == '?')
 VAR_9 <<= 4;
      else
 break;
      VAR_8 ++;
    }
  VAR_9 <<= 4*(16 - VAR_11);
  VAR_9 += (VAR_6 << 8) + VAR_7;
  VAR_10 = VAR_11;
  for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
    if (VAR_9 > VAR_2[VAR_11].sort_value)
      break;
  for (VAR_12 = VAR_1; VAR_12 > VAR_11; VAR_12--)
    VAR_2[VAR_12] = VAR_2[VAR_12-1];
  FUNC_1(VAR_2[VAR_11].opcode, VAR_3);
  FUNC_1(VAR_2[VAR_11].mnemonic, VAR_4);
  FUNC_1(VAR_2[VAR_11].format, VAR_5);
  VAR_2[VAR_11].sort_value = VAR_9;
  VAR_2[VAR_11].no_nibbles = VAR_10;
  VAR_2[VAR_11].min_cpu = VAR_6;
  VAR_2[VAR_11].mode_bits = VAR_7;
  VAR_1++;
}
