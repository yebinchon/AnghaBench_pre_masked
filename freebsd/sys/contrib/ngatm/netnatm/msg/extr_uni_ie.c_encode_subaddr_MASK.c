
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_subaddr {int type; int len; int addr; } ;
struct uni_msg {int dummy; } ;


 int FUNC_0 (struct uni_msg*,int ,int ) ;
 int FUNC_1 (struct uni_msg*,int) ;

__attribute__((used)) static void
FUNC_2(struct uni_msg *VAR_0, struct uni_subaddr *VAR_1)
{
 FUNC_1(VAR_0, 0x80|(VAR_1->type<<4));
 FUNC_0(VAR_0, VAR_1->addr, VAR_1->len);
}
