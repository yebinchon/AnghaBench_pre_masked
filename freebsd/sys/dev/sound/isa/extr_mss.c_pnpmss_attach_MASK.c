
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mss_info {int io_rid; int conf_rid; int drq1_rid; int drq2_rid; int password; int passwdreg; int optibase; int bd_flags; int bd_id; scalar_t__ irq_rid; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct mss_info*,int ) ;
 int FUNC_1 (struct mss_info*,int ) ;
 int FUNC_2 (int ) ;
 struct mss_info* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int ,struct mss_info*) ;
 int FUNC_5 (int ,struct mss_info*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_14)
{
 struct mss_info *VAR_15;

 VAR_15 = FUNC_3(sizeof(*VAR_15), VAR_11, VAR_12 | VAR_13);
 VAR_15->io_rid = 0;
 VAR_15->conf_rid = -1;
 VAR_15->irq_rid = 0;
 VAR_15->drq1_rid = 0;
 VAR_15->drq2_rid = 1;
 VAR_15->bd_id = VAR_4;

 switch (FUNC_2(VAR_14)) {
 case 0x0000630e:
 case 0x0001630e:
     VAR_15->bd_flags |= VAR_1;
     VAR_15->bd_id = VAR_3;
     break;

 case 0x2100a865:
     VAR_15->io_rid = 1;
     VAR_15->conf_rid = 4;
     VAR_15->bd_id = VAR_10;
     break;

 case 0x1110d315:
     VAR_15->io_rid = 1;
     VAR_15->bd_id = VAR_9;
     break;

 case 0x1093143e:
            VAR_15->bd_flags |= VAR_1;
         VAR_15->conf_rid = 3;
            VAR_15->bd_id = VAR_8;
     break;

 case 0x5092143e:
            VAR_15->io_rid = 1;
            VAR_15->conf_rid = 3;
     VAR_15->bd_id = VAR_7;
     break;

 case 0x0000143e:
     VAR_15->password = 0xe5;
     VAR_15->passwdreg = 3;
     VAR_15->optibase = 0xf0c;
     VAR_15->io_rid = 2;
     VAR_15->conf_rid = 3;
     VAR_15->bd_id = VAR_6;
     VAR_15->bd_flags |= VAR_0;
     if(FUNC_5(VAR_14, VAR_15) != 0) {
      FUNC_1(VAR_15, VAR_11);
      return VAR_2;
     }
     break;

 case 0x1022b839:
     VAR_15->io_rid = 1;
     break;

 case 0x01005407:

     if (FUNC_0(VAR_15, VAR_14) == -1) {
      FUNC_1(VAR_15, VAR_11);
      return VAR_2;
     }

     VAR_15->bd_flags |= VAR_1;
     VAR_15->io_rid = 2;
     break;
 case 0x01000000:
     VAR_15->drq2_rid = -1;
            break;


        default:
     VAR_15->bd_flags |= VAR_1;
     break;
 }
     return FUNC_4(VAR_14, VAR_15);
}
