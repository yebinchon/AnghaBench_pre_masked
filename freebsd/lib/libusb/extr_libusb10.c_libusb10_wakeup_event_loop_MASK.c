
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int * ctrl_pipe; } ;
typedef TYPE_1__ libusb_context ;
typedef int dummy ;


 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_2(libusb_context *VAR_1)
{
 uint8_t VAR_2 = 0;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->ctrl_pipe[1], &VAR_2, sizeof(VAR_2));
 if (VAR_3 < (int)sizeof(VAR_2)) {

  FUNC_0(VAR_1, VAR_0, "Waking up event loop failed!");
 }
}
