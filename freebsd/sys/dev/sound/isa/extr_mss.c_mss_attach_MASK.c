
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mss_info {int conf_rid; int drq2_rid; int bd_id; scalar_t__ drq1_rid; scalar_t__ irq_rid; scalar_t__ io_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int,int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int ,int) ;
 int FUNC_3 (int ,struct mss_info*) ;
 int FUNC_4 (int ,struct mss_info*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_10)
{
     struct mss_info *VAR_11;
     int VAR_12 = FUNC_1(VAR_10);

     VAR_11 = (struct mss_info *)FUNC_2(sizeof *VAR_11, VAR_6, VAR_7 | VAR_8);
     if (!VAR_11) return VAR_4;

     VAR_11->io_rid = 0;
     VAR_11->conf_rid = -1;
     VAR_11->irq_rid = 0;
     VAR_11->drq1_rid = 0;
     VAR_11->drq2_rid = -1;
     if (VAR_12 & VAR_3) {
         FUNC_0(VAR_10, VAR_9, 1,
                 VAR_12 & VAR_2, 1);
  VAR_11->drq2_rid = 1;
     }
     VAR_11->bd_id = (FUNC_1(VAR_10) & VAR_0) >> VAR_1;
     if (VAR_11->bd_id == VAR_5) FUNC_4(VAR_10, VAR_11);
     return FUNC_3(VAR_10, VAR_11);
}
