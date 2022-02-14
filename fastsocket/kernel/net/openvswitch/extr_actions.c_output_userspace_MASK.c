
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct dp_upcall_info {scalar_t__ pid; struct nlattr const* userdata; int * key; int cmd; } ;
struct datapath {int dummy; } ;
struct TYPE_4__ {TYPE_1__* flow; } ;
struct TYPE_3__ {int key; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;


 struct nlattr* FUNC_1 (struct nlattr const*) ;
 scalar_t__ FUNC_2 (struct nlattr const*) ;
 int FUNC_3 (struct nlattr const*) ;
 struct nlattr* FUNC_4 (struct nlattr const*,int*) ;
 int FUNC_5 (struct nlattr const*) ;
 int FUNC_6 (struct datapath*,struct sk_buff*,struct dp_upcall_info*) ;

__attribute__((used)) static int FUNC_7(struct datapath *VAR_1, struct sk_buff *VAR_2,
       const struct nlattr *VAR_3)
{
 struct dp_upcall_info VAR_4;
 const struct nlattr *VAR_5;
 int VAR_6;

 VAR_4.cmd = VAR_0;
 VAR_4.key = &FUNC_0(VAR_2)->flow->key;
 VAR_4.userdata = ((void*)0);
 VAR_4.pid = 0;

 for (VAR_5 = FUNC_1(VAR_3), VAR_6 = FUNC_3(VAR_3); VAR_6 > 0;
   VAR_5 = FUNC_4(VAR_5, &VAR_6)) {
  switch (FUNC_5(VAR_5)) {
  case 128:
   VAR_4.userdata = VAR_5;
   break;

  case 129:
   VAR_4.pid = FUNC_2(VAR_5);
   break;
  }
 }

 return FUNC_6(VAR_1, VAR_2, &VAR_4);
}
