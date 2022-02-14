
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (char*,char*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,char*,unsigned char) ;

__attribute__((used)) static void
FUNC_3 (unsigned char *VAR_1, int VAR_2)
{
  char VAR_3[10];

  FUNC_0 (VAR_1, VAR_2);

  if (VAR_0 > 0)
    {
      while (VAR_2-- > 0)
 {
   FUNC_2 (VAR_3, "[%02x]", *VAR_1 & 0xff);
   FUNC_1 ("Sent -->", VAR_3, "<--");
   VAR_1++;
 }
    }
}
