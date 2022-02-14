
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {struct ahc_platform_data* platform_data; int dev_softc; } ;
struct ahc_platform_data {int * eh; int * sim; int path; int * sim_b; int path_b; int * irq; int irq_res_type; int * regs; int regs_res_id; int regs_res_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ahc_platform_data*,int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void
FUNC_8(struct ahc_softc *VAR_4)
{
 struct ahc_platform_data *VAR_5;

 VAR_5 = VAR_4->platform_data;
 if (VAR_5 != ((void*)0)) {
  if (VAR_5->regs != ((void*)0))
   FUNC_1(VAR_4->dev_softc,
          VAR_5->regs_res_type,
          VAR_5->regs_res_id,
          VAR_5->regs);

  if (VAR_5->irq != ((void*)0))
   FUNC_1(VAR_4->dev_softc,
          VAR_5->irq_res_type,
          0, VAR_5->irq);

  if (VAR_5->sim_b != ((void*)0)) {
   FUNC_5(VAR_0, VAR_5->path_b, ((void*)0));
   FUNC_7(VAR_5->path_b);
   FUNC_6(FUNC_3(VAR_5->sim_b));
   FUNC_2(VAR_5->sim_b, VAR_2);
  }
  if (VAR_5->sim != ((void*)0)) {
   FUNC_5(VAR_0, VAR_5->path, ((void*)0));
   FUNC_7(VAR_5->path);
   FUNC_6(FUNC_3(VAR_5->sim));
   FUNC_2(VAR_5->sim, VAR_2);
  }
  if (VAR_5->eh != ((void*)0))
   FUNC_0(VAR_3, VAR_5->eh);
  FUNC_4(VAR_4->platform_data, VAR_1);
 }
}
