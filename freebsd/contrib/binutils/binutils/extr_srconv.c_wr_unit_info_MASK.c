
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coff_sfile {struct coff_sfile* next; } ;
struct coff_ofile {struct coff_sfile* source_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,long,int ) ;
 long FUNC_1 (int ) ;
 int FUNC_2 (struct coff_ofile*,struct coff_sfile*,int) ;
 int FUNC_3 (struct coff_ofile*,struct coff_sfile*,int) ;
 int FUNC_4 (struct coff_ofile*,struct coff_sfile*) ;
 int FUNC_5 (struct coff_ofile*,struct coff_sfile*,int,int) ;

__attribute__((used)) static void
FUNC_6 (struct coff_ofile *VAR_2)
{
  struct coff_sfile *VAR_3;
  int VAR_4 = 1;

  for (VAR_3 = VAR_2->source_head;
       VAR_3;
       VAR_3 = VAR_3->next)
    {
      long VAR_5;
      long VAR_6;
      int VAR_7;

      VAR_5 = FUNC_1 (VAR_1);
      FUNC_5 (VAR_2, VAR_3, VAR_4, 0);
      VAR_7 = FUNC_4 (VAR_2, VAR_3);
      VAR_6 = FUNC_1 (VAR_1);
      FUNC_0 (VAR_1, VAR_5, VAR_0);
      FUNC_5 (VAR_2, VAR_3, VAR_4, VAR_7);
      FUNC_0 (VAR_1, VAR_6, VAR_0);
      FUNC_3 (VAR_2, VAR_3, VAR_4);
      FUNC_2 (VAR_2, VAR_3, VAR_4);
      VAR_4 = 0;
    }
}
