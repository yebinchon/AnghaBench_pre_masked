
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ecoff_debug_swap {unsigned int external_rfd_size; unsigned int external_sym_size; int (* swap_sym_in ) (int *,char*,TYPE_2__*) ;int (* swap_rfd_in ) (int *,char*,int*) ;} ;
struct TYPE_10__ {scalar_t__ iextMax; } ;
struct ecoff_debug_info {char* ss; TYPE_1__ symbolic_header; scalar_t__ external_sym; TYPE_4__* fdr; int * external_rfd; } ;
typedef int bfd ;
struct TYPE_15__ {struct ecoff_debug_swap debug_swap; } ;
struct TYPE_14__ {struct ecoff_debug_info debug_info; } ;
struct TYPE_13__ {unsigned int rfdBase; int issBase; scalar_t__ isymBase; } ;
struct TYPE_12__ {unsigned int rfd; unsigned int index; } ;
struct TYPE_11__ {int iss; } ;
typedef TYPE_2__ SYMR ;
typedef TYPE_3__ RNDXR ;
typedef int RFDT ;
typedef TYPE_4__ FDR ;


 TYPE_9__* FUNC_0 (int *) ;
 TYPE_8__* FUNC_1 (int *) ;
 unsigned int VAR_0 ;
 int FUNC_2 (char*,char*,char const*,char const*,unsigned int,scalar_t__) ;
 int FUNC_3 (int *,char*,int*) ;
 int FUNC_4 (int *,char*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5 (bfd *VAR_1,
        FDR *VAR_2,
        char *VAR_3,
        RNDXR *VAR_4,
        long VAR_5,
        const char *VAR_6)
{
  const struct ecoff_debug_swap * const VAR_7 =
    &FUNC_0 (VAR_1)->debug_swap;
  struct ecoff_debug_info * const VAR_8 = &FUNC_1 (VAR_1)->debug_info;
  unsigned int VAR_9 = VAR_4->rfd;
  unsigned int VAR_10 = VAR_4->index;
  const char *VAR_11;

  if (VAR_9 == 0xfff)
    VAR_9 = VAR_5;



  if (VAR_9 == 0xffffffff
      || (VAR_4->rfd == 0xfff && VAR_10 == 0))
    VAR_11 = "<undefined>";
  else if (VAR_10 == VAR_0)
    VAR_11 = "<no name>";
  else
    {
      SYMR VAR_12;

      if (VAR_8->external_rfd == ((void*)0))
 VAR_2 = VAR_8->fdr + VAR_9;
      else
 {
   RFDT VAR_13;

   (*VAR_7->swap_rfd_in) (VAR_1,
          ((char *) VAR_8->external_rfd
           + ((VAR_2->rfdBase + VAR_9)
       * VAR_7->external_rfd_size)),
          &VAR_13);
   VAR_2 = VAR_8->fdr + VAR_13;
 }

      VAR_10 += VAR_2->isymBase;

      (*VAR_7->swap_sym_in) (VAR_1,
      ((char *) VAR_8->external_sym
       + VAR_10 * VAR_7->external_sym_size),
      &VAR_12);

      VAR_11 = VAR_8->ss + VAR_2->issBase + VAR_12.iss;
    }

  FUNC_2 (VAR_3,
    "%s %s { ifd = %u, index = %lu }",
    VAR_6, VAR_11, VAR_9,
    ((long) VAR_10
     + VAR_8->symbolic_header.iextMax));
}
