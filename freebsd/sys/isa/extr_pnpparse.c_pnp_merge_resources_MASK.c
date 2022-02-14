
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isa_config {int ic_nmem; int ic_nport; int ic_nirq; int ic_ndrq; int * ic_drqmask; int * ic_irqmask; int * ic_port; int * ic_mem; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_4, struct isa_config *VAR_5,
      struct isa_config *VAR_6)
{
 device_t VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_4);
 for (VAR_8 = 0; VAR_8 < VAR_5->ic_nmem; VAR_8++) {
  if (VAR_6->ic_nmem == VAR_2) {
   FUNC_1(VAR_7, "too many memory ranges\n");
   return;
  }
  VAR_6->ic_mem[VAR_6->ic_nmem] = VAR_5->ic_mem[VAR_8];
  VAR_6->ic_nmem++;
 }
 for (VAR_8 = 0; VAR_8 < VAR_5->ic_nport; VAR_8++) {
  if (VAR_6->ic_nport == VAR_3) {
   FUNC_1(VAR_7, "too many port ranges\n");
   return;
  }
  VAR_6->ic_port[VAR_6->ic_nport] = VAR_5->ic_port[VAR_8];
  VAR_6->ic_nport++;
 }
 for (VAR_8 = 0; VAR_8 < VAR_5->ic_nirq; VAR_8++) {
  if (VAR_6->ic_nirq == VAR_1) {
   FUNC_1(VAR_7, "too many irq ranges\n");
   return;
  }
  VAR_6->ic_irqmask[VAR_6->ic_nirq] = VAR_5->ic_irqmask[VAR_8];
  VAR_6->ic_nirq++;
 }
 for (VAR_8 = 0; VAR_8 < VAR_5->ic_ndrq; VAR_8++) {
  if (VAR_6->ic_ndrq == VAR_0) {
   FUNC_1(VAR_7, "too many drq ranges\n");
   return;
  }
  VAR_6->ic_drqmask[VAR_6->ic_ndrq] = VAR_5->ic_drqmask[VAR_8];
  VAR_6->ic_ndrq++;
 }
}
