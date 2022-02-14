
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct spicds_info {scalar_t__ type; int devinfo; int (* ctrl ) (int ,int,int,int ) ;scalar_t__ cif; int dev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct spicds_info*,int) ;
 int FUNC_3 (int ,int,int,int ) ;
 int FUNC_4 (int ,int,int,int ) ;
 int FUNC_5 (int ,int,int,int ) ;
 int FUNC_6 (int ,int,int,int ) ;
 int FUNC_7 (int ,int,int,int ) ;

__attribute__((used)) static void
FUNC_8(struct spicds_info *VAR_3, int VAR_4, u_int16_t VAR_5)
{
 int VAR_6;





 if (VAR_3->cif)
  VAR_3->ctrl(VAR_3->devinfo, 1, 1, 0);
 else
  VAR_3->ctrl(VAR_3->devinfo, 0, 1, 0);
 FUNC_0(1);
 if (VAR_3->type != VAR_2) {
 if (VAR_3->type == VAR_0) {

        FUNC_2(VAR_3, 0);
        FUNC_2(VAR_3, 1);
 }
 else if (VAR_3->type == VAR_1)
 {

        FUNC_2(VAR_3, 0);
        FUNC_2(VAR_3, 0);
 }
 else {

 FUNC_2(VAR_3, 1);
 FUNC_2(VAR_3, 0);
 }

 FUNC_2(VAR_3, 1);

 for (VAR_6 = 0x10; VAR_6 != 0; VAR_6 >>= 1)
  FUNC_2(VAR_3, VAR_4 & VAR_6);

 for (VAR_6 = 0x80; VAR_6 != 0; VAR_6 >>= 1)
  FUNC_2(VAR_3, VAR_5 & VAR_6);

 FUNC_0(1);
 }
 else {

        for (VAR_6 = 0x40; VAR_6 != 0; VAR_6 >>= 1)
                FUNC_2(VAR_3, VAR_4 & VAR_6);

        for (VAR_6 = 0x100; VAR_6 != 0; VAR_6 >>= 1)
                FUNC_2(VAR_3, VAR_5 & VAR_6);

        FUNC_0(1);
 }
 if (VAR_3->cif) {
  VAR_3->ctrl(VAR_3->devinfo, 0, 1, 0);
  FUNC_0(1);
  VAR_3->ctrl(VAR_3->devinfo, 1, 1, 0);
 }
 else {
  VAR_3->ctrl(VAR_3->devinfo, 1, 1, 0);
 }

 return;
}
