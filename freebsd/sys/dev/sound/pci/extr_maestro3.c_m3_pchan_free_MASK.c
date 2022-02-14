
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_pchinfo {int dac_idx; struct sc_info* parent; } ;
struct sc_info {int pch_cnt; int rch_cnt; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sc_info*) ;
 int FUNC_2 (struct sc_info*) ;
 int FUNC_3 (struct sc_info*,int,int ) ;

__attribute__((used)) static int
FUNC_4(kobj_t VAR_4, void *VAR_5)
{
 struct sc_pchinfo *VAR_6 = VAR_5;
 struct sc_info *VAR_7 = VAR_6->parent;

 FUNC_1(VAR_7);
        FUNC_0(VAR_0, ("m3_pchan_free(dac=%d)\n", VAR_6->dac_idx));





 FUNC_3(VAR_7, VAR_2 +
   (VAR_7->pch_cnt - 1) + VAR_7->rch_cnt, 0);
 FUNC_3(VAR_7, VAR_1 +
   (VAR_7->pch_cnt - 1) + VAR_7->rch_cnt, 0);
 FUNC_3(VAR_7, VAR_3 + (VAR_7->pch_cnt-1), 0);
 VAR_7->pch_cnt--;
 FUNC_2(VAR_7);

 return (0);
}
