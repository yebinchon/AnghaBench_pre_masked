
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct entry {int e_flags; } ;
struct TYPE_2__ {int d_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct entry* FUNC_0 (char*,int ,int ) ;
 struct entry* FUNC_1 (char*) ;
 int FUNC_2 (struct entry*) ;
 TYPE_1__* FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;

void
FUNC_5(char *VAR_3)
{
 char *VAR_4;
 struct entry *VAR_5;
 char *VAR_6;

 VAR_6 = FUNC_4(VAR_3, '/');
 if (VAR_6 == ((void*)0))
  return;
 for (VAR_4 = VAR_6; *VAR_4 != '\0'; VAR_4++) {
  if (*VAR_4 != '/')
   continue;
  *VAR_4 = '\0';
  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5 == ((void*)0)) {

   VAR_5 = FUNC_0(VAR_3, FUNC_3(VAR_3)->d_ino, VAR_2);
   FUNC_2(VAR_5);
  }
  VAR_5->e_flags |= VAR_1|VAR_0;
  *VAR_4 = '/';
 }
}
