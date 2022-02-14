
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;


 int* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,char*,unsigned long,unsigned long) ;

__attribute__((used)) static const char *
FUNC_1(u_int8_t VAR_2)
{
 char *VAR_3 = VAR_1;
 unsigned long VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = (int)((VAR_2 >> 4) & 0x0f) % 10;
 VAR_6 = (int)((VAR_2 >> 0) & 0x0f) % 10;

 VAR_4 = VAR_5 * VAR_0[VAR_6];

 (void) FUNC_0(VAR_3, "%lu.%.2lu", VAR_4/100, VAR_4%100);
 return (VAR_3);
}
