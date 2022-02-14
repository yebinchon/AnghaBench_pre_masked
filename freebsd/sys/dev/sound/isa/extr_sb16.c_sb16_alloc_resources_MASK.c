
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sb_info {void* drq1; void* drq2; int bufsize; void* irq; void* io_base; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static int
FUNC_6(struct sb_info *VAR_6, device_t VAR_7)
{
 int VAR_8;

 VAR_8 = 0;
 if (!VAR_6->io_base)
      VAR_6->io_base = FUNC_0(VAR_7, VAR_4,
   &VAR_8, VAR_1);

 VAR_8 = 0;
 if (!VAR_6->irq)
      VAR_6->irq = FUNC_0(VAR_7, VAR_5, &VAR_8,
   VAR_1);

 VAR_8 = 0;
 if (!VAR_6->drq1)
      VAR_6->drq1 = FUNC_0(VAR_7, VAR_3, &VAR_8,
   VAR_1);

 VAR_8 = 1;
 if (!VAR_6->drq2)
         VAR_6->drq2 = FUNC_0(VAR_7, VAR_3, &VAR_8,
   VAR_1);

     if (VAR_6->io_base && VAR_6->drq1 && VAR_6->irq) {
  FUNC_1(FUNC_5(VAR_6->drq1));
  FUNC_2(FUNC_5(VAR_6->drq1), VAR_6->bufsize);

  if (VAR_6->drq2) {
   FUNC_1(FUNC_5(VAR_6->drq2));
   FUNC_2(FUNC_5(VAR_6->drq2), VAR_6->bufsize);
  } else {
   VAR_6->drq2 = VAR_6->drq1;
   FUNC_4(VAR_7, FUNC_3(VAR_7) | VAR_2);
  }
  return 0;
 } else return VAR_0;
}
