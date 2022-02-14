
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int t_size; int t_flags; TYPE_2__* t_ardef; int t_type; int t_id; } ;
typedef TYPE_1__ tdesc_t ;
typedef int dwarf_t ;
struct TYPE_6__ {int ad_nelems; TYPE_1__* ad_contents; int ad_idxtype; } ;
typedef TYPE_2__ ardef_t ;
typedef void* Dwarf_Unsigned ;
typedef void* Dwarf_Signed ;
typedef int * Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *,int ,void**,int ) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *,int ,void**,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int ) ;
 void* FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(dwarf_t *VAR_5, Dwarf_Die VAR_6, tdesc_t *VAR_7,
    tdesc_t *VAR_8)
{
 Dwarf_Unsigned VAR_9;
 Dwarf_Signed VAR_10;
 tdesc_t *VAR_11 = ((void*)0);
 Dwarf_Die VAR_12;
 ardef_t *VAR_13;

 if ((VAR_12 = FUNC_2(VAR_5, VAR_6)) == ((void*)0)) {
  VAR_11 = VAR_7;
 } else if (FUNC_4(VAR_5, VAR_12) == VAR_3) {
  VAR_11 = FUNC_9(sizeof (tdesc_t));
  VAR_11->t_id = FUNC_6(VAR_5);
  FUNC_0(3, "die %llu: creating new type %u for sub-dimension\n",
      FUNC_1(VAR_5, VAR_12), VAR_11->t_id);
  FUNC_10(VAR_5, VAR_12, VAR_7, VAR_11);
 } else {
  FUNC_8("die %llu: unexpected non-subrange node in array\n",
      FUNC_1(VAR_5, VAR_12));
 }

 VAR_8->t_type = VAR_0;
 VAR_8->t_ardef = VAR_13 = FUNC_9(sizeof (ardef_t));
 if (FUNC_5(VAR_5, VAR_6, VAR_2, &VAR_9, 0))
  VAR_13->ad_nelems = VAR_9 + 1;
 else if (FUNC_3(VAR_5, VAR_6, VAR_2, &VAR_10, 0))
  VAR_13->ad_nelems = VAR_10 + 1;
 else if (FUNC_5(VAR_5, VAR_6, VAR_1, &VAR_9, 0))
  VAR_13->ad_nelems = VAR_9;
 else if (FUNC_3(VAR_5, VAR_6, VAR_1, &VAR_10, 0))
  VAR_13->ad_nelems = VAR_10;
 else
  VAR_13->ad_nelems = 0;





 VAR_13->ad_idxtype = FUNC_7(VAR_5);
 VAR_13->ad_contents = VAR_11;

 if (VAR_13->ad_contents->t_size != 0) {
  VAR_8->t_size = VAR_13->ad_contents->t_size * VAR_13->ad_nelems;
  VAR_8->t_flags |= VAR_4;
 }
}
