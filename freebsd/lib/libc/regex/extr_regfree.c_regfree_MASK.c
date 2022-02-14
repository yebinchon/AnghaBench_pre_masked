
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct re_guts {scalar_t__ magic; unsigned int ncsets; char* must; char* charjump; char* matchjump; TYPE_1__* sets; int * strip; } ;
struct TYPE_5__ {scalar_t__ re_magic; struct re_guts* re_g; } ;
typedef TYPE_2__ regex_t ;
struct TYPE_4__ {char* ranges; char* wides; char* types; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;

void
FUNC_1(regex_t *VAR_3)
{
 struct re_guts *VAR_4;
 unsigned int VAR_5;

 if (VAR_3->re_magic != VAR_1)
  return;

 VAR_4 = VAR_3->re_g;
 if (VAR_4 == ((void*)0) || VAR_4->magic != VAR_2)
  return;
 VAR_3->re_magic = 0;
 VAR_4->magic = 0;

 if (VAR_4->strip != ((void*)0))
  FUNC_0((char *)VAR_4->strip);
 if (VAR_4->sets != ((void*)0)) {
  for (VAR_5 = 0; VAR_5 < VAR_4->ncsets; VAR_5++) {
   FUNC_0(VAR_4->sets[VAR_5].ranges);
   FUNC_0(VAR_4->sets[VAR_5].wides);
   FUNC_0(VAR_4->sets[VAR_5].types);
  }
  FUNC_0((char *)VAR_4->sets);
 }
 if (VAR_4->must != ((void*)0))
  FUNC_0(VAR_4->must);
 if (VAR_4->charjump != ((void*)0))
  FUNC_0(&VAR_4->charjump[VAR_0]);
 if (VAR_4->matchjump != ((void*)0))
  FUNC_0(VAR_4->matchjump);
 FUNC_0((char *)VAR_4);
}
