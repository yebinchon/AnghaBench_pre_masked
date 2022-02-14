
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_id {int len; } ;
typedef int oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct dn_id*,int ) ;
 int FUNC_1 (struct dn_id*,int,int ,int ) ;

void
FUNC_2(void)
{
 struct dn_id VAR_3;
 FUNC_1(&VAR_3, sizeof(VAR_3), VAR_1, VAR_0);
 FUNC_0(VAR_2, &VAR_3, VAR_3.len);
}
