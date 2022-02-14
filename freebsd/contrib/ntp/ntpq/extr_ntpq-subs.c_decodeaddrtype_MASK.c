
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;
typedef int sockaddr_u ;


 int FUNC_0 (int *) ;


 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static char
FUNC_4(
 sockaddr_u *VAR_0
 )
{
 char VAR_1 = '-';
 u_int32 VAR_2;

 switch(FUNC_0(VAR_0)) {
 case 129:
  VAR_2 = FUNC_3(VAR_0);
  VAR_1 = (char)(((VAR_2&0xf0000000)==0xe0000000) ? 'm' :
   ((VAR_2&0x000000ff)==0x000000ff) ? 'b' :
   ((VAR_2&0xffffffff)==0x7f000001) ? 'l' :
   ((VAR_2&0xffffffe0)==0x00000000) ? '-' :
   'u');
  break;
 case 128:
  if (FUNC_1(FUNC_2(VAR_0)))
   VAR_1 = 'm';
  else
   VAR_1 = 'u';
  break;
 default:
  VAR_1 = '-';
  break;
 }
 return VAR_1;
}
