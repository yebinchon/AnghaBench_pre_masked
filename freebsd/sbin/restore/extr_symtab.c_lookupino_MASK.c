
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {size_t e_ino; struct entry* e_next; } ;
typedef size_t ino_t ;


 size_t VAR_0 ;
 struct entry** VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

struct entry *
FUNC_0(ino_t VAR_4)
{
 struct entry *VAR_5;

 if (VAR_4 < VAR_0 || VAR_4 >= VAR_3)
  return (((void*)0));
 for (VAR_5 = VAR_1[VAR_4 % VAR_2]; VAR_5 != ((void*)0); VAR_5 = VAR_5->e_next)
  if (VAR_5->e_ino == VAR_4)
   return (VAR_5);
 return (((void*)0));
}
