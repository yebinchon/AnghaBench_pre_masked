
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data_reference {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (struct data_reference*,unsigned int) ;
 int FUNC_1 (struct data_reference*) ;
 unsigned int FUNC_2 (struct data_reference*) ;
 int FUNC_3 (struct data_reference*) ;
 int FUNC_4 (struct data_reference*) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,int ,int ) ;

void
FUNC_7 (FILE *VAR_0,
       struct data_reference *VAR_1)
{
  unsigned int VAR_2;

  FUNC_5 (VAR_0, "(Data Ref: \n  stmt: ");
  FUNC_6 (VAR_0, FUNC_4 (VAR_1), 0);
  FUNC_5 (VAR_0, "  ref: ");
  FUNC_6 (VAR_0, FUNC_3 (VAR_1), 0);
  FUNC_5 (VAR_0, "  base_object: ");
  FUNC_6 (VAR_0, FUNC_1 (VAR_1), 0);

  for (VAR_2 = 0; VAR_2 < FUNC_2 (VAR_1); VAR_2++)
    {
      FUNC_5 (VAR_0, "  Access function %d: ", VAR_2);
      FUNC_6 (VAR_0, FUNC_0 (VAR_1, VAR_2), 0);
    }
  FUNC_5 (VAR_0, ")\n");
}
