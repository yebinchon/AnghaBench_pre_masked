
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {int e_flags; scalar_t__ e_type; struct entry* e_links; } ;
typedef scalar_t__ ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 struct entry* FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct entry*) ;
 int VAR_8 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,char*) ;

void
FUNC_6(void)
{
 struct entry *VAR_9, *VAR_10;
 ino_t VAR_11;
 char VAR_12[VAR_0];

 if ((VAR_10 = FUNC_2(VAR_6))) {
  FUNC_5(VAR_8, "Add whiteouts\n");
  for ( ; VAR_10 != ((void*)0); VAR_10 = VAR_10->e_links) {
   if ((VAR_10->e_flags & VAR_2) == 0)
    continue;
   (void) FUNC_0(FUNC_3(VAR_10));
   VAR_10->e_flags &= ~VAR_2;
  }
 }
 FUNC_5(VAR_8, "Add links\n");
 for (VAR_11 = VAR_5; VAR_11 < VAR_7; VAR_11++) {
  VAR_10 = FUNC_2(VAR_11);
  if (VAR_10 == ((void*)0))
   continue;
  for (VAR_9 = VAR_10->e_links; VAR_9 != ((void*)0); VAR_9 = VAR_9->e_links) {
   if ((VAR_9->e_flags & VAR_2) == 0)
    continue;
   (void) FUNC_4(VAR_12, FUNC_3(VAR_10));
   if (VAR_10->e_type == VAR_3) {
    (void) FUNC_1(VAR_12, FUNC_3(VAR_9), VAR_4);
   } else {
    (void) FUNC_1(VAR_12, FUNC_3(VAR_9), VAR_1);
   }
   VAR_9->e_flags &= ~VAR_2;
  }
 }
}
