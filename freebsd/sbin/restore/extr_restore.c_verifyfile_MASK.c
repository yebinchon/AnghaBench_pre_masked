
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct entry {int e_type; struct entry* e_links; } ;
typedef scalar_t__ ino_t ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct entry*,char*) ;
 int FUNC_1 (int ,char*,char*) ;
 struct entry* FUNC_2 (scalar_t__) ;
 struct entry* FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 int VAR_3 ;

long
FUNC_5(char *VAR_4, ino_t VAR_5, int VAR_6)
{
 struct entry *VAR_7, *VAR_8;
 long VAR_9 = VAR_1;

 VAR_8 = FUNC_3(VAR_4);
 if (VAR_8 == ((void*)0)) {
  FUNC_1(VAR_3, "Warning: missing name %s\n", VAR_4);
  return (VAR_0);
 }
 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7 != VAR_8)
  VAR_9 = VAR_0;
 for ( ; VAR_7 != ((void*)0); VAR_7 = VAR_7->e_links)
  if (VAR_7 == VAR_8)
   break;
 if (VAR_7 == ((void*)0))
  FUNC_4("missing inumber %ju\n", (uintmax_t)VAR_5);
 if (VAR_8->e_type == VAR_2 && VAR_6 != VAR_2)
  FUNC_0(VAR_8, "type should be LEAF");
 return (VAR_9);
}
