
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coff_sfile {char* name; struct coff_sfile* next; } ;
struct coff_ofile {struct coff_sfile* source_head; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct coff_ofile*,struct coff_sfile*,int) ;
 int FUNC_2 (struct coff_ofile*,struct coff_sfile*,int) ;
 int FUNC_3 (struct coff_ofile*,struct coff_sfile*) ;
 int FUNC_4 (struct coff_ofile*,struct coff_sfile*) ;

__attribute__((used)) static void
FUNC_5 (struct coff_ofile *VAR_1)
{
  struct coff_sfile *VAR_2;
  int VAR_3 = 0;

  for (VAR_2 = VAR_1->source_head;
       VAR_2;
       VAR_2 = VAR_2->next)
    {
      if (VAR_0)
 FUNC_0 ("%s\n", VAR_2->name);

      FUNC_2 (VAR_1, VAR_2, VAR_3);
      FUNC_3 (VAR_1, VAR_2);
      FUNC_4 (VAR_1, VAR_2);
      FUNC_1 (VAR_1, VAR_2, VAR_3);
      VAR_3++;
    }
}
