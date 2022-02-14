
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_offset_t ;
struct pv_chunk {int dummy; } ;
struct TYPE_5__ {int phys_addr; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,struct pv_chunk*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(struct pv_chunk *VAR_6)
{
 vm_page_t VAR_7;

  FUNC_3(&VAR_4, VAR_6, VAR_3);
 FUNC_2(VAR_5 -= VAR_0);
 FUNC_2(VAR_1--);
 FUNC_2(VAR_2++);

 VAR_7 = FUNC_1(FUNC_0((vm_offset_t)VAR_6));
 FUNC_4(VAR_7->phys_addr);
 FUNC_6(VAR_7);
 FUNC_5(VAR_7);
}
