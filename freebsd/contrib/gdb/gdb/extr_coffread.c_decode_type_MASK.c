
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
struct type {int dummy; } ;
struct coff_symbol {scalar_t__ c_naux; scalar_t__ c_sclass; int c_name; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 unsigned int VAR_5 ;
 struct type* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,char*,int ) ;
 struct type* FUNC_7 (struct type*,struct type*,struct type*) ;
 struct type* FUNC_8 (struct type*,struct type*,int ,int) ;
 int VAR_6 ;
 struct type* FUNC_9 (struct coff_symbol*,int ,union internal_auxent*) ;
 struct type* FUNC_10 (struct type*) ;
 struct type* FUNC_11 (int ,int ) ;
 struct type* FUNC_12 (struct type*) ;
 int VAR_7 ;

__attribute__((used)) static struct type *
FUNC_13 (struct coff_symbol *VAR_8, unsigned int VAR_9,
      union internal_auxent *VAR_10)
{
  struct type *VAR_11 = 0;
  unsigned int VAR_12;

  if (VAR_9 & ~VAR_5)
    {
      VAR_12 = FUNC_1 (VAR_9);
      if (FUNC_4 (VAR_9))
 {
   VAR_11 = FUNC_13 (VAR_8, VAR_12, VAR_10);
   VAR_11 = FUNC_12 (VAR_11);
 }
      else if (FUNC_3 (VAR_9))
 {
   VAR_11 = FUNC_13 (VAR_8, VAR_12, VAR_10);
   VAR_11 = FUNC_10 (VAR_11);
 }
      else if (FUNC_2 (VAR_9))
 {
   int VAR_13, VAR_14;
   unsigned short *VAR_15;
   struct type *VAR_16, *VAR_17, *VAR_18;



   if (VAR_10->x_sym.x_tagndx.l == 0)
     VAR_8->c_naux = 0;


   VAR_15 = &VAR_10->x_sym.x_fcnary.x_ary.x_dimen[0];
   VAR_13 = 1;
   VAR_14 = VAR_15[0];
   for (VAR_13 = 0; *VAR_15 && VAR_13 < VAR_3 - 1; VAR_13++, VAR_15++)
     *VAR_15 = *(VAR_15 + 1);
   *VAR_15 = 0;

   VAR_16 = FUNC_13 (VAR_8, VAR_12, VAR_10);
   VAR_17 = FUNC_11 (VAR_6, VAR_4);
   VAR_18 =
     FUNC_8 ((struct type *) ((void*)0), VAR_17, 0, VAR_14 - 1);
   VAR_11 =
     FUNC_7 ((struct type *) ((void*)0), VAR_16, VAR_18);
 }
      return VAR_11;
    }
  if (VAR_8->c_naux > 0 && VAR_10->x_sym.x_tagndx.l != 0)
    {
      if (VAR_8->c_sclass != VAR_1
   && VAR_8->c_sclass != VAR_2
   && VAR_8->c_sclass != VAR_0
   && VAR_10->x_sym.x_tagndx.l >= 0)
 {
   VAR_11 = FUNC_5 (VAR_10->x_sym.x_tagndx.l);
   return VAR_11;
 }
      else
 {
   FUNC_6 (&VAR_7,
       "Symbol table entry for %s has bad tagndx value",
       VAR_8->c_name);

 }
    }

  return FUNC_9 (VAR_8, FUNC_0 (VAR_9), VAR_10);
}
