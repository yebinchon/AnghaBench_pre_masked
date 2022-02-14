
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int hash; struct ub_packed_rrset_key* key; } ;
struct TYPE_4__ {size_t dname_len; int flags; void* type; void* rrset_class; int * dname; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; TYPE_2__ rk; } ;
struct rrset_cache {int table; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ,struct ub_packed_rrset_key*) ;

void FUNC_3(struct rrset_cache* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 uint16_t VAR_3, uint16_t VAR_4, uint32_t VAR_5)
{
 struct ub_packed_rrset_key VAR_6;
 VAR_6.entry.key = &VAR_6;
 VAR_6.rk.dname = VAR_1;
 VAR_6.rk.dname_len = VAR_2;
 VAR_6.rk.rrset_class = FUNC_0(VAR_4);
 VAR_6.rk.type = FUNC_0(VAR_3);
 VAR_6.rk.flags = VAR_5;
 VAR_6.entry.hash = FUNC_1(&VAR_6.rk);
 FUNC_2(&VAR_0->table, VAR_6.entry.hash, &VAR_6);
}
