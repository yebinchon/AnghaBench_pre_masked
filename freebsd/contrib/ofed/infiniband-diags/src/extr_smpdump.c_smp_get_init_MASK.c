
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct drsmp {int base_version; int class_version; int method; int tid; int attr_mod; scalar_t__ attr_id; int mgmt_class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct drsmp*,int ,int) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (void*,int,int ,int ,int ) ;

void FUNC_6(void *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct drsmp *VAR_6 = (struct drsmp *)(FUNC_4(VAR_2));

 FUNC_3(VAR_6, 0, sizeof(*VAR_6));

 VAR_6->base_version = 1;
 VAR_6->mgmt_class = VAR_0;
 VAR_6->class_version = 1;

 VAR_6->method = 1;
 VAR_6->attr_id = (uint16_t) FUNC_2((uint16_t) VAR_4);
 VAR_6->attr_mod = FUNC_0(VAR_5);
 VAR_6->tid = FUNC_1(VAR_1++);

 FUNC_5(VAR_2, VAR_3, 0, 0, 0);
}
