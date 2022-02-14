
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {scalar_t__ e_type; scalar_t__ e_flags; struct entry* e_sibling; struct entry* e_entries; struct entry* e_next; } ;
typedef scalar_t__ ino_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct entry*,char*) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct entry*) ;
 struct entry* FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (struct entry*) ;
 int FUNC_6 (struct entry*) ;
 struct entry* VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,char*) ;

void
FUNC_8(void)
{
 struct entry *VAR_6, *VAR_7;
 ino_t VAR_8;

 FUNC_7(VAR_5, "Find unreferenced names.\n");
 for (VAR_8 = VAR_1; VAR_8 < VAR_3; VAR_8++) {
  VAR_6 = FUNC_4(VAR_8);
  if (VAR_6 == ((void*)0) || VAR_6->e_type == VAR_0 || FUNC_0(VAR_8, VAR_2) == 0)
   continue;
  for (VAR_7 = VAR_6->e_entries; VAR_7 != ((void*)0); VAR_7 = VAR_7->e_sibling) {
   if (VAR_7->e_flags == 0) {
    FUNC_2(VAR_5,
        "%s: remove unreferenced name\n",
        FUNC_5(VAR_7));
    FUNC_6(VAR_7);
    FUNC_3(VAR_7);
   }
  }
 }



 for (VAR_6 = VAR_4; VAR_6 != ((void*)0); VAR_6 = VAR_6->e_next) {
  for (VAR_7 = VAR_6->e_entries; VAR_7 != ((void*)0); VAR_7 = VAR_7->e_sibling) {
   if (VAR_7->e_type == VAR_0) {
    if (VAR_7->e_flags != 0)
     FUNC_1(VAR_7, "unreferenced with flags");
    FUNC_2(VAR_5,
        "%s: remove unreferenced name\n",
        FUNC_5(VAR_7));
    FUNC_6(VAR_7);
    FUNC_3(VAR_7);
   }
  }
 }
}
