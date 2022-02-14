
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int dmac_reg; int dmac_rid; int dmac_type; int dmaa_reg; int dmaa_rid; int dmaa_type; int enh_reg; int enh_rid; int enh_type; int irq; int irqid; int ih; int parent_dmat; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct sc_info*,int ) ;
 struct sc_info* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sc_info*) ;
 int FUNC_7 (struct sc_info*,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2) {
 struct sc_info *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4) return VAR_4;

 VAR_3 = FUNC_4(VAR_2);
 FUNC_6(VAR_3);
 FUNC_7(VAR_3, 3);

 FUNC_0(VAR_3->parent_dmat);
 FUNC_2(VAR_2, VAR_3->irq, VAR_3->ih);
 FUNC_1(VAR_2, VAR_1, VAR_3->irqid, VAR_3->irq);
 FUNC_1(VAR_2, VAR_3->enh_type, VAR_3->enh_rid, VAR_3->enh_reg);
 FUNC_1(VAR_2, VAR_3->dmaa_type, VAR_3->dmaa_rid, VAR_3->dmaa_reg);
 FUNC_1(VAR_2, VAR_3->dmac_type, VAR_3->dmac_rid, VAR_3->dmac_reg);

 FUNC_3(VAR_3, VAR_0);

 return 0;
}
