
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdig ;



__attribute__((used)) static void
FUNC_0(unsigned char *VAR_0, int VAR_1)
{
 static const char VAR_2[] = {
  '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
  'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
  'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
  'U', 'V', 'W', 'X', 'Y', 'Z'
 };

 VAR_1 %= sizeof(VAR_2) * sizeof(VAR_2) * sizeof(VAR_2);
 VAR_0[0] = VAR_2[(VAR_1 / (sizeof(VAR_2) * sizeof(VAR_2)))];
 VAR_1 %= sizeof(VAR_2) * sizeof(VAR_2);
 VAR_0[1] = VAR_2[ (VAR_1 / sizeof(VAR_2))];
 VAR_1 %= sizeof(VAR_2);
 VAR_0[2] = VAR_2[VAR_1];
}
