
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ plugtime; } ;
struct libusb20_device {TYPE_1__ session_data; int file_ctrl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__*) ;

__attribute__((used)) static int
FUNC_2(struct libusb20_device *VAR_2)
{
 uint32_t VAR_3;
 int VAR_4 = 0;

 if (FUNC_1(VAR_2->file_ctrl, FUNC_0(VAR_1), &VAR_3)) {
  VAR_4 = VAR_0;
  goto done;
 }

 if (VAR_2->session_data.plugtime != VAR_3) {
  VAR_4 = VAR_0;
  goto done;
 }
done:
 return (VAR_4);
}
