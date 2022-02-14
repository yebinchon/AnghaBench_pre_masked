
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmcap ;
struct efi_tmcap {long tc_res; scalar_t__ tc_stz; } ;
typedef int device_t ;
struct TYPE_2__ {long tv_nsec; } ;


 int VAR_0 ;
 int FUNC_0 (struct efi_tmcap*,int) ;
 int FUNC_1 (int ,long,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct efi_tmcap*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6)
{
 struct efi_tmcap VAR_7;
 long VAR_8;
 int VAR_9;

 FUNC_0(&VAR_7, sizeof(VAR_7));
 if ((VAR_9 = FUNC_4(&VAR_7)) != 0) {
  FUNC_3(VAR_6, "cannot get EFI time capabilities");
  return (VAR_9);
 }


 if (VAR_7.tc_res == 0)
  VAR_8 = VAR_5;
 else if (VAR_7.tc_res > VAR_5)
  VAR_8 = 1;
 else
  VAR_8 = VAR_5 / VAR_7.tc_res;


 VAR_1.tv_nsec = (VAR_8 * VAR_4) / 2;


 VAR_2 = VAR_7.tc_stz;





 FUNC_1(VAR_6, VAR_8, VAR_0);
 if (VAR_2)
  FUNC_2(VAR_6, VAR_3 - VAR_4);

 return (0);
}
