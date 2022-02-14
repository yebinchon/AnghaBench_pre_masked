
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,char,size_t) ;

__attribute__((used)) static void
FUNC_1(unsigned char *VAR_0, const char *VAR_1, size_t VAR_2, char VAR_3, const char *VAR_4)
{
 unsigned char VAR_5;

 if (VAR_1 == ((void*)0))
  VAR_1 = "";
 while ((VAR_5 = *VAR_1++) != 0 && VAR_2 > 0) {
  if (VAR_5 >= 0x80 || VAR_4[VAR_5] == 0)
   {

   if (VAR_5 >= 'a' && VAR_5 <= 'z') {

    VAR_5 -= 0x20;
   } else
    VAR_5 = 0x5f;
  }
  *VAR_0++ = VAR_5;
  VAR_2--;
 }


 if (VAR_2 > 0)
  FUNC_0(VAR_0 , VAR_3, VAR_2);
}
