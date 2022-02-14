
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ess_info {int bufsize; void* drq2; void* drq1; void* irq; void* io_base; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int
FUNC_4(struct ess_info *VAR_5, device_t VAR_6)
{
 int VAR_7;

 VAR_7 = 0;
 if (!VAR_5->io_base)
      VAR_5->io_base = FUNC_0(VAR_6, VAR_3,
           &VAR_7, VAR_1);
 VAR_7 = 0;
 if (!VAR_5->irq)
      VAR_5->irq = FUNC_0(VAR_6, VAR_4,
       &VAR_7, VAR_1);
 VAR_7 = 0;
 if (!VAR_5->drq1)
      VAR_5->drq1 = FUNC_0(VAR_6, VAR_2,
        &VAR_7, VAR_1);
 VAR_7 = 1;
 if (!VAR_5->drq2)
         VAR_5->drq2 = FUNC_0(VAR_6, VAR_2,
        &VAR_7, VAR_1);

     if (VAR_5->io_base && VAR_5->drq1 && VAR_5->irq) {
    FUNC_1(FUNC_3(VAR_5->drq1));
  FUNC_2(FUNC_3(VAR_5->drq1), VAR_5->bufsize);

  if (VAR_5->drq2) {
   FUNC_1(FUNC_3(VAR_5->drq2));
   FUNC_2(FUNC_3(VAR_5->drq2), VAR_5->bufsize);
  }

  return 0;
 } else return VAR_0;
}
