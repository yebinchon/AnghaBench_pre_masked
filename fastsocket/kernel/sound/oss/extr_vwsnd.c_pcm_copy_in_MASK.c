
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* hwbuf; char* swbuf; int sw_samplefmt; int swbuf_size; int hwbuf_size; } ;
typedef TYPE_1__ vwsnd_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void FUNC_3(vwsnd_port_t *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 char *VAR_7 = VAR_3->hwbuf + VAR_5;
 char *VAR_8 = VAR_3->swbuf + VAR_4;
 int VAR_9 = VAR_3->sw_samplefmt;

 FUNC_1("swidx = %d, hwidx = %d\n", VAR_4, VAR_5);
 FUNC_0(VAR_3->hwbuf != ((void*)0));
 FUNC_0(VAR_3->swbuf != ((void*)0));
 FUNC_0(VAR_6 > 0 && (VAR_6 % 32) == 0);
 FUNC_0(VAR_4 % 32 == 0 && VAR_5 % 32 == 0);
 FUNC_0(VAR_4 >= 0 && VAR_4 + VAR_6 <= VAR_3->swbuf_size);
 FUNC_0(VAR_5 >= 0 && VAR_5 + VAR_6 <= VAR_3->hwbuf_size);

 if (VAR_9 == VAR_1 || VAR_9 == VAR_0 || VAR_9 == VAR_2) {



  char *VAR_10 = VAR_7 + VAR_6;
  while (VAR_7 < VAR_10)
   *VAR_8++ = *VAR_7++ ^ 0x80;
 } else
  FUNC_2(VAR_8, VAR_7, VAR_6);
}
