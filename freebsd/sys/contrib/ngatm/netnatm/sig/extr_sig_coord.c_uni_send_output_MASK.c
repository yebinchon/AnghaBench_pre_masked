
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uni_msg {int dummy; } ;
struct uni_all {int dummy; } ;
struct uni {scalar_t__ custat; int arg; TYPE_1__* funcs; int cx; } ;
struct TYPE_2__ {int (* saal_output ) (struct uni*,int ,int ,struct uni_msg*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uni*,int ,char*,int) ;
 int FUNC_1 (struct uni*,int ,int ,struct uni_msg*) ;
 int FUNC_2 (struct uni*,int ,int ,struct uni_msg*) ;
 int FUNC_3 (struct uni_msg*,struct uni_all*,int *) ;
 struct uni_msg* FUNC_4 (int) ;
 int FUNC_5 (struct uni_msg*) ;

int
FUNC_6(struct uni_all *VAR_6, struct uni *VAR_7)
{
 struct uni_msg *VAR_8;
 int VAR_9;

 if (VAR_7->custat == VAR_0 || VAR_7->custat == VAR_2)
  return (0);

 VAR_8 = FUNC_4(1024);
 if ((VAR_9 = FUNC_3(VAR_8, VAR_6, &VAR_7->cx)) != 0) {
  FUNC_0(VAR_7, VAR_5, "uni_encode failed: %08x", VAR_9);
  FUNC_5(VAR_8);
  return (-1);
 }
 if (VAR_7->custat == VAR_1)
  FUNC_2(VAR_7, VAR_4, 0, VAR_8);
 else
  VAR_7->funcs->saal_output(VAR_7, VAR_7->arg, VAR_3, VAR_8);
 return (0);
}
