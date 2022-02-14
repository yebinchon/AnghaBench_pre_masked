
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sbuf*,char*,...) ;

void
FUNC_1(struct sbuf *VAR_5, const void *VAR_6, int VAR_7, const char *VAR_8,
      int VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 int VAR_13;
 const unsigned char *VAR_14;
 char VAR_15;

 if ((VAR_9 & VAR_1) != 0)
  VAR_15 = (VAR_9 & VAR_1) >> 8;
 else
  VAR_15 = ' ';

 if ((VAR_9 & VAR_0) != 0)
  VAR_13 = VAR_9 & VAR_0;
 else
  VAR_13 = 16;

 VAR_14 = VAR_6;
 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10+= VAR_13) {
  if (VAR_8 != ((void*)0))
   FUNC_0(VAR_5, "%s", VAR_8);

  if ((VAR_9 & VAR_3) == 0)
   FUNC_0(VAR_5, "%04x  ", VAR_10);

  if ((VAR_9 & VAR_4) == 0) {
   for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++) {
    VAR_12 = VAR_10 + VAR_11;
    if (VAR_12 < VAR_7)
     FUNC_0(VAR_5, "%c%02x", VAR_15, VAR_14[VAR_12]);
    else
     FUNC_0(VAR_5, "   ");
   }
  }

  if ((VAR_9 & VAR_2) == 0) {
   FUNC_0(VAR_5, "  |");
   for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++) {
    VAR_12 = VAR_10 + VAR_11;
    if (VAR_12 >= VAR_7)
     FUNC_0(VAR_5, " ");
    else if (VAR_14[VAR_12] >= ' ' && VAR_14[VAR_12] <= '~')
     FUNC_0(VAR_5, "%c", VAR_14[VAR_12]);
    else
     FUNC_0(VAR_5, ".");
   }
   FUNC_0(VAR_5, "|");
  }
  FUNC_0(VAR_5, "\n");
 }
}
