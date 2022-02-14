
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int t ;
struct packed_rrset_key {int flags; int rrset_class; int dname; int type; } ;
typedef int hashvalue_type ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int ) ;

hashvalue_type
FUNC_3(struct packed_rrset_key* VAR_0)
{

 uint16_t VAR_1 = FUNC_2(VAR_0->type);


 hashvalue_type VAR_2 = 0xab;
 VAR_2 = FUNC_0(VAR_0->dname, VAR_2);
 VAR_2 = FUNC_1(&VAR_1, sizeof(VAR_1), VAR_2);
 VAR_2 = FUNC_1(&VAR_0->rrset_class, sizeof(uint16_t), VAR_2);
 VAR_2 = FUNC_1(&VAR_0->flags, sizeof(uint32_t), VAR_2);
 return VAR_2;
}
