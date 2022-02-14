
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_14__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef int ushort_t ;
typedef int uint_t ;
typedef int tid_t ;
struct TYPE_31__ {scalar_t__ t_type; size_t t_size; int t_id; int * t_name; struct TYPE_31__* t_tdesc; TYPE_2__* t_fndef; TYPE_8__* t_emem; TYPE_5__* t_members; TYPE_1__* t_ardef; TYPE_6__* t_intr; } ;
typedef TYPE_3__ tdesc_t ;
struct TYPE_32__ {int td_iihash; int td_fwdlist; } ;
typedef TYPE_4__ tdata_t ;
struct TYPE_33__ {int ml_offset; int ml_size; TYPE_3__* ml_type; void* ml_name; struct TYPE_33__* ml_next; } ;
typedef TYPE_5__ mlist_t ;
struct TYPE_34__ {int intr_signed; char intr_iformat; int intr_nbits; int intr_offset; int intr_fformat; int intr_type; } ;
typedef TYPE_6__ intr_t ;
struct TYPE_35__ {TYPE_3__* ii_dtype; int ii_type; } ;
typedef TYPE_7__ iidesc_t ;
typedef int fndef_t ;
struct TYPE_36__ {int el_number; void* el_name; struct TYPE_36__* el_next; } ;
typedef TYPE_8__ elist_t ;
struct TYPE_37__ {size_t ctt_type; int ctt_info; int ctt_name; } ;
typedef TYPE_9__ ctf_type_t ;
struct TYPE_24__ {scalar_t__ ctm_name; size_t ctm_type; int ctm_offset; } ;
typedef TYPE_10__ ctf_member_t ;
struct TYPE_25__ {scalar_t__ ctlm_name; size_t ctlm_type; } ;
typedef TYPE_11__ ctf_lmember_t ;
struct TYPE_26__ {scalar_t__ cth_typeoff; size_t cth_stroff; } ;
typedef TYPE_12__ ctf_header_t ;
struct TYPE_27__ {scalar_t__ cte_name; int cte_value; } ;
typedef TYPE_13__ ctf_enum_t ;
struct TYPE_28__ {size_t cta_contents; size_t cta_index; int cta_nelems; } ;
typedef TYPE_14__ ctf_array_t ;
typedef scalar_t__ caddr_t ;
typedef int ardef_t ;
struct TYPE_30__ {int fn_vargs; TYPE_3__** fn_args; int fn_nargs; TYPE_3__* fn_ret; } ;
struct TYPE_29__ {int ad_nelems; TYPE_3__* ad_idxtype; TYPE_3__* ad_contents; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (TYPE_11__*) ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_12 (int,char*,int,...) ;
 int FUNC_13 (TYPE_9__*,size_t*,size_t*) ;
 int FUNC_14 (int ,TYPE_7__*) ;
 TYPE_7__* FUNC_15 (int *) ;
 int FUNC_16 (int *,TYPE_3__*) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (char*,int) ;
 void* FUNC_20 (int) ;
 void* FUNC_21 (int) ;
 void* FUNC_22 (scalar_t__) ;

__attribute__((used)) static void
FUNC_23(ctf_header_t *VAR_23, tdata_t *VAR_24, tdesc_t **VAR_25, int VAR_26,
    caddr_t VAR_27, int VAR_28)
{
 caddr_t VAR_29 = VAR_27 + VAR_23->cth_typeoff;
 size_t VAR_30 = VAR_23->cth_stroff - VAR_23->cth_typeoff;
 caddr_t VAR_31 = VAR_27 + VAR_23->cth_stroff;
 caddr_t VAR_32 = VAR_29;
 tdesc_t *VAR_33;
 uint_t VAR_34;
 uint_t VAR_35;
 size_t VAR_36, VAR_37;
 int VAR_38;
 int VAR_39 = 0;
 tid_t VAR_40, VAR_41;
 int VAR_42, VAR_43;
 int VAR_44;

 elist_t **VAR_45;
 mlist_t **VAR_46;
 intr_t *VAR_47;

 ctf_type_t *VAR_48;
 ctf_array_t *VAR_49;
 ctf_enum_t *VAR_50;





 if (VAR_28 == 0)
  VAR_28 = VAR_7;

 for (VAR_32 = VAR_29, VAR_38 = 0, VAR_40 = 1; VAR_32 < VAR_29 + VAR_30; VAR_38++, VAR_40++) {
  if (VAR_40 > VAR_28)
   break;

  if (VAR_40 >= VAR_26)
   FUNC_17("Reference to invalid type %d", VAR_40);

  void *VAR_51 = (void *) VAR_32;
  VAR_48 = VAR_51;

  FUNC_13(VAR_48, &VAR_36, &VAR_37);
  VAR_32 += VAR_37;

  VAR_33 = VAR_25[VAR_40];

  if (FUNC_11(VAR_48->ctt_name) != VAR_8)
   FUNC_17(
       "Unable to cope with non-zero strtab id");
  if (FUNC_10(VAR_48->ctt_name) != 0) {
   VAR_33->t_name =
       FUNC_22(VAR_31 + FUNC_10(VAR_48->ctt_name));
  } else
   VAR_33->t_name = ((void*)0);

  VAR_42 = FUNC_4(VAR_48->ctt_info);
  VAR_43 = FUNC_5(VAR_48->ctt_info);

  switch (VAR_42) {
  case 135:
   VAR_33->t_type = VAR_14;
   VAR_33->t_size = VAR_36;

   VAR_51 = (void *) VAR_32;
   VAR_34 = *((uint_t *)VAR_51);
   VAR_32 += sizeof (uint_t);
   VAR_35 = FUNC_7(VAR_34);

   VAR_47 = FUNC_21(sizeof (intr_t));
   VAR_47->intr_type = VAR_15;
   VAR_47->intr_signed = (VAR_35 & VAR_4) ? 1 : 0;

   if (VAR_35 & VAR_3)
    VAR_47->intr_iformat = 'c';
   else if (VAR_35 & VAR_2)
    VAR_47->intr_iformat = 'b';
   else if (VAR_35 & VAR_5)
    VAR_47->intr_iformat = 'v';
   else
    VAR_47->intr_iformat = '\0';

   VAR_47->intr_offset = FUNC_8(VAR_34);
   VAR_47->intr_nbits = FUNC_6(VAR_34);
   VAR_33->t_intr = VAR_47;
   break;

  case 138:
   VAR_33->t_type = VAR_14;
   VAR_33->t_size = VAR_36;

   VAR_51 = (void *) VAR_32;
   VAR_34 = *((uint_t *)VAR_51);
   VAR_32 += sizeof (uint_t);

   VAR_47 = FUNC_20(sizeof (intr_t));
   VAR_47->intr_type = VAR_16;
   VAR_47->intr_fformat = FUNC_1(VAR_34);
   VAR_47->intr_offset = FUNC_2(VAR_34);
   VAR_47->intr_nbits = FUNC_0(VAR_34);
   VAR_33->t_intr = VAR_47;
   break;

  case 134:
   VAR_33->t_type = VAR_17;
   VAR_33->t_tdesc = VAR_25[VAR_48->ctt_type];
   break;

  case 141:
   VAR_33->t_type = VAR_0;
   VAR_33->t_size = VAR_36;

   VAR_51 = (void *) VAR_32;
   VAR_49 = VAR_51;
   VAR_32 += sizeof (ctf_array_t);

   VAR_33->t_ardef = FUNC_21(sizeof (ardef_t));
   VAR_33->t_ardef->ad_contents = VAR_25[VAR_49->cta_contents];
   VAR_33->t_ardef->ad_idxtype = VAR_25[VAR_49->cta_index];
   VAR_33->t_ardef->ad_nelems = VAR_49->cta_nelems;
   break;

  case 132:
  case 130:
   VAR_33->t_type = (VAR_42 == 132 ? VAR_19 : VAR_21);
   VAR_33->t_size = VAR_36;

   if (VAR_36 < VAR_6) {
    for (VAR_44 = 0, VAR_46 = &VAR_33->t_members; VAR_44 < VAR_43;
        VAR_44++, VAR_46 = &((*VAR_46)->ml_next)) {
     VAR_51 = (void *) VAR_32;
     ctf_member_t *VAR_52 = VAR_51;
     VAR_32 += sizeof (ctf_member_t);

     *VAR_46 = FUNC_21(sizeof (mlist_t));
     (*VAR_46)->ml_name = FUNC_22(VAR_31 +
         VAR_52->ctm_name);
     (*VAR_46)->ml_type = VAR_25[VAR_52->ctm_type];
     (*VAR_46)->ml_offset = VAR_52->ctm_offset;
     (*VAR_46)->ml_size = 0;
    }
   } else {
    for (VAR_44 = 0, VAR_46 = &VAR_33->t_members; VAR_44 < VAR_43;
        VAR_44++, VAR_46 = &((*VAR_46)->ml_next)) {
     VAR_51 = (void *) VAR_32;
     ctf_lmember_t *VAR_53 = VAR_51;
     VAR_32 += sizeof (ctf_lmember_t);

     *VAR_46 = FUNC_21(sizeof (mlist_t));
     (*VAR_46)->ml_name = FUNC_22(VAR_31 +
         VAR_53->ctlm_name);
     (*VAR_46)->ml_type =
         VAR_25[VAR_53->ctlm_type];
     (*VAR_46)->ml_offset =
         (int)FUNC_9(VAR_53);
     (*VAR_46)->ml_size = 0;
    }
   }

   *VAR_46 = ((void*)0);
   break;

  case 139:
   VAR_33->t_type = VAR_9;
   VAR_33->t_size = VAR_36;

   for (VAR_44 = 0, VAR_45 = &VAR_33->t_emem; VAR_44 < VAR_43;
       VAR_44++, VAR_45 = &((*VAR_45)->el_next)) {
    VAR_51 = (void *) VAR_32;
    VAR_50 = VAR_51;
    VAR_32 += sizeof (ctf_enum_t);

    *VAR_45 = FUNC_21(sizeof (elist_t));
    (*VAR_45)->el_name = FUNC_22(VAR_31 + VAR_50->cte_name);
    (*VAR_45)->el_number = VAR_50->cte_value;
   }
   *VAR_45 = ((void*)0);
   break;

  case 137:
   VAR_33->t_type = VAR_10;
   FUNC_16(&VAR_24->td_fwdlist, VAR_33);
   break;

  case 131:
   VAR_33->t_type = VAR_20;
   VAR_33->t_tdesc = VAR_25[VAR_48->ctt_type];
   break;

  case 128:
   VAR_33->t_type = VAR_22;
   VAR_33->t_tdesc = VAR_25[VAR_48->ctt_type];
   break;

  case 140:
   VAR_33->t_type = VAR_1;
   VAR_33->t_tdesc = VAR_25[VAR_48->ctt_type];
   break;

  case 136:
   VAR_33->t_type = VAR_11;
   VAR_33->t_fndef = FUNC_20(sizeof (fndef_t));
   VAR_33->t_fndef->fn_ret = VAR_25[VAR_48->ctt_type];

   VAR_51 = (void *) (VAR_32 + (sizeof (ushort_t) * (VAR_43 - 1)));
   if (VAR_43 > 0 && *(ushort_t *)VAR_51 == 0)
    VAR_33->t_fndef->fn_vargs = 1;

   VAR_33->t_fndef->fn_nargs = VAR_43 - VAR_33->t_fndef->fn_vargs;
   VAR_33->t_fndef->fn_args = FUNC_20(sizeof (tdesc_t) *
       VAR_43 - VAR_33->t_fndef->fn_vargs);

   for (VAR_44 = 0; VAR_44 < VAR_43; VAR_44++) {
    VAR_51 = (void *) VAR_32;
    VAR_41 = *(ushort_t *)VAR_51;
    VAR_32 += sizeof (ushort_t);

    if (VAR_41 != 0)
     VAR_33->t_fndef->fn_args[VAR_44] = VAR_25[VAR_41];
   }

   if (VAR_43 & 1)
    VAR_32 += sizeof (ushort_t);
   break;

  case 133:
   VAR_33->t_type = VAR_18;
   VAR_33->t_tdesc = VAR_25[VAR_48->ctt_type];
   break;

  case 129:
   break;

  default:
   FUNC_19("Can't parse unknown CTF type %d\n", VAR_42);
  }

  if (FUNC_3(VAR_48->ctt_info)) {
   iidesc_t *VAR_54 = FUNC_15(VAR_33->t_name);
   if (VAR_33->t_type == VAR_19 || VAR_33->t_type == VAR_21 ||
       VAR_33->t_type == VAR_9)
    VAR_54->ii_type = VAR_12;
   else
    VAR_54->ii_type = VAR_13;
   VAR_54->ii_dtype = VAR_33;
   FUNC_14(VAR_24->td_iihash, VAR_54);

   VAR_39++;
  }

  FUNC_12(3, "Resurrected %d %stype %s (%d)\n", VAR_33->t_type,
      (FUNC_3(VAR_48->ctt_info) ? "root " : ""),
      FUNC_18(VAR_33), VAR_33->t_id);
 }

 FUNC_12(3, "Resurrected %d types (%d were roots)\n", VAR_38, VAR_39);
}
