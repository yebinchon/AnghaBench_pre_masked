
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int td_ref; int td_layouthash; int td_iihash; void* td_curemark; void* td_curvgen; } ;
typedef TYPE_1__ tdata_t ;
struct TYPE_8__ {void* md_ta; void* md_fdida; TYPE_1__* md_tgt; int md_flags; TYPE_1__* md_parent; } ;
typedef TYPE_2__ merge_cb_data_t ;


 void* FUNC_0 (void*,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int *,int *) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*) ;
 int VAR_2 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,TYPE_2__*) ;

void
FUNC_8(tdata_t *VAR_3, tdata_t *VAR_4, tdata_t *VAR_5, int VAR_6)
{
 merge_cb_data_t VAR_7;

 VAR_3->td_ref++;
 VAR_4->td_ref++;
 if (VAR_5)
  VAR_5->td_ref++;

 FUNC_4(VAR_3->td_ref == 1 && VAR_4->td_ref == 1 &&
     (VAR_5 == ((void*)0) || VAR_5->td_ref == 1));

 VAR_7.md_parent = VAR_4;
 VAR_7.md_tgt = (VAR_5 ? VAR_5 : VAR_4);
 VAR_7.md_ta = FUNC_2(((void*)0), ((void*)0));
 VAR_7.md_fdida = FUNC_2(((void*)0), ((void*)0));
 VAR_7.md_flags = 0;

 if (VAR_6)
  VAR_7.md_flags |= VAR_1;
 if (VAR_5)
  VAR_7.md_flags |= VAR_0;

 VAR_4->td_curvgen = FUNC_0(VAR_4->td_curvgen, VAR_3->td_curvgen);
 VAR_4->td_curemark = FUNC_0(VAR_4->td_curemark, VAR_3->td_curemark);

 FUNC_7(VAR_3->td_iihash, &VAR_7);

 if (VAR_2 >= 3) {
  FUNC_5(3, "Type association stats\n");
  FUNC_3(VAR_7.md_ta, 0);
  FUNC_5(3, "Layout hash stats\n");
  FUNC_6(VAR_7.md_tgt->td_layouthash, 1);
 }

 FUNC_1(VAR_7.md_fdida);
 FUNC_1(VAR_7.md_ta);

 VAR_3->td_ref--;
 VAR_4->td_ref--;
 if (VAR_5)
  VAR_5->td_ref--;
}
