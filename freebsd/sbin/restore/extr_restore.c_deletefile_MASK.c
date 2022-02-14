
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {scalar_t__ e_type; int e_flags; } ;
typedef int ino_t ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct entry*) ;
 scalar_t__ VAR_6 ;
 struct entry* FUNC_2 (char*) ;

long
FUNC_3(char *VAR_7, ino_t VAR_8, int VAR_9)
{
 long VAR_10 = VAR_6 ? VAR_1 : VAR_0;
 struct entry *VAR_11;

 if (FUNC_0(VAR_8, VAR_5) == 0)
  return (VAR_10);
 VAR_11 = FUNC_2(VAR_7);
 if (VAR_11 != ((void*)0)) {
  VAR_11->e_flags &= ~VAR_2;
  VAR_11->e_flags |= VAR_4;
  if (VAR_11->e_type != VAR_3)
   FUNC_1(VAR_11);
 }
 return (VAR_10);
}
