
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct entry {size_t e_ino; struct entry* e_next; } ;
typedef size_t ino_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct entry*,char*) ;
 scalar_t__ VAR_1 ;
 struct entry** VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void
FUNC_2(ino_t VAR_5, struct entry *VAR_6)
{
 struct entry **VAR_7;

 if (VAR_5 < VAR_0 || VAR_5 >= VAR_4)
  FUNC_1("addino: out of range %ju\n", (uintmax_t)VAR_5);
 VAR_7 = &VAR_2[VAR_5 % VAR_3];
 VAR_6->e_ino = VAR_5;
 VAR_6->e_next = *VAR_7;
 *VAR_7 = VAR_6;
 if (VAR_1)
  for (VAR_6 = VAR_6->e_next; VAR_6 != ((void*)0); VAR_6 = VAR_6->e_next)
   if (VAR_6->e_ino == VAR_5)
    FUNC_0(VAR_6, "duplicate inum");
}
