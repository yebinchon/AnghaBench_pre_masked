
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uinput_cdev_state {int ucs_state; int ucs_evdev; } ;
struct input_id {int version; int product; int vendor; int bustype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(struct uinput_cdev_state *VAR_2, struct input_id *VAR_3,
    char *VAR_4, uint32_t VAR_5)
{

 if (VAR_4[0] == 0)
  return (VAR_0);

 FUNC_1(VAR_2->ucs_evdev, VAR_4);
 FUNC_0(VAR_2->ucs_evdev, VAR_3->bustype, VAR_3->vendor, VAR_3->product,
     VAR_3->version);
 VAR_2->ucs_state = VAR_1;

 return (0);
}
