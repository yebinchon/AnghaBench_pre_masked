
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int port_t ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (int ,unsigned char) ;

__attribute__((used)) static void FUNC_1 (port_t VAR_2, unsigned char VAR_3, unsigned char VAR_4)
{
 int VAR_5;

 for (VAR_5=0; VAR_5<8; ++VAR_5) {
  unsigned char VAR_6 = VAR_4;
  if ((VAR_3 >> VAR_5) & 1)
   VAR_6 |= VAR_1;
  FUNC_0 (VAR_2, VAR_6);
  FUNC_0 (VAR_2, VAR_6);
  FUNC_0 (VAR_2, VAR_6);
  FUNC_0 (VAR_2, VAR_6);
  FUNC_0 (VAR_2, VAR_6 | VAR_0);
  FUNC_0 (VAR_2, VAR_6 | VAR_0);
  FUNC_0 (VAR_2, VAR_6 | VAR_0);
  FUNC_0 (VAR_2, VAR_6 | VAR_0);
 }
 FUNC_0 (VAR_2, VAR_4);
}
