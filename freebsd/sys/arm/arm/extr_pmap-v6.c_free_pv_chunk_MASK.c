
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_offset_t ;
struct pv_chunk {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,struct pv_chunk*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct pv_chunk *VAR_7)
{
 vm_page_t VAR_8;

 FUNC_2(&VAR_4, VAR_7, VAR_3);
 FUNC_1(VAR_5 -= VAR_0);
 FUNC_1(VAR_1--);
 FUNC_1(VAR_2++);

 VAR_8 = FUNC_0(FUNC_3((vm_offset_t)VAR_7));
 FUNC_5((vm_offset_t)VAR_7, 1);
 FUNC_7(VAR_8);
 FUNC_6(VAR_8);
 FUNC_4(&VAR_6, (vm_offset_t)VAR_7);
}
