
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct module_qstate {int dummy; } ;
struct iter_qstate {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,size_t,int ,int ,struct module_qstate*,int,struct iter_qstate*,int ,int ,struct module_qstate**,int ) ;
 int FUNC_1 (int ,char*,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct module_qstate* VAR_3, struct iter_qstate* VAR_4,
        int VAR_5, uint8_t* VAR_6, size_t VAR_7, uint16_t VAR_8, uint16_t VAR_9)
{
 struct module_qstate* VAR_10;
 if(!FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, VAR_3,
  VAR_5, VAR_4, VAR_1, VAR_0, &VAR_10, 0))
  return 0;
 FUNC_1(VAR_2, "new target", VAR_6, VAR_8, VAR_9);
 return 1;
}
