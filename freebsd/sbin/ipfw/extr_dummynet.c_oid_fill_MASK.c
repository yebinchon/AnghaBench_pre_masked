
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_id {int len; int type; uintptr_t id; scalar_t__ subtype; } ;



__attribute__((used)) static void
FUNC_0(struct dn_id *VAR_0, int VAR_1, int VAR_2, uintptr_t VAR_3)
{
 VAR_0->len = VAR_1;
 VAR_0->type = VAR_2;
 VAR_0->subtype = 0;
 VAR_0->id = VAR_3;
}
