
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static size_t
FUNC_0(const void *VAR_3)
{
 const unsigned char *VAR_4 = VAR_3;
 size_t VAR_5;

 switch (VAR_4[VAR_2+3]) {




 case '0': case '1': case '2': case '3':
 case '4': case '5': case '6': case '7':
 case 'd':
 case 's':
  VAR_5 = 4;


  if (VAR_4[0] == 0)
   break;
  if (VAR_4[VAR_2] != '-' || VAR_4[VAR_2+1] != 'l'
      || VAR_4[VAR_2+4] != '-')
   break;

  if (VAR_4[VAR_2+2] == 'h') {

   if (VAR_4[VAR_2+3] == 's')
    break;
   if (VAR_4[VAR_1] == 0)
    return (0);
   if (VAR_4[VAR_1] <= 3 && VAR_4[VAR_0] == 0x20)
    return (0);
  }
  if (VAR_4[VAR_2+2] == 'z') {

   if (VAR_4[VAR_1] != 0)
    break;
   if (VAR_4[VAR_2+3] == 's'
       || VAR_4[VAR_2+3] == '4'
       || VAR_4[VAR_2+3] == '5')
    return (0);
  }
  break;
 case 'h': VAR_5 = 1; break;
 case 'z': VAR_5 = 1; break;
 case 'l': VAR_5 = 2; break;
 case '-': VAR_5 = 3; break;
 default : VAR_5 = 4; break;
 }

 return (VAR_5);
}
