
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ioat_hw_descriptor {int dummy; } ioat_hw_descriptor ;
typedef scalar_t__ uint32_t ;
struct ioat_softc {scalar_t__ tail; int cleanup_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (union ioat_hw_descriptor*) ;
 union ioat_hw_descriptor* FUNC_1 (struct ioat_softc*,scalar_t__) ;
 int FUNC_2 (int ,char*,int,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct ioat_softc *VAR_2, uint32_t VAR_3)
{
 union ioat_hw_descriptor *VAR_4;

 FUNC_2(0, "Channel halted (%b)\n", (int)VAR_3,
     VAR_0);
 if (VAR_3 == 0)
  return;

 FUNC_3(&VAR_2->cleanup_lock, VAR_1);

 VAR_4 = FUNC_1(VAR_2, VAR_2->tail + 0);
 FUNC_0(VAR_4);

 VAR_4 = FUNC_1(VAR_2, VAR_2->tail + 1);
 FUNC_0(VAR_4);
}
