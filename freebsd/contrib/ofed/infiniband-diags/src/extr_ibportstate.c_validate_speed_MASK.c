
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(int VAR_0, int VAR_1, int VAR_2)
{
 if ((VAR_0 & VAR_1 & 0x4)) {
  if (VAR_2 != 4)
   FUNC_0
       ("Peer ports operating at active speed %d rather than 4 (10.0 Gbps)",
        VAR_2);
 } else if ((VAR_0 & VAR_1 & 0x2)) {
  if (VAR_2 != 2)
   FUNC_0
       ("Peer ports operating at active speed %d rather than 2 (5.0 Gbps)",
        VAR_2);
 } else if ((VAR_0 & VAR_1 & 0x1)) {
  if (VAR_2 != 1)
   FUNC_0
       ("Peer ports operating at active speed %d rather than 1 (2.5 Gbps)",
        VAR_2);
 }
}
