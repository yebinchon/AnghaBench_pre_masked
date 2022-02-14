
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(const char VAR_0[3], char VAR_1[4])
{
 const unsigned char *VAR_2 = (const unsigned char *)VAR_0;
 int VAR_3;

 VAR_3 = (VAR_2[0] << 16) | (VAR_2[1] << 8) | VAR_2[2];
 VAR_1[0] = FUNC_0( 0x3f & (VAR_3 >> 18) );
 VAR_1[1] = FUNC_0( 0x3f & (VAR_3 >> 12) );
 VAR_1[2] = FUNC_0( 0x3f & (VAR_3 >> 6) );
 VAR_1[3] = FUNC_0( 0x3f & VAR_3 );
}
