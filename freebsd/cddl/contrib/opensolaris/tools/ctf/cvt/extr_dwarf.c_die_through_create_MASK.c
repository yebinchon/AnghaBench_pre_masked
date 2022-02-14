
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int t_type; int t_name; int t_flags; int t_size; int t_tdesc; } ;
typedef TYPE_2__ tdesc_t ;
struct TYPE_14__ {TYPE_2__* ii_dtype; int ii_name; int ii_type; } ;
typedef TYPE_3__ iidesc_t ;
struct TYPE_15__ {TYPE_1__* dw_td; int dw_ptrsz; } ;
typedef TYPE_4__ dwarf_t ;
struct TYPE_12__ {int td_iihash; } ;
typedef int Dwarf_Off ;
typedef int Dwarf_Die ;
typedef int * Dwarf_Attribute ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int ,int ,char const*,int) ;
 int * FUNC_1 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*) ;
 TYPE_3__* FUNC_5 (int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(dwarf_t *VAR_5, Dwarf_Die VAR_6, Dwarf_Off VAR_7, tdesc_t *VAR_8,
    int VAR_9, const char *VAR_10)
{
 Dwarf_Attribute VAR_11;

 FUNC_0(3, "die %llu <%llx>: creating %s type %d\n", VAR_7, VAR_7, VAR_10, VAR_9);

 VAR_8->t_type = VAR_9;

 if ((VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_0, 0)) != ((void*)0)) {
  VAR_8->t_tdesc = FUNC_2(VAR_5, VAR_6, VAR_0);
 } else {
  VAR_8->t_tdesc = FUNC_4(VAR_5);
 }

 if (VAR_9 == VAR_2)
  VAR_8->t_size = VAR_5->dw_ptrsz;

 VAR_8->t_flags |= VAR_3;

 if (VAR_9 == VAR_4) {
  iidesc_t *VAR_12 = FUNC_5(sizeof (iidesc_t));
  VAR_12->ii_type = VAR_1;
  VAR_12->ii_name = FUNC_6(VAR_8->t_name);
  VAR_12->ii_dtype = VAR_8;

  FUNC_3(VAR_5->dw_td->td_iihash, VAR_12);
 }
}
