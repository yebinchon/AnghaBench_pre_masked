
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int t_id; } ;
typedef TYPE_3__ tdesc_t ;
struct TYPE_13__ {int md_flags; int md_tdtbr; TYPE_2__* md_tgt; TYPE_1__* md_parent; int md_ta; } ;
typedef TYPE_4__ merge_cb_data_t ;
struct TYPE_11__ {int td_idhash; } ;
struct TYPE_10__ {int td_idhash; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int,char*,int,int,int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,void*,void*) ;
 int FUNC_4 (int ,TYPE_3__**) ;

__attribute__((used)) static int
FUNC_5(tdesc_t **VAR_1, tdesc_t *VAR_2, int VAR_3, tdesc_t *VAR_4,
    merge_cb_data_t *VAR_5)
{
 tdesc_t *VAR_6 = ((void*)0);
 tdesc_t VAR_7;
 int VAR_8 = VAR_2->t_id;

 if (VAR_8 == VAR_3) {
  *VAR_1 = VAR_4;
  return (1);
 }

 if ((VAR_7.t_id = FUNC_2(VAR_5->md_ta, VAR_8)) == 0)
  FUNC_0("failed to get mapping for tid %d <%x>\n", VAR_8, VAR_8);

 if (!FUNC_3(VAR_5->md_parent->td_idhash, (void *)&VAR_7,
     (void *)&VAR_6) && (!(VAR_5->md_flags & VAR_0) ||
     !FUNC_3(VAR_5->md_tgt->td_idhash, (void *)&VAR_7,
     (void *)&VAR_6))) {
  FUNC_1(3, "Remap couldn't find %d <%x> (from %d <%x>)\n", VAR_7.t_id,
      VAR_7.t_id, VAR_8, VAR_8);
  *VAR_1 = VAR_2;
  FUNC_4(VAR_5->md_tdtbr, VAR_1);
  return (0);
 }

 *VAR_1 = VAR_6;
 return (1);
}
