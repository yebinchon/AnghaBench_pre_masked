
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct ip_vs_service_user_kern {scalar_t__ fwmark; int af; int port; int addr; int protocol; } ;
struct ip_vs_service {int dummy; } ;
struct ip_vs_dest_user_kern {int dummy; } ;
struct genl_info {int * attrs; TYPE_1__* genlhdr; } ;
struct TYPE_2__ {int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;


 int VAR_9 ;



 int VAR_10 ;
 int VAR_11 ;
 struct ip_vs_service* FUNC_0 (int ,int ,int *,int ) ;
 struct ip_vs_service* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct ip_vs_service*,struct ip_vs_dest_user_kern*) ;
 int FUNC_3 (struct ip_vs_service_user_kern*,struct ip_vs_service**) ;
 int VAR_12 ;
 int FUNC_4 (struct ip_vs_service*,struct ip_vs_dest_user_kern*) ;
 int FUNC_5 (struct ip_vs_service*) ;
 int FUNC_6 (struct ip_vs_service*,struct ip_vs_dest_user_kern*) ;
 int FUNC_7 (struct ip_vs_service*,struct ip_vs_service_user_kern*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct nlattr**) ;
 int FUNC_10 (struct nlattr**) ;
 int FUNC_11 (struct ip_vs_dest_user_kern*,int ,int) ;
 int FUNC_12 (struct ip_vs_service_user_kern*,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct ip_vs_service*) ;
 int FUNC_15 () ;
 int FUNC_16 (struct ip_vs_service*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (struct nlattr**,int ,int ,int ) ;

__attribute__((used)) static int FUNC_20(struct sk_buff *VAR_13, struct genl_info *VAR_14)
{
 struct ip_vs_service *VAR_15 = ((void*)0);
 struct ip_vs_service_user_kern VAR_16;
 struct ip_vs_dest_user_kern VAR_17;
 int VAR_18 = 0, VAR_19;
 int VAR_20 = 0, VAR_21 = 0;

 VAR_19 = VAR_14->genlhdr->cmd;

 FUNC_17(&VAR_11);

 if (VAR_19 == VAR_7) {
  VAR_18 = FUNC_8();
  goto out;
 } else if (VAR_19 == VAR_9) {
  VAR_18 = FUNC_13(VAR_14->attrs);
  goto out;
 } else if (VAR_19 == VAR_8 ||
     VAR_19 == VAR_6) {

  struct nlattr *VAR_22[VAR_10 + 1];

  if (!VAR_14->attrs[VAR_3] ||
      FUNC_19(VAR_22, VAR_10,
         VAR_14->attrs[VAR_3],
         VAR_12)) {
   VAR_18 = -VAR_1;
   goto out;
  }

  if (VAR_19 == VAR_8)
   VAR_18 = FUNC_10(VAR_22);
  else
   VAR_18 = FUNC_9(VAR_22);
  goto out;
 } else if (VAR_19 == 128 &&
     !VAR_14->attrs[VAR_5]) {
  VAR_18 = FUNC_15();
  goto out;
 }




 if (VAR_19 == 131 || VAR_19 == 129)
  VAR_20 = 1;

 VAR_18 = FUNC_12(&VAR_16,
           VAR_14->attrs[VAR_5],
           VAR_20);
 if (VAR_18)
  goto out;


 if (VAR_16.fwmark == 0)
  VAR_15 = FUNC_0(VAR_16.af, VAR_16.protocol,
       &VAR_16.addr, VAR_16.port);
 else
  VAR_15 = FUNC_1(VAR_16.af, VAR_16.fwmark);


 if ((VAR_19 != 131) && (VAR_15 == ((void*)0))) {
  VAR_18 = -VAR_2;
  goto out;
 }




 if (VAR_19 == 132 || VAR_19 == 130 ||
     VAR_19 == 134) {
  if (VAR_19 != 134)
   VAR_21 = 1;

  VAR_18 = FUNC_11(&VAR_17,
         VAR_14->attrs[VAR_4],
         VAR_21);
  if (VAR_18)
   goto out;
 }

 switch (VAR_19) {
 case 131:
  if (VAR_15 == ((void*)0))
   VAR_18 = FUNC_3(&VAR_16, &VAR_15);
  else
   VAR_18 = -VAR_0;
  break;
 case 129:
  VAR_18 = FUNC_7(VAR_15, &VAR_16);
  break;
 case 133:
  VAR_18 = FUNC_5(VAR_15);
  break;
 case 132:
  VAR_18 = FUNC_2(VAR_15, &VAR_17);
  break;
 case 130:
  VAR_18 = FUNC_6(VAR_15, &VAR_17);
  break;
 case 134:
  VAR_18 = FUNC_4(VAR_15, &VAR_17);
  break;
 case 128:
  VAR_18 = FUNC_16(VAR_15);
  break;
 default:
  VAR_18 = -VAR_1;
 }

out:
 if (VAR_15)
  FUNC_14(VAR_15);
 FUNC_18(&VAR_11);

 return VAR_18;
}
