
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;
typedef int FILE ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,char*,...) ;
 char* VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static bfd *
FUNC_7 (void)
{
  FILE *VAR_13 = FUNC_5 (VAR_8, VAR_5);

  if (VAR_13 == ((void*)0))
    {
      FUNC_3 (FUNC_0("failed to open temporary head file: %s"), VAR_8);
      return ((void*)0);
    }

  FUNC_6 (VAR_13, "%s IMAGE_IMPORT_DESCRIPTOR\n", VAR_0);
  FUNC_6 (VAR_13, "\t.section	.idata$2\n");

  FUNC_6(VAR_13,"\t%s\t%s\n", VAR_1,VAR_9);

  FUNC_6 (VAR_13, "%s:\n", VAR_9);

  FUNC_6 (VAR_13, "\t%shname%s\t%sPtr to image import by name list\n",
    VAR_4, VAR_3, VAR_0);

  FUNC_6 (VAR_13, "\t%sthis should be the timestamp, but NT sometimes\n", VAR_0);
  FUNC_6 (VAR_13, "\t%sdoesn't load DLLs when this is set.\n", VAR_0);
  FUNC_6 (VAR_13, "\t%s\t0\t%s loaded time\n", VAR_2, VAR_0);
  FUNC_6 (VAR_13, "\t%s\t0\t%s Forwarder chain\n", VAR_2, VAR_0);
  FUNC_6 (VAR_13, "\t%s__%s_iname%s\t%s imported dll's name\n",
    VAR_4,
    VAR_10,
    VAR_3,
    VAR_0);
  FUNC_6 (VAR_13, "\t%sfthunk%s\t%s pointer to firstthunk\n",
    VAR_4,
    VAR_3, VAR_0);

  FUNC_6 (VAR_13, "%sStuff for compatibility\n", VAR_0);

  if (!VAR_12)
    {
      FUNC_6 (VAR_13, "\t.section\t.idata$5\n");



      FUNC_6 (VAR_13,"\t%s\t0\n", VAR_2);

      FUNC_6 (VAR_13, "fthunk:\n");
    }

  if (!VAR_11)
    {
      FUNC_6 (VAR_13, "\t.section\t.idata$4\n");
      FUNC_6 (VAR_13, "\t%s\t0\n", VAR_2);
      FUNC_6 (VAR_13, "\t.section	.idata$4\n");
      FUNC_6 (VAR_13, "hname:\n");
    }

  FUNC_4 (VAR_13);

  FUNC_1 (VAR_8, VAR_7);

  return FUNC_2 (VAR_7, VAR_6);
}
