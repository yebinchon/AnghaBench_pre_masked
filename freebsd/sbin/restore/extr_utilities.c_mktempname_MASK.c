
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {int e_flags; int e_name; int e_namlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct entry*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct entry*) ;
 int FUNC_3 (struct entry*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ) ;

void
FUNC_8(struct entry *VAR_2)
{
 char VAR_3[VAR_0];

 if (VAR_2->e_flags & VAR_1)
  FUNC_0(VAR_2, "mktempname: called with TMPNAME");
 VAR_2->e_flags |= VAR_1;
 (void) FUNC_6(VAR_3, FUNC_3(VAR_2));
 FUNC_1(VAR_2->e_name);
 VAR_2->e_name = FUNC_5(FUNC_2(VAR_2));
 VAR_2->e_namlen = FUNC_7(VAR_2->e_name);
 FUNC_4(VAR_3, FUNC_3(VAR_2));
}
