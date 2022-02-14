
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;

void
FUNC_1(const void *VAR_5, int VAR_6, const char *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 int VAR_12;
 const unsigned char *VAR_13;
 char VAR_14;

 if ((VAR_8 & VAR_1) != 0)
  VAR_14 = (VAR_8 & VAR_1) >> 8;
 else
  VAR_14 = ' ';

 if ((VAR_8 & VAR_0) != 0)
  VAR_12 = VAR_8 & VAR_0;
 else
  VAR_12 = 16;

 VAR_13 = VAR_5;
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9+= VAR_12) {
  if (VAR_7 != ((void*)0))
   FUNC_0("%s", VAR_7);

  if ((VAR_8 & VAR_3) == 0)
   FUNC_0("%04x  ", VAR_9);

  if ((VAR_8 & VAR_4) == 0) {
   for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
    VAR_11 = VAR_9 + VAR_10;
    if (VAR_11 < VAR_6)
     FUNC_0("%c%02x", VAR_14, VAR_13[VAR_11]);
    else
     FUNC_0("   ");
   }
  }

  if ((VAR_8 & VAR_2) == 0) {
   FUNC_0("  |");
   for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
    VAR_11 = VAR_9 + VAR_10;
    if (VAR_11 >= VAR_6)
     FUNC_0(" ");
    else if (VAR_13[VAR_11] >= ' ' && VAR_13[VAR_11] <= '~')
     FUNC_0("%c", VAR_13[VAR_11]);
    else
     FUNC_0(".");
   }
   FUNC_0("|");
  }
  FUNC_0("\n");
 }
}
