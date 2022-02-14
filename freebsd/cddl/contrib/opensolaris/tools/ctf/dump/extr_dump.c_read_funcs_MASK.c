
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ushort_t ;
typedef scalar_t__ ulong_t ;
struct TYPE_7__ {int cth_funcoff; int cth_typeoff; } ;
typedef TYPE_1__ ctf_header_t ;
struct TYPE_8__ {int cd_ctflen; int * cd_symdata; scalar_t__ cd_ctfdata; } ;
typedef TYPE_2__ ctf_data_t ;
struct TYPE_9__ {scalar_t__ s_nargs; int s_argmax; int s_nfunc; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (TYPE_2__ const*,int,int ,char**) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 TYPE_3__ VAR_7 ;

__attribute__((used)) static int
FUNC_7(const ctf_header_t *VAR_8, const ctf_data_t *VAR_9)
{
 void *VAR_10 = (void *) (VAR_9->cd_ctfdata + VAR_8->cth_funcoff);
 const ushort_t *VAR_11 = VAR_10;

 VAR_10 = (void *) (VAR_9->cd_ctfdata + VAR_8->cth_typeoff);
 const ushort_t *VAR_12 = VAR_10;

 ulong_t VAR_13;
 int VAR_14;

 if (VAR_6 != VAR_4)
  FUNC_5("- Functions ");

 if (VAR_8->cth_funcoff & 1)
  FUNC_3("cth_funcoff is not aligned properly\n");
 if (VAR_8->cth_funcoff >= VAR_9->cd_ctflen)
  FUNC_3("file is truncated or cth_funcoff is corrupt\n");
 if (VAR_8->cth_typeoff >= VAR_9->cd_ctflen)
  FUNC_3("file is truncated or cth_typeoff is corrupt\n");
 if (VAR_8->cth_funcoff > VAR_8->cth_typeoff)
  FUNC_3("file is corrupt -- cth_funcoff > cth_typeoff\n");

 for (VAR_14 = -1, VAR_13 = 0; VAR_11 < VAR_12; VAR_13++) {
  ushort_t VAR_15 = *VAR_11++;
  ushort_t VAR_16 = FUNC_0(VAR_15);
  ushort_t VAR_17 = FUNC_1(VAR_15);
  ushort_t VAR_18;
  int VAR_19;
  char *VAR_20;

  if (VAR_9->cd_symdata == ((void*)0) || (VAR_19 = FUNC_4(VAR_9, VAR_14,
      VAR_5, &VAR_20)) < 0)
   VAR_20 = ((void*)0);
  else
   VAR_14 = VAR_19;

  if (VAR_16 == VAR_1 && VAR_17 == 0)
   continue;

  if (VAR_16 != VAR_0) {
   (void) FUNC_6("  [%lu] unexpected kind -- %u\n",
       VAR_13, VAR_16);
   return (VAR_2);
  }

  if (VAR_11 + VAR_17 > VAR_12) {
   (void) FUNC_6("  [%lu] vlen %u extends past section "
       "boundary\n", VAR_13, VAR_17);
   return (VAR_2);
  }

  if (VAR_6 != VAR_4) {
   (void) FUNC_6("  [%lu] FUNC ", VAR_13);
   if (VAR_20 != ((void*)0))
    (void) FUNC_6("(%s) ", VAR_20);
   (void) FUNC_6("returns: %u args: (", *VAR_11++);

   if (VAR_17 != 0) {
    (void) FUNC_6("%u", *VAR_11++);
    for (VAR_18 = 1; VAR_18 < VAR_17; VAR_18++)
     (void) FUNC_6(", %u", *VAR_11++);
   }

   (void) FUNC_6(")\n");
  } else
   VAR_11 += VAR_17 + 1;

  VAR_7.s_nfunc++;
  VAR_7.s_nargs += VAR_17;
  VAR_7.s_argmax = FUNC_2(VAR_7.s_argmax, VAR_17);
 }

 return (VAR_3);
}
