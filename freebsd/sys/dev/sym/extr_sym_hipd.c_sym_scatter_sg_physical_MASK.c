
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int hcb_p ;
typedef TYPE_3__* ccb_p ;
struct TYPE_10__ {scalar_t__ ds_addr; scalar_t__ ds_len; } ;
typedef TYPE_4__ bus_dma_segment_t ;
struct TYPE_8__ {TYPE_1__* data; } ;
struct TYPE_9__ {int segments; TYPE_2__ phys; } ;
struct TYPE_7__ {void* size; void* addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(hcb_p VAR_5, ccb_p VAR_6, bus_dma_segment_t *VAR_7, int VAR_8)
{
 u_long VAR_9, VAR_10, VAR_11;
 u_long VAR_12;
 int VAR_13, VAR_14;

 FUNC_0(VAR_2);

 VAR_13 = VAR_4 - 1;
 VAR_14 = VAR_8 - 1;
 VAR_9 = VAR_7[VAR_14].ds_addr;
 VAR_10 = VAR_9 + VAR_7[VAR_14].ds_len;

 while (VAR_13 >= 0) {
  VAR_11 = FUNC_3(VAR_10 - 1, VAR_3);
  if (VAR_11 <= VAR_9)
   VAR_11 = VAR_9;
  VAR_12 = VAR_10 - VAR_11;
  if (VAR_0 & VAR_1) {
   FUNC_2 ("%s scatter: paddr=%lx len=%ld\n",
    FUNC_4(VAR_5), VAR_11, VAR_12);
  }
  VAR_6->phys.data[VAR_13].addr = FUNC_1(VAR_11);
  VAR_6->phys.data[VAR_13].size = FUNC_1(VAR_12);
  --VAR_13;
  if (VAR_11 == VAR_9) {
   if (--VAR_14 < 0)
    break;
   VAR_9 = VAR_7[VAR_14].ds_addr;
   VAR_10 = VAR_9 + VAR_7[VAR_14].ds_len;
  }
  else
   VAR_10 = VAR_11;
 }

 VAR_6->segments = VAR_4 - 1 - VAR_13;

 return VAR_14 >= 0 ? -1 : 0;
}
