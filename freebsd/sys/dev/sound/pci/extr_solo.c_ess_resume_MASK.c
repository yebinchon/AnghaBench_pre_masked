
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ess_info {int io; scalar_t__ newspeed; int vc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ess_info*) ;
 scalar_t__ FUNC_1 (struct ess_info*) ;
 int FUNC_2 (struct ess_info*,int,int) ;
 int FUNC_3 (struct ess_info*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,int) ;
 struct ess_info* FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_4)
{
 uint16_t VAR_5;
 struct ess_info *VAR_6 = FUNC_6(VAR_4);

 FUNC_0(VAR_6);
 VAR_5 = FUNC_8(VAR_6->vc) | 1;
 FUNC_5(VAR_4, VAR_3, 0x805f, 2);
 FUNC_5(VAR_4, VAR_2, VAR_5, 2);
 FUNC_5(VAR_4, VAR_1, 0, 2);

     if (FUNC_1(VAR_6)) {
  FUNC_3(VAR_6);
  goto no;
 }
 FUNC_3(VAR_6);
     if (FUNC_4(VAR_4))
  goto no;
 FUNC_0(VAR_6);
 if (VAR_6->newspeed)
  FUNC_2(VAR_6, 0x71, 0x2a);

 FUNC_7(VAR_6->io, 0x7, 0xb0, 1);
 FUNC_3(VAR_6);

 return 0;
 no:
 return VAR_0;
}
