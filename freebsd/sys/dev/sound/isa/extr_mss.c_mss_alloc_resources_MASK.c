
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mss_info {scalar_t__ io_rid; scalar_t__ irq_rid; scalar_t__ drq1_rid; scalar_t__ conf_rid; scalar_t__ drq2_rid; void* drq1; void* drq2; int bd_flags; int bufsize; void* conf_base; void* irq; void* io_base; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,int ,scalar_t__*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int
FUNC_4(struct mss_info *VAR_5, device_t VAR_6)
{
     int VAR_7, VAR_8, VAR_9 = 1;
 if (!VAR_5->io_base)
      VAR_5->io_base = FUNC_0(VAR_6, VAR_3,
            &VAR_5->io_rid, VAR_1);
 if (!VAR_5->irq)
      VAR_5->irq = FUNC_0(VAR_6, VAR_4,
        &VAR_5->irq_rid, VAR_1);
 if (!VAR_5->drq1)
      VAR_5->drq1 = FUNC_0(VAR_6, VAR_2,
         &VAR_5->drq1_rid,
         VAR_1);
     if (VAR_5->conf_rid >= 0 && !VAR_5->conf_base)
         VAR_5->conf_base = FUNC_0(VAR_6, VAR_3,
       &VAR_5->conf_rid,
       VAR_1);
     if (VAR_5->drq2_rid >= 0 && !VAR_5->drq2)
         VAR_5->drq2 = FUNC_0(VAR_6, VAR_2,
         &VAR_5->drq2_rid,
         VAR_1);

 if (!VAR_5->io_base || !VAR_5->drq1 || !VAR_5->irq) VAR_9 = 0;
 if (VAR_5->conf_rid >= 0 && !VAR_5->conf_base) VAR_9 = 0;
 if (VAR_5->drq2_rid >= 0 && !VAR_5->drq2) VAR_9 = 0;

 if (VAR_9) {
  VAR_7 = FUNC_3(VAR_5->drq1);
  FUNC_1(VAR_7);
  FUNC_2(VAR_7, VAR_5->bufsize);
  VAR_5->bd_flags &= ~VAR_0;
  if (VAR_5->drq2) {
   VAR_8 = FUNC_3(VAR_5->drq2);
   FUNC_1(VAR_8);
   FUNC_2(VAR_8, VAR_5->bufsize);
   VAR_5->bd_flags |= VAR_0;
  } else VAR_5->drq2 = VAR_5->drq1;
 }
     return VAR_9;
}
