
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int t_name; scalar_t__ t_id; } ;
typedef TYPE_1__ tdesc_t ;
struct TYPE_17__ {scalar_t__ dw_maxoff; } ;
typedef TYPE_2__ dwarf_t ;
struct TYPE_18__ {int dc_flags; int (* dc_create ) (TYPE_2__*,int ,scalar_t__,TYPE_1__*) ;} ;
typedef TYPE_3__ die_creator_t ;
typedef scalar_t__ Dwarf_Off ;
typedef scalar_t__ Dwarf_Half ;
typedef int Dwarf_Die ;


 int VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int ,scalar_t__,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (char*,scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(dwarf_t *VAR_1, Dwarf_Die VAR_2)
{
 Dwarf_Off VAR_3 = FUNC_2(VAR_1, VAR_2);
 const die_creator_t *VAR_4;
 Dwarf_Half VAR_5;
 tdesc_t *VAR_6;

 FUNC_0(3, "die %llu <%llx>: create_one\n", VAR_3, VAR_3);

 if (VAR_3 > VAR_1->dw_maxoff) {
  FUNC_8("illegal die offset %llu (max %llu)\n", VAR_3,
      VAR_1->dw_maxoff);
 }

 VAR_5 = FUNC_3(VAR_1, VAR_2);

 if ((VAR_4 = FUNC_4(VAR_5)) == ((void*)0)) {
  FUNC_0(2, "die %llu: ignoring tag type %x\n", VAR_3, VAR_5);
  return;
 }

 if ((VAR_6 = FUNC_7(VAR_1, VAR_3)) == ((void*)0) &&
     !(VAR_4->dc_flags & VAR_0)) {
  VAR_6 = FUNC_9(sizeof (tdesc_t));
  VAR_6->t_id = VAR_3;
  FUNC_6(VAR_1, VAR_6);
 }

 if (VAR_6 != ((void*)0))
  VAR_6->t_name = FUNC_1(VAR_1, VAR_2);

 VAR_4->dc_create(VAR_1, VAR_2, VAR_3, VAR_6);
}
