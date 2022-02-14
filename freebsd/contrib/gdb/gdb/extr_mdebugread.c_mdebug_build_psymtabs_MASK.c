
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct objfile {int name; int obfd; int objfile_obstack; } ;
struct ecoff_debug_swap {int external_fdr_size; int (* swap_fdr_in ) (int ,char*,int *) ;} ;
struct TYPE_2__ {int ifdMax; } ;
struct ecoff_debug_info {char* external_fdr; int * fdr; TYPE_1__ symbolic_header; } ;
typedef int FDR ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 struct ecoff_debug_info* VAR_2 ;
 struct ecoff_debug_swap const* VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (struct objfile*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,char*,int *) ;

void
FUNC_10 (struct objfile *VAR_7,
         const struct ecoff_debug_swap *VAR_8,
         struct ecoff_debug_info *VAR_9)
{
  VAR_1 = VAR_7->obfd;
  VAR_3 = VAR_8;
  VAR_2 = VAR_9;

  FUNC_8 ();
  FUNC_0 ();
  FUNC_2 ();
  FUNC_4 ();


  if (VAR_9->fdr == (FDR *) ((void*)0))
    {
      char *VAR_10;
      char *VAR_11;
      FDR *VAR_12;

      VAR_9->fdr = (FDR *) FUNC_5 (&VAR_7->objfile_obstack,
      (VAR_9->symbolic_header.ifdMax
       * sizeof (FDR)));
      VAR_10 = VAR_9->external_fdr;
      VAR_11 = (VAR_10
   + VAR_9->symbolic_header.ifdMax * VAR_8->external_fdr_size);
      VAR_12 = VAR_9->fdr;
      for (; VAR_10 < VAR_11; VAR_10 += VAR_8->external_fdr_size, VAR_12++)
 (*VAR_8->swap_fdr_in) (VAR_7->obfd, VAR_10, VAR_12);
    }

  FUNC_6 (VAR_7);
}
