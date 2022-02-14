
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct l2cap_pinfo {int conn_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct l2cap_pinfo*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct l2cap_pinfo *VAR_3, u16 VAR_4)
{
 if (VAR_3->conn_state & VAR_0)
  VAR_4 |= VAR_1;
 else
  VAR_4 |= VAR_2;

 return FUNC_0(VAR_3, VAR_4);
}
