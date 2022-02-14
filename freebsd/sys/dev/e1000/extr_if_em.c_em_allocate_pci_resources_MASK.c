
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {void* io_bus_space_handle; void* io_bus_space_tag; void* mem_bus_space_handle; void* mem_bus_space_tag; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_5__ {TYPE_3__* back; scalar_t__ io_base; TYPE_1__ mac; int * hw_addr; } ;
struct adapter {TYPE_3__ osdep; TYPE_2__ hw; int * ioport; int * memory; } ;
typedef int if_ctx_t ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int ) ;
 struct adapter* FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int) ;
 void* FUNC_8 (int *) ;
 void* FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(if_ctx_t VAR_9)
{
 struct adapter *VAR_10 = FUNC_6(VAR_9);
 device_t VAR_11 = FUNC_5(VAR_9);
 int VAR_12, VAR_13;

 VAR_12 = FUNC_2(0);
 VAR_10->memory = FUNC_3(VAR_11, VAR_6,
     &VAR_12, VAR_4);
 if (VAR_10->memory == ((void*)0)) {
  FUNC_4(VAR_11, "Unable to allocate bus resource: memory\n");
  return (VAR_2);
 }
 VAR_10->osdep.mem_bus_space_tag = FUNC_9(VAR_10->memory);
 VAR_10->osdep.mem_bus_space_handle =
     FUNC_8(VAR_10->memory);
 VAR_10->hw.hw_addr = (u8 *)&VAR_10->osdep.mem_bus_space_handle;


 if (VAR_10->hw.mac.type < VAR_8 &&
     VAR_10->hw.mac.type > VAR_7) {

  for (VAR_12 = FUNC_2(0); VAR_12 < VAR_3;) {
   VAR_13 = FUNC_7(VAR_11, VAR_12, 4);
   if (FUNC_1(VAR_13) == VAR_1) {
    break;
   }
   VAR_12 += 4;

   if (FUNC_0(VAR_13) == VAR_0)
    VAR_12 += 4;
  }
  if (VAR_12 >= VAR_3) {
   FUNC_4(VAR_11, "Unable to locate IO BAR\n");
   return (VAR_2);
  }
  VAR_10->ioport = FUNC_3(VAR_11, VAR_5,
      &VAR_12, VAR_4);
  if (VAR_10->ioport == ((void*)0)) {
   FUNC_4(VAR_11, "Unable to allocate bus resource: "
       "ioport\n");
   return (VAR_2);
  }
  VAR_10->hw.io_base = 0;
  VAR_10->osdep.io_bus_space_tag =
      FUNC_9(VAR_10->ioport);
  VAR_10->osdep.io_bus_space_handle =
      FUNC_8(VAR_10->ioport);
 }

 VAR_10->hw.back = &VAR_10->osdep;

 return (0);
}
