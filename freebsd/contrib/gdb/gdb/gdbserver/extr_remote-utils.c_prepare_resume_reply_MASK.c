
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inferior_list_entry {int id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,int) ;
 char** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char*,int) ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 int VAR_6 ;
 void* FUNC_6 (int) ;
 scalar_t__ VAR_7 ;

void
FUNC_7 (char *VAR_8, char VAR_9, unsigned char VAR_10)
{
  int VAR_11, VAR_12;

  *VAR_8++ = VAR_9;

  VAR_12 = (int)FUNC_5 (VAR_10);

  VAR_11 = ((VAR_12 & 0xf0) >> 4);
  *VAR_8++ = FUNC_6 (VAR_11);
  VAR_11 = VAR_12 & 0x0f;
  *VAR_8++ = FUNC_6 (VAR_11);

  if (VAR_9 == 'T')
    {
      const char **VAR_13 = VAR_2;
      while (*VAR_13)
 {
   VAR_8 = FUNC_2 (FUNC_0 (*VAR_13), VAR_8);
   VAR_13 ++;
 }
      if (VAR_7)
 {

   VAR_6 = ((struct inferior_list_entry *)VAR_0)->id;
   if (VAR_1)
     FUNC_1 (VAR_5, "Writing resume reply for %d\n\n", VAR_6);




   if (1 || VAR_4 != VAR_6)
     {
       VAR_3 = VAR_6;
       FUNC_3 (VAR_8, "thread:%x;", VAR_6);
       VAR_8 += FUNC_4 (VAR_8);
       VAR_4 = VAR_6;
     }
 }
    }

  *VAR_8++ = 0;
}
