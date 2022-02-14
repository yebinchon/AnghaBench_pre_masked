
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_send_wr {scalar_t__ opcode; int send_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static u8 FUNC_1(u8 VAR_5, struct ib_send_wr *VAR_6)
{
 if (FUNC_0(VAR_6->opcode == VAR_1 &&
       VAR_6->send_flags & VAR_0))
  return VAR_4;

 if (FUNC_0(VAR_5)) {
  if (VAR_6->send_flags & VAR_0)
   return VAR_3;
  else
   return VAR_5;
 } else if (FUNC_0(VAR_6->send_flags & VAR_0)) {
  return VAR_2;
 }

 return 0;
}
