
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* gdb_putc ) (char) ;int * gdb_sendpacket; } ;


 char FUNC_0 (unsigned char) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned char FUNC_1 () ;
 int FUNC_2 () ;
 char* VAR_2 ;
 char const* VAR_3 ;
 int FUNC_3 (char) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char) ;
 int FUNC_6 (char) ;
 int FUNC_7 (char) ;
 int FUNC_8 (unsigned char) ;
 int FUNC_9 (char) ;
 int FUNC_10 (int) ;
 int FUNC_11 (unsigned char) ;
 int FUNC_12 (unsigned char) ;
 int FUNC_13 (unsigned char) ;
 int FUNC_14 (unsigned char) ;
 int FUNC_15 (char) ;

int
FUNC_16(void)
{
 const char *VAR_4;
 int VAR_5;
 unsigned char VAR_6, VAR_7;

 do {
  if (VAR_1->gdb_sendpacket != ((void*)0)) {
   FUNC_2();
   goto getack;
  }

  VAR_1->gdb_putc('$');

  VAR_7 = 0;
  VAR_4 = VAR_2;
  while (VAR_4 < VAR_3) {

   VAR_6 = *VAR_4++;
   VAR_1->gdb_putc(VAR_6);
   VAR_7 += VAR_6;
   VAR_5 = 0;

   while (VAR_4 < VAR_3 && *VAR_4 == VAR_6) {
    VAR_5++;
    VAR_4++;
   }

   while (VAR_5 >= 97) {
    VAR_1->gdb_putc('*');
    VAR_7 += '*';
    VAR_1->gdb_putc(97+29);
    VAR_7 += 97+29;
    VAR_5 -= 97;
    if (VAR_5 > 0) {
     VAR_1->gdb_putc(VAR_6);
     VAR_7 += VAR_6;
     VAR_5--;
    }
   }
   if (VAR_5 == 1) {
    VAR_1->gdb_putc(VAR_6);
    VAR_7 += VAR_6;
    VAR_5--;
   }
   if (VAR_5 == 0)
    continue;

   if (VAR_5 == 7) {
    VAR_1->gdb_putc(VAR_6);
    VAR_7 += VAR_6;
    VAR_5--;
   }
   if (VAR_5 == 6 || VAR_5 == 14 || VAR_5 == 16) {
    VAR_1->gdb_putc(VAR_6);
    VAR_7 += VAR_6;
    VAR_5--;
   }
   VAR_1->gdb_putc('*');
   VAR_7 += '*';
   VAR_1->gdb_putc(VAR_5+29);
   VAR_7 += VAR_5+29;
  }

  VAR_1->gdb_putc('#');
  VAR_6 = VAR_7 >> 4;
  VAR_1->gdb_putc(FUNC_0(VAR_6));
  VAR_6 = VAR_7 & 0x0f;
  VAR_1->gdb_putc(FUNC_0(VAR_6));

getack:





  if (!VAR_0)
   break;

  VAR_6 = FUNC_1();
 } while (VAR_6 != '+');

 return (0);
}
