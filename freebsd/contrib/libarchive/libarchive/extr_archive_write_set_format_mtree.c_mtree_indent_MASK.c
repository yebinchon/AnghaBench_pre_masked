
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* s; } ;
struct mtree_writer {int depth; TYPE_1__ ebuf; int buf; scalar_t__ indent; scalar_t__ classic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,char const*,int) ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(struct mtree_writer *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 const char *VAR_7, *VAR_8, *VAR_9;

 if (VAR_2->classic) {
  if (VAR_2->indent) {
   VAR_5 = 0;
   VAR_6 = VAR_2->depth * 4;
  } else {
   VAR_5 = VAR_2->depth?4:0;
   VAR_6 = 0;
  }
 } else
  VAR_5 = VAR_6 = 0;
 VAR_4 = 1;
 VAR_8 = VAR_7 = VAR_2->ebuf.s;
 VAR_9 = ((void*)0);
 while (*VAR_7 == ' ')
  VAR_7++;
 while ((VAR_7 = FUNC_4(VAR_7, ' ')) != ((void*)0)) {
  if (VAR_4) {
   VAR_4 = 0;
   for (VAR_3 = 0; VAR_3 < VAR_5 + VAR_6; VAR_3++)
    FUNC_0(&VAR_2->buf, ' ');
   FUNC_3(&VAR_2->buf, VAR_8, VAR_7 - VAR_8);
   if (VAR_5 + (VAR_7 -VAR_8) > VAR_0) {
    FUNC_3(&VAR_2->buf, " \\\n", 3);
    for (VAR_3 = 0; VAR_3 < (VAR_0 + 1 + VAR_6); VAR_3++)
     FUNC_0(&VAR_2->buf, ' ');
   } else {
    for (VAR_3 = (int)(VAR_7 -VAR_8 + VAR_5);
        VAR_3 < (VAR_0 + 1); VAR_3++)
     FUNC_0(&VAR_2->buf, ' ');
   }
   VAR_8 = ++VAR_7;
   VAR_9 = ((void*)0);
   continue;
  }
  if (VAR_6 + (VAR_7 - VAR_8) <= VAR_1 - 3 - VAR_0)
   VAR_9 = VAR_7++;
  else {
   if (VAR_9 == ((void*)0))
    VAR_9 = VAR_7;
   FUNC_3(&VAR_2->buf, VAR_8, VAR_9 - VAR_8);
   FUNC_3(&VAR_2->buf, " \\\n", 3);
   for (VAR_3 = 0; VAR_3 < (VAR_0 + 1 + VAR_6); VAR_3++)
    FUNC_0(&VAR_2->buf, ' ');
   VAR_8 = VAR_7 = ++VAR_9;
   VAR_9 = ((void*)0);
  }
 }
 if (VAR_4) {
  for (VAR_3 = 0; VAR_3 < VAR_5 + VAR_6; VAR_3++)
   FUNC_0(&VAR_2->buf, ' ');
  FUNC_1(&VAR_2->buf, VAR_8);
  VAR_8 += FUNC_5(VAR_8);
 }
 if (VAR_9 != ((void*)0) && VAR_6 + FUNC_5(VAR_8) > VAR_1 - 3 - VAR_0) {

  FUNC_3(&VAR_2->buf, VAR_8, VAR_9 - VAR_8);
  FUNC_3(&VAR_2->buf, " \\\n", 3);
  for (VAR_3 = 0; VAR_3 < (VAR_0 + 1 + VAR_6); VAR_3++)
   FUNC_0(&VAR_2->buf, ' ');
  VAR_8 = ++VAR_9;
 }
 FUNC_1(&VAR_2->buf, VAR_8);
 FUNC_2(&VAR_2->ebuf);
}
