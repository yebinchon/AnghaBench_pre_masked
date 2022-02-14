
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int va_mem_size; int va_mem_base; int va_io_size; int va_io_base; } ;
typedef TYPE_1__ video_adapter_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_4)
{
 video_adapter_t VAR_5;
 int VAR_6;


 if (FUNC_4(VAR_4))
  return (VAR_0);

 VAR_6 = FUNC_11(FUNC_2(VAR_4), &VAR_5, FUNC_1(VAR_4));
 if (VAR_6 == 0) {
  FUNC_3(VAR_4, "Generic ISA VGA");
  FUNC_0(VAR_4, VAR_1, 0,
     VAR_5.va_io_base, VAR_5.va_io_size);
  FUNC_0(VAR_4, VAR_2, 0,
     VAR_5.va_mem_base, VAR_5.va_mem_size);
  FUNC_10(VAR_4, VAR_3);
  FUNC_5(VAR_4, VAR_3);






 }
 return (VAR_6);
}
