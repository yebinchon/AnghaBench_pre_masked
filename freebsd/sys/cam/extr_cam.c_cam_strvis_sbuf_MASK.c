
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef char u_int8_t ;
struct sbuf {int dummy; } ;



 int VAR_0 ;



 int FUNC_0 (struct sbuf*,char*,int ,int ,int ) ;
 int FUNC_1 (struct sbuf*,char const) ;

void
FUNC_2(struct sbuf *VAR_1, const u_int8_t *VAR_2, int VAR_3,
  uint32_t VAR_4)
{


 while (VAR_3 > 0 && VAR_2[0] == ' ')
  VAR_2++, VAR_3--;
 while (VAR_3 > 0
     && (VAR_2[VAR_3-1] == ' ' || VAR_2[VAR_3-1] == '\0'))
  VAR_3--;

 while (VAR_3 > 0) {
  if (*VAR_2 < 0x20 || *VAR_2 >= 0x80) {


   switch (VAR_4 & VAR_0) {
   case 131:
    FUNC_0(VAR_1, "\\%c%c%c",
        ((*VAR_2 & 0300) >> 6) + '0',
        ((*VAR_2 & 0070) >> 3) + '0',
        ((*VAR_2 & 0007) >> 0) + '0');
    break;
   case 130:




    if (*VAR_2 != 0x00)
     FUNC_1(VAR_1, *VAR_2);
    else
     FUNC_1(VAR_1, ' ');
    break;
   case 129:
    FUNC_1(VAR_1, ' ');
    break;
   case 128:
   default:
    break;
   }
  } else {

   FUNC_1(VAR_1, *VAR_2);
  }
  VAR_2++;
  VAR_3--;
 }
}
