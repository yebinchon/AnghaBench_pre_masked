
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* dllname; int nfuncs; struct TYPE_4__* next; TYPE_2__* funchead; } ;
typedef TYPE_1__ iheadtype ;
struct TYPE_5__ {int ord; char* name; struct TYPE_5__* next; } ;
typedef TYPE_2__ ifunctype ;
typedef int FILE ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int FUNC_0 (int *,char*,...) ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static void
FUNC_1 (FILE *VAR_9)
{
  iheadtype *VAR_10;
  ifunctype *VAR_11;
  int VAR_12;
  int VAR_13;
  int VAR_14;

  if (VAR_8 == ((void*)0))
    return;

  FUNC_0 (VAR_9, "%s Import data sections\n", VAR_1);
  FUNC_0 (VAR_9, "\n\t.section\t.idata$2\n");
  FUNC_0 (VAR_9, "\t%s\tdoi_idata\n", VAR_2);
  FUNC_0 (VAR_9, "doi_idata:\n");

  VAR_14 = 0;
  for (VAR_10 = VAR_8; VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
    {
      FUNC_0 (VAR_9, "\t%slistone%d%s\t%s %s\n",
        VAR_5, VAR_14, VAR_4,
        VAR_1, VAR_10->dllname);
      FUNC_0 (VAR_9, "\t%s\t0\n", VAR_3);
      FUNC_0 (VAR_9, "\t%s\t0\n", VAR_3);
      FUNC_0 (VAR_9, "\t%sdllname%d%s\n",
        VAR_5, VAR_14, VAR_4);
      FUNC_0 (VAR_9, "\t%slisttwo%d%s\n\n",
        VAR_5, VAR_14, VAR_4);
      VAR_14++;
    }

  FUNC_0 (VAR_9, "\t%s\t0\n", VAR_3);
  FUNC_0 (VAR_9, "\t%s\t0\n", VAR_3);
  FUNC_0 (VAR_9, "\t%s\t0\n", VAR_3);
  FUNC_0 (VAR_9, "\t%s\t0\n", VAR_3);
  FUNC_0 (VAR_9, "\t%s\t0\n", VAR_3);

  FUNC_0 (VAR_9, "\n\t.section\t.idata$4\n");
  VAR_12 = 0;
  for (VAR_10 = VAR_8; VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
    {
      FUNC_0 (VAR_9, "listone%d:\n", VAR_12);
      for (VAR_13 = 0; VAR_13 < VAR_10->nfuncs; VAR_13++)




 FUNC_0 (VAR_9, "\t%sfuncptr%d_%d%s\n",
   VAR_5, VAR_12, VAR_13, VAR_4);




      FUNC_0 (VAR_9, "\t%s\t0\n", VAR_3);

      VAR_12++;
    }

  FUNC_0 (VAR_9, "\n\t.section\t.idata$5\n");
  VAR_12 = 0;
  for (VAR_10 = VAR_8; VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
    {
      FUNC_0 (VAR_9, "listtwo%d:\n", VAR_12);
      for (VAR_13 = 0; VAR_13 < VAR_10->nfuncs; VAR_13++)




 FUNC_0 (VAR_9, "\t%sfuncptr%d_%d%s\n",
   VAR_5, VAR_12, VAR_13, VAR_4);




      FUNC_0 (VAR_9, "\t%s\t0\n", VAR_3);

      VAR_12++;
    }

  FUNC_0 (VAR_9, "\n\t.section\t.idata$6\n");
  VAR_12 = 0;
  for (VAR_10 = VAR_8; VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
    {
      VAR_13 = 0;
      for (VAR_11 = VAR_10->funchead; VAR_11 != ((void*)0);
    VAR_11 = VAR_11->next)
 {
   FUNC_0 (VAR_9,"funcptr%d_%d:\n", VAR_12, VAR_13);
   FUNC_0 (VAR_9,"\t%s\t%d\n", VAR_6,
     ((VAR_11->ord) & 0xFFFF));
   FUNC_0 (VAR_9,"\t%s\t\"%s\"\n", VAR_7, VAR_11->name);
   FUNC_0 (VAR_9,"\t%s\t0\n", VAR_0);
   VAR_13++;
 }
      VAR_12++;
    }

  FUNC_0 (VAR_9, "\n\t.section\t.idata$7\n");
  VAR_12 = 0;
  for (VAR_10 = VAR_8; VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
    {
      FUNC_0 (VAR_9,"dllname%d:\n", VAR_12);
      FUNC_0 (VAR_9,"\t%s\t\"%s\"\n", VAR_7, VAR_10->dllname);
      FUNC_0 (VAR_9,"\t%s\t0\n", VAR_0);
      VAR_12++;
    }
}
