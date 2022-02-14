
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ l; } ;
struct TYPE_5__ {unsigned short* x_dimen; } ;
struct TYPE_6__ {TYPE_1__ x_ary; } ;
struct TYPE_8__ {TYPE_3__ x_tagndx; TYPE_2__ x_fcnary; } ;
union internal_auxent {TYPE_4__ x_sym; } ;
struct coff_types {int dummy; } ;
struct coff_symbols {int dummy; } ;
typedef scalar_t__ debug_type ;
typedef int bfd_boolean ;
typedef int bfd ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 scalar_t__* FUNC_5 (struct coff_types*,scalar_t__) ;
 scalar_t__ FUNC_6 (void*,scalar_t__,scalar_t__,int ,int,int ) ;
 scalar_t__ FUNC_7 (void*,scalar_t__,scalar_t__*,int ) ;
 scalar_t__ FUNC_8 (void*,scalar_t__*,char const*) ;
 scalar_t__ FUNC_9 (void*,scalar_t__) ;
 int FUNC_10 (int ,int) ;
 scalar_t__ FUNC_11 (int *,struct coff_symbols*,struct coff_types*,long,int,union internal_auxent*,void*) ;

__attribute__((used)) static debug_type
FUNC_12 (bfd *VAR_5, struct coff_symbols *VAR_6,
   struct coff_types *VAR_7, long VAR_8, int VAR_9,
   union internal_auxent *VAR_10, bfd_boolean VAR_11,
   void *VAR_12)
{
  debug_type VAR_13;

  if ((VAR_9 & ~VAR_3) != 0)
    {
      int VAR_14;

      VAR_14 = FUNC_0 (VAR_9);

      if (FUNC_3 (VAR_9))
 {
   VAR_13 = FUNC_12 (VAR_5, VAR_6, VAR_7, VAR_8, VAR_14,
      VAR_10, VAR_11, VAR_12);
   VAR_13 = FUNC_9 (VAR_12, VAR_13);
 }
      else if (FUNC_2 (VAR_9))
 {
   VAR_13 = FUNC_12 (VAR_5, VAR_6, VAR_7, VAR_8, VAR_14,
      VAR_10, VAR_11, VAR_12);
   VAR_13 = FUNC_7 (VAR_12, VAR_13, (debug_type *) ((void*)0),
        VAR_2);
 }
      else if (FUNC_1 (VAR_9))
 {
   int VAR_15;

   if (VAR_10 == ((void*)0))
     VAR_15 = 0;
   else
     {
       unsigned short *VAR_16;
       int VAR_17;






       VAR_16 = VAR_10->x_sym.x_fcnary.x_ary.x_dimen;
       VAR_15 = VAR_16[0];
       for (VAR_17 = 0; *VAR_16 != 0 && VAR_17 < VAR_1 - 1; VAR_17++, VAR_16++)
  *VAR_16 = *(VAR_16 + 1);
       *VAR_16 = 0;
     }

   VAR_13 = FUNC_12 (VAR_5, VAR_6, VAR_7, VAR_8, VAR_14,
      VAR_10, VAR_2, VAR_12);
   VAR_13 = FUNC_6 (VAR_12, VAR_13,
     FUNC_11 (VAR_5, VAR_6,
             VAR_7,
             VAR_8,
             VAR_4,
             ((void*)0), VAR_12),
     0, VAR_15 - 1, VAR_2);
 }
      else
 {
   FUNC_10 (FUNC_4("parse_coff_type: Bad type code 0x%x"), VAR_9);
   return VAR_0;
 }

      return VAR_13;
    }

  if (VAR_10 != ((void*)0) && VAR_10->x_sym.x_tagndx.l > 0)
    {
      debug_type *VAR_18;



      VAR_18 = FUNC_5 (VAR_7, VAR_10->x_sym.x_tagndx.l);
      if (*VAR_18 != VAR_0)
 return *VAR_18;
      else
 return FUNC_8 (VAR_12, VAR_18, (const char *) ((void*)0));
    }







  if (! VAR_11)
    VAR_10 = ((void*)0);

  return FUNC_11 (VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
          VAR_10, VAR_12);
}
