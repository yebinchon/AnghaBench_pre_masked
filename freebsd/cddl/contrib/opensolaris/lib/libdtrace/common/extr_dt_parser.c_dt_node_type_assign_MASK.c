
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef int uint64_t ;
struct TYPE_6__ {int dn_flags; scalar_t__ dn_type; int * dn_ctfp; } ;
typedef TYPE_1__ dt_node_t ;
typedef scalar_t__ ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_7__ {int cte_bits; int cte_format; } ;
typedef TYPE_2__ ctf_encoding_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_8__ {int pcb_hdl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int *,scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 TYPE_3__* VAR_14 ;

void
FUNC_5(dt_node_t *VAR_15, ctf_file_t *VAR_16, ctf_id_t VAR_17,
    boolean_t VAR_18)
{
 ctf_id_t VAR_19 = FUNC_4(VAR_16, VAR_17);
 uint_t VAR_20 = FUNC_3(VAR_16, VAR_19);
 ctf_encoding_t VAR_21;

 VAR_15->dn_flags &=
     ~(VAR_11 | VAR_10 | VAR_8 | VAR_12);

 if (VAR_20 == VAR_5 && FUNC_2(VAR_16, VAR_19, &VAR_21) == 0) {
  size_t VAR_22 = VAR_21.cte_bits / VAR_13;

  if (VAR_22 > 8 || (VAR_21.cte_bits % VAR_13) != 0 || (VAR_22 & (VAR_22 - 1)))
   VAR_15->dn_flags |= VAR_8;

  if (VAR_21.cte_format & VAR_0)
   VAR_15->dn_flags |= VAR_11;
 }

 if (VAR_20 == VAR_2 && FUNC_2(VAR_16, VAR_19, &VAR_21) == 0) {
  if (VAR_21.cte_bits / VAR_13 > sizeof (uint64_t))
   VAR_15->dn_flags |= VAR_10;
 }

 if (VAR_20 == VAR_6 || VAR_20 == VAR_7 ||
     VAR_20 == VAR_3 ||
     VAR_20 == VAR_1 || VAR_20 == VAR_4)
  VAR_15->dn_flags |= VAR_10;
 else if (VAR_14 != ((void*)0) && VAR_16 == FUNC_0(VAR_14->pcb_hdl) &&
     VAR_17 == FUNC_1(VAR_14->pcb_hdl))
  VAR_15->dn_flags |= VAR_10;

 if (VAR_18)
  VAR_15->dn_flags |= VAR_12;

 VAR_15->dn_flags |= VAR_9;
 VAR_15->dn_ctfp = VAR_16;
 VAR_15->dn_type = VAR_17;
}
