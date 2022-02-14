
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;
typedef int FILE ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int ) ;
 char* VAR_7 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,char*,...) ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static bfd *
FUNC_7 (void)
{
  FILE *VAR_11 = FUNC_5 (VAR_6, VAR_3);

  if (VAR_11 == ((void*)0))
    {
      FUNC_3 (FUNC_0("failed to open temporary tail file: %s"), VAR_6);
      return ((void*)0);
    }

  if (!VAR_9)
    {
      FUNC_6 (VAR_11, "\t.section	.idata$4\n");



      FUNC_6 (VAR_11,"\t%s\t0\n", VAR_1);

    }

  if (!VAR_10)
    {
      FUNC_6 (VAR_11, "\t.section	.idata$5\n");



      FUNC_6 (VAR_11,"\t%s\t0\n", VAR_1);

    }
  FUNC_6 (VAR_11, "\t.section	.idata$7\n");


  FUNC_6 (VAR_11, "\t%s\t__%s_iname\n", VAR_0, VAR_8);
  FUNC_6 (VAR_11, "__%s_iname:\t%s\t\"%s\"\n",
    VAR_8, VAR_2, VAR_7);

  FUNC_4 (VAR_11);

  FUNC_1 (VAR_6, VAR_5);

  return FUNC_2 (VAR_5, VAR_4);
}
