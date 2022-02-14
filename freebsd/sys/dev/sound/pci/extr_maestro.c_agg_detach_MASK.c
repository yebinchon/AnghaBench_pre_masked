
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct agg_info {int lock; int buf_dmat; int stat_dmat; int stat_map; int stat; int reg; int regid; int irq; int irqid; int ih; scalar_t__ active; } ;
typedef int device_t ;


 int FUNC_0 (struct agg_info*,int ,int) ;
 int FUNC_1 (struct agg_info*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct agg_info*) ;
 int FUNC_3 (struct agg_info*,int ) ;
 int FUNC_4 (struct agg_info*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct agg_info*,int ) ;
 int FUNC_10 (int *) ;
 struct agg_info* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_6)
{
 struct agg_info *VAR_7 = FUNC_11(VAR_6);
 int VAR_8;
 u_int16_t VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_3, 2);
 FUNC_1(VAR_7, VAR_3, 0, 2);

 FUNC_2(VAR_7);
 if (VAR_7->active) {
  FUNC_1(VAR_7, VAR_3, VAR_9, 2);
  FUNC_4(VAR_7);
  return VAR_0;
 }
 FUNC_4(VAR_7);

 VAR_8 = FUNC_12(VAR_6);
 if (VAR_8) {
  FUNC_1(VAR_7, VAR_3, VAR_9, 2);
  return VAR_8;
 }

 FUNC_2(VAR_7);
 FUNC_3(VAR_7, VAR_2);
 FUNC_4(VAR_7);

 FUNC_7(VAR_6, VAR_7->irq, VAR_7->ih);
 FUNC_6(VAR_6, VAR_5, VAR_7->irqid, VAR_7->irq);
 FUNC_6(VAR_6, VAR_4, VAR_7->regid, VAR_7->reg);
 FUNC_8(VAR_7->stat_dmat, VAR_7->stat, VAR_7->stat_map);
 FUNC_5(VAR_7->stat_dmat);
 FUNC_5(VAR_7->buf_dmat);
 FUNC_10(&VAR_7->lock);
 FUNC_9(VAR_7, VAR_1);
 return 0;
}
