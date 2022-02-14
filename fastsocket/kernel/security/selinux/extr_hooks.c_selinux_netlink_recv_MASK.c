
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int cap; } ;
struct common_audit_data {TYPE_1__ u; } ;
struct TYPE_4__ {int sid; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct common_audit_data*,int ) ;
 TYPE_2__ FUNC_2 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ,int ,struct common_audit_data*) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2, int VAR_3)
{
 int VAR_4;
 struct common_audit_data VAR_5;

 VAR_4 = FUNC_4(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_1(&VAR_5, VAR_0);
 VAR_5.u.cap = VAR_3;

 return FUNC_3(FUNC_2(VAR_2).sid, FUNC_2(VAR_2).sid,
       VAR_1, FUNC_0(VAR_3), &VAR_5);
}
