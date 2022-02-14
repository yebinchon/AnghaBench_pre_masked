
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uvm_physseg_t ;
struct vm_page {int dummy; } ;
typedef size_t psize_t ;
struct TYPE_2__ {int page_init_done; } ;


 TYPE_1__ VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ,struct vm_page*) ;
 int FUNC_5 (int ,size_t) ;
 int FUNC_6 (int ,struct vm_page*,size_t) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct vm_page *VAR_1, psize_t VAR_2)
{
 uvm_physseg_t VAR_3;
 size_t VAR_4;

 for (VAR_3 = FUNC_1(),
   FUNC_6(VAR_3, VAR_1, VAR_2);
      FUNC_7(VAR_3);
      VAR_3 = FUNC_2(VAR_3)) {

  VAR_4 = FUNC_0(VAR_3) - FUNC_3(VAR_3);
  FUNC_5(VAR_3, VAR_4);
  FUNC_4(VAR_3, VAR_1);


  VAR_1 += VAR_4;
  VAR_2 -= VAR_4;
 }

 VAR_0.page_init_done = 1;
}
