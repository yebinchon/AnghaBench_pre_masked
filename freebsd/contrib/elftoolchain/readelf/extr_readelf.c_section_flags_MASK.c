
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct section {int flags; } ;
struct readelf {scalar_t__ ec; int options; } ;
struct TYPE_2__ {char* ln; int value; char sn; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (char*,int,char*,...) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2(struct readelf *VAR_4, struct section *VAR_5)
{

 static char VAR_6[256];
 int VAR_7, VAR_8, VAR_9;

 VAR_8 = 0;
 VAR_9 = VAR_4->ec == VAR_1 ? 8 : 16;
 if (VAR_4->options & VAR_2) {
  FUNC_0(VAR_6, 256, "[%*.*jx]: ", VAR_9, VAR_9,
      (uintmax_t)VAR_5->flags);
  VAR_8 += VAR_9 + 4;
 }
 for (VAR_7 = 0; VAR_3[VAR_7].ln != ((void*)0); VAR_7++) {
  if ((VAR_5->flags & VAR_3[VAR_7].value) == 0)
   continue;
  if (VAR_4->options & VAR_2) {
   FUNC_0(&VAR_6[VAR_8], 256 - VAR_8, "%s, ",
       VAR_3[VAR_7].ln);
   VAR_8 += FUNC_1(VAR_3[VAR_7].ln) + 2;
  } else
   VAR_6[VAR_8++] = VAR_3[VAR_7].sn;
 }
 if (VAR_4->options & VAR_2 && VAR_8 > VAR_9 + 4)
  VAR_8 -= 2;
 VAR_6[VAR_8] = '\0';

 return (VAR_6);
}
