
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tag_entry {char* s; size_t* lines; scalar_t__ maxlines; scalar_t__ nlines; int prio; } ;
struct TYPE_2__ {scalar_t__ tfd; } ;


 int VAR_0 ;
 struct tag_entry* FUNC_0 (int) ;
 size_t* FUNC_1 (size_t*,scalar_t__,int) ;
 int FUNC_2 (char*,char const*,size_t) ;
 struct tag_entry* FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (int *,unsigned int,struct tag_entry*) ;
 unsigned int FUNC_5 (int *,char const*,char const**) ;
 size_t FUNC_6 (char const*,char*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

void
FUNC_7(const char *VAR_3, int VAR_4, size_t VAR_5)
{
 struct tag_entry *VAR_6;
 const char *VAR_7;
 size_t VAR_8;
 unsigned int VAR_9;

 if (VAR_2.tfd <= 0)
  return;

 if (VAR_3[0] == '\\' && (VAR_3[1] == '&' || VAR_3[1] == 'e'))
  VAR_3 += 2;






 VAR_8 = FUNC_6(VAR_3, " \t\\");
 if (VAR_8 == 0)
  return;

 VAR_7 = VAR_3 + VAR_8;
 if (*VAR_7 != '\0')
  VAR_4 = VAR_0;

 VAR_9 = FUNC_5(&VAR_1, VAR_3, &VAR_7);
 VAR_6 = FUNC_3(&VAR_1, VAR_9);

 if (VAR_6 == ((void*)0)) {



  VAR_6 = FUNC_0(sizeof(*VAR_6) + VAR_8 + 1);
  FUNC_2(VAR_6->s, VAR_3, VAR_8);
  VAR_6->s[VAR_8] = '\0';
  VAR_6->lines = ((void*)0);
  VAR_6->maxlines = VAR_6->nlines = 0;
  FUNC_4(&VAR_1, VAR_9, VAR_6);

 } else {
  if (VAR_4 == 0) {
   if (VAR_6->prio == 0)
    VAR_6->prio = -1;
   return;
  }



  if (VAR_6->prio > 0 && VAR_6->prio < VAR_4)
   return;



  if (VAR_6->prio < 1 || VAR_6->prio > VAR_4)
   VAR_6->nlines = 0;
 }



 if (VAR_6->maxlines == VAR_6->nlines) {
  VAR_6->maxlines += 4;
  VAR_6->lines = FUNC_1(VAR_6->lines,
      VAR_6->maxlines, sizeof(*VAR_6->lines));
 }
 VAR_6->lines[VAR_6->nlines++] = VAR_5;
 VAR_6->prio = VAR_4;
}
