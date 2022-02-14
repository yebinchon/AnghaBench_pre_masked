
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sbuf {int dummy; } ;


 int FUNC_0 (struct sbuf*,char*,...) ;

__attribute__((used)) static void
FUNC_1(struct sbuf *VAR_0, u8 *VAR_1, int VAR_2, int VAR_3, bool VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 char VAR_9;

 if (VAR_2 < 1 || VAR_1 == ((void*)0)) return;

 int VAR_10 = 16;
 int VAR_11 = VAR_2 / VAR_10;
 int VAR_12 = VAR_2 % VAR_10;
 if (VAR_12 > 0)
  VAR_11++;

 for (VAR_5 = 0; VAR_5 < VAR_11; VAR_5++) {
  VAR_8 = (VAR_12 > 0 && VAR_5 == VAR_11 - 1)
      ? VAR_12 : VAR_10;

  FUNC_0(VAR_0, "%4d | ", VAR_3 + VAR_5 * VAR_10);

  for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++)
   FUNC_0(VAR_0, "%02x ", VAR_1[VAR_5 * VAR_10 + VAR_6]);

  if (VAR_8 < VAR_10) {
   for (VAR_7 = 0; VAR_7 < (VAR_10 - VAR_8); VAR_7++)
    FUNC_0(VAR_0, "   ");
  }

  if (!VAR_4) {
   FUNC_0(VAR_0, "\n");
   continue;
  }

  for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
   VAR_9 = (char)VAR_1[VAR_5 * VAR_10 + VAR_6];
   if (VAR_9 < 32 || VAR_9 > 126)
    FUNC_0(VAR_0, ".");
   else
    FUNC_0(VAR_0, "%c", VAR_9);

   if (VAR_6 == VAR_8 - 1)
    FUNC_0(VAR_0, "\n");
  }
 }
}
