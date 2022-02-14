
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int port_t ;


 int FUNC_0 (int) ;
 unsigned char FUNC_1 (int) ;
 int FUNC_2 (int,unsigned char) ;

unsigned char FUNC_3 (port_t VAR_0, unsigned char VAR_1,
 unsigned char VAR_2)
{
 unsigned char VAR_3;
 port_t VAR_4 = FUNC_0 (VAR_0 & 0x3e0);

 FUNC_2 (VAR_0, VAR_1); FUNC_2 (VAR_4, VAR_2);
 FUNC_2 (VAR_0, VAR_1); VAR_3 = FUNC_1 (VAR_4) & VAR_2;
 FUNC_2 (VAR_0, VAR_1); FUNC_2 (VAR_4, VAR_3);
 return VAR_3;
}
