
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct usb_quirk_entry {size_t* quirks; } ;
struct usb_gen_quirk {size_t index; int bcdDeviceHigh; int bcdDeviceLow; int pid; int vid; int quirkname; } ;
struct thread {int dummy; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {size_t* quirks; int hi_rev; int lo_rev; int pid; int vid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t VAR_6 ;

 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct usb_quirk_entry*,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 struct usb_quirk_entry* FUNC_6 (int ,int ,int ,int ,int) ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_7 (size_t) ;

__attribute__((used)) static int
FUNC_8(unsigned long VAR_11, caddr_t VAR_12,
    int VAR_13, struct thread *VAR_14)
{
 struct usb_gen_quirk *VAR_15;
 struct usb_quirk_entry *VAR_16;
 uint32_t VAR_17;
 uint32_t VAR_18;
 int VAR_19;

 switch (VAR_11) {
 case 130:
  VAR_15 = (void *)VAR_12;
  VAR_17 = VAR_15->index % VAR_7;
  VAR_18 = VAR_15->index / VAR_7;
  if (VAR_18 >= VAR_5) {
   return (VAR_0);
  }
  FUNC_0(&VAR_9);

  VAR_15->vid = VAR_10[VAR_18].vid;
  VAR_15->pid = VAR_10[VAR_18].pid;
  VAR_15->bcdDeviceLow = VAR_10[VAR_18].lo_rev;
  VAR_15->bcdDeviceHigh = VAR_10[VAR_18].hi_rev;
  FUNC_5(VAR_15->quirkname,
      FUNC_7(VAR_10[VAR_18].quirks[VAR_17]),
      sizeof(VAR_15->quirkname));
  FUNC_1(&VAR_9);
  return (0);

 case 128:
  VAR_15 = (void *)VAR_12;
  VAR_17 = VAR_15->index;
  if (VAR_17 >= VAR_6) {
   return (VAR_0);
  }
  FUNC_5(VAR_15->quirkname,
      FUNC_7(VAR_17), sizeof(VAR_15->quirkname));
  return (0);

 case 131:
  VAR_15 = (void *)VAR_12;


  VAR_19 = FUNC_3(VAR_8, VAR_3);
  if (VAR_19) {
   return (VAR_19);
  }

  for (VAR_18 = 0; VAR_18 != VAR_5; VAR_18++) {
   if (FUNC_4(VAR_15->quirkname, FUNC_7(VAR_18)) == 0) {
    break;
   }
  }
  if (VAR_18 == VAR_5) {
   return (VAR_0);
  }
  if (VAR_18 == VAR_4) {
   return (VAR_0);
  }
  FUNC_0(&VAR_9);
  VAR_16 = FUNC_6(VAR_15->vid, VAR_15->pid,
      VAR_15->bcdDeviceLow, VAR_15->bcdDeviceHigh, 1);
  if (VAR_16 == ((void*)0)) {
   FUNC_1(&VAR_9);
   return (VAR_0);
  }
  for (VAR_17 = 0; VAR_17 != VAR_7; VAR_17++) {
   if (VAR_16->quirks[VAR_17] == VAR_4) {
    VAR_16->quirks[VAR_17] = VAR_18;
    break;
   }
  }
  FUNC_1(&VAR_9);
  if (VAR_17 == VAR_7) {
   return (VAR_2);
  }
  return (0);

 case 129:
  VAR_15 = (void *)VAR_12;

  VAR_19 = FUNC_3(VAR_8, VAR_3);
  if (VAR_19) {
   return (VAR_19);
  }

  for (VAR_18 = 0; VAR_18 != VAR_5; VAR_18++) {
   if (FUNC_4(VAR_15->quirkname, FUNC_7(VAR_18)) == 0) {
    break;
   }
  }
  if (VAR_18 == VAR_5) {
   return (VAR_0);
  }
  if (VAR_18 == VAR_4) {
   return (VAR_0);
  }
  FUNC_0(&VAR_9);
  VAR_16 = FUNC_6(VAR_15->vid, VAR_15->pid,
      VAR_15->bcdDeviceLow, VAR_15->bcdDeviceHigh, 0);
  if (VAR_16 == ((void*)0)) {
   FUNC_1(&VAR_9);
   return (VAR_0);
  }
  for (VAR_17 = 0; VAR_17 != VAR_7; VAR_17++) {
   if (VAR_16->quirks[VAR_17] == VAR_18) {
    VAR_16->quirks[VAR_17] = VAR_4;
    break;
   }
  }
  if (VAR_17 == VAR_7) {
   FUNC_1(&VAR_9);
   return (VAR_2);
  }
  for (VAR_17 = 0; VAR_17 != VAR_7; VAR_17++) {
   if (VAR_16->quirks[VAR_17] != VAR_4) {
    break;
   }
  }
  if (VAR_17 == VAR_7) {

   FUNC_2(VAR_16, 0, sizeof(*VAR_16));
  }
  FUNC_1(&VAR_9);
  return (0);

 default:
  break;
 }
 return (VAR_1);
}
