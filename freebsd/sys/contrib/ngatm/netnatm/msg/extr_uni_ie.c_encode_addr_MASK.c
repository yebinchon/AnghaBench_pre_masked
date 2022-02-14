
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
struct uni_msg {int dummy; } ;
struct uni_addr {int type; int plan; int len; int addr; } ;
typedef enum uni_addr_screen { ____Placeholder_uni_addr_screen } uni_addr_screen ;
typedef enum uni_addr_pres { ____Placeholder_uni_addr_pres } uni_addr_pres ;


 int FUNC_0 (struct uni_msg*,int ,int ) ;
 int FUNC_1 (struct uni_msg*,int) ;

__attribute__((used)) static void
FUNC_2(struct uni_msg *VAR_0, struct uni_addr *VAR_1, u_int VAR_2,
    enum uni_addr_screen VAR_3, enum uni_addr_pres VAR_4, int VAR_5)
{
 u_char VAR_6 = VAR_5 ? 0x00 : 0x80;

 if (VAR_2) {
  FUNC_1(VAR_0, (VAR_1->type << 4) | VAR_1->plan);
  FUNC_1(VAR_0, VAR_6 | (VAR_4 << 5) | (VAR_3));
 } else {
  FUNC_1(VAR_0, VAR_6 | (VAR_1->type << 4) | VAR_1->plan);
 }
 FUNC_0(VAR_0, VAR_1->addr, VAR_1->len);
}
