
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int csa_res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_1(csa_res *VAR_3, u_long VAR_4)
{
 u_long VAR_5, VAR_6;
 u_long VAR_7;
 u_long VAR_8, VAR_9;
 u_long VAR_10;

 VAR_10 = 48000;
 VAR_5 = VAR_4 << 16;
 VAR_7 = VAR_5 / VAR_10;
 VAR_5 -= VAR_7 * VAR_10;
 VAR_5 <<= 10;
 VAR_7 <<= 10;
 VAR_6 = VAR_5 / VAR_10;
 VAR_7 += VAR_6;
 VAR_5 -= VAR_6 * VAR_10;
 VAR_8 = VAR_5 / VAR_2;
 VAR_5 -= VAR_8 * VAR_2;
 VAR_9 = VAR_5;




 FUNC_0(VAR_3, VAR_1, ((VAR_9 << 16) & 0xFFFF0000) | (VAR_8 & 0xFFFF));
 FUNC_0(VAR_3, VAR_0, VAR_7);
}
