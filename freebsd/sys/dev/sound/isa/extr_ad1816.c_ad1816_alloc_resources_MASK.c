
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad1816_info {int bufsize; void* drq2; void* drq1; void* irq; void* io_base; int drq2_rid; int drq1_rid; int irq_rid; int io_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static int
FUNC_6(struct ad1816_info *VAR_5, device_t VAR_6)
{
     int VAR_7 = 1, VAR_8, VAR_9;

 if (!VAR_5->io_base)
      VAR_5->io_base = FUNC_0(VAR_6,
   VAR_3, &VAR_5->io_rid, VAR_0);
 if (!VAR_5->irq)
      VAR_5->irq = FUNC_0(VAR_6, VAR_4,
   &VAR_5->irq_rid, VAR_0);
 if (!VAR_5->drq1)
      VAR_5->drq1 = FUNC_0(VAR_6, VAR_2,
   &VAR_5->drq1_rid, VAR_0);
     if (!VAR_5->drq2)
         VAR_5->drq2 = FUNC_0(VAR_6, VAR_2,
   &VAR_5->drq2_rid, VAR_0);

     if (!VAR_5->io_base || !VAR_5->drq1 || !VAR_5->irq) VAR_7 = 0;

 if (VAR_7) {
  VAR_8 = FUNC_5(VAR_5->drq1);
  FUNC_1(VAR_8);
  FUNC_2(VAR_8, VAR_5->bufsize);
  if (VAR_5->drq2) {
   VAR_9 = FUNC_5(VAR_5->drq2);
   FUNC_1(VAR_9);
   FUNC_2(VAR_9, VAR_5->bufsize);
  } else
   VAR_9 = VAR_8;
      if (VAR_8 == VAR_9)
   FUNC_4(VAR_6, FUNC_3(VAR_6) | VAR_1);
 }

     return VAR_7;
}
