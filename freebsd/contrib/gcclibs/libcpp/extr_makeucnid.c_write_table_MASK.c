
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned char* VAR_2 ;
 scalar_t__** VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int* VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (char*,char*,char*,char*,char*,char*,char*,char*,unsigned char,unsigned int) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  unsigned VAR_9;
  unsigned VAR_10 = VAR_5[0];
  bool VAR_11 = VAR_3[0][0] == 0;
  unsigned char VAR_12 = VAR_2[0];

  for (VAR_9 = 1; VAR_9 <= 65536; VAR_9++)
    if (VAR_9 == 65536
 || (VAR_5[VAR_9] != VAR_10 && ((VAR_5[VAR_9] | VAR_10) & (VAR_0 | VAR_1)))
 || VAR_11 != (VAR_3[VAR_9][0] == 0)
 || VAR_2[VAR_9] != VAR_12)
      {
 FUNC_0 ("{ %s|%s|%s|%s|%s|%s|%s, %3d, %#06x },\n",
  VAR_10 & VAR_0 ? "C99" : "  0",
  VAR_10 & VAR_4 ? "DIG" : "  0",
  VAR_10 & VAR_1 ? "CXX" : "  0",
  VAR_11 ? "CID" : "  0",
  VAR_10 & VAR_7 ? "  0" : "NFC",
  VAR_10 & VAR_8 ? "  0" : "NKC",
  VAR_10 & VAR_6 ? "CTX" : "  0",
  VAR_2[VAR_9 - 1],
  VAR_9 - 1);
 VAR_10 = VAR_5[VAR_9];
 VAR_12 = VAR_2[0];
 VAR_11 = VAR_3[VAR_9][0] == 0;
      }
}
