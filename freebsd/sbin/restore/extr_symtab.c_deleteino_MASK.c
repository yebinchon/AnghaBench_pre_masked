
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct entry {size_t e_ino; struct entry* e_next; } ;
typedef size_t ino_t ;


 size_t VAR_0 ;
 struct entry** VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*,int ) ;

void
FUNC_1(ino_t VAR_4)
{
 struct entry *VAR_5;
 struct entry **VAR_6;

 if (VAR_4 < VAR_0 || VAR_4 >= VAR_3)
  FUNC_0("deleteino: out of range %ju\n", (uintmax_t)VAR_4);
 VAR_6 = &VAR_1[VAR_4 % VAR_2];
 for (VAR_5 = *VAR_6; VAR_5 != ((void*)0); VAR_5 = VAR_5->e_next) {
  if (VAR_5->e_ino == VAR_4) {
   VAR_5->e_ino = 0;
   *VAR_6 = VAR_5->e_next;
   return;
  }
  VAR_6 = &VAR_5->e_next;
 }
 FUNC_0("deleteino: %ju not found\n", (uintmax_t)VAR_4);
}
