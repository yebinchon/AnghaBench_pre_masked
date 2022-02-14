
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char FUNC_0 () ;
 unsigned char FUNC_1 (char) ;
 int FUNC_2 (unsigned char) ;
 unsigned char* VAR_1 ;

unsigned char *
FUNC_3 (void)
{
  unsigned char *VAR_2 = &VAR_1[0];
  unsigned char VAR_3;
  unsigned char VAR_4;
  int VAR_5;
  char VAR_6;

  while (1)
    {

      while ((VAR_6 = FUNC_0 ()) != '$')
 ;

retry:
      VAR_3 = 0;
      VAR_4 = -1;
      VAR_5 = 0;


      while (VAR_5 < VAR_0)
 {
   VAR_6 = FUNC_0 ();
          if (VAR_6 == '$')
            goto retry;
   if (VAR_6 == '#')
     break;
   VAR_3 = VAR_3 + VAR_6;
   VAR_2[VAR_5] = VAR_6;
   VAR_5 = VAR_5 + 1;
 }
      VAR_2[VAR_5] = 0;

      if (VAR_6 == '#')
 {
   VAR_6 = FUNC_0 ();
   VAR_4 = FUNC_1 (VAR_6) << 4;
   VAR_6 = FUNC_0 ();
   VAR_4 += FUNC_1 (VAR_6);

   if (VAR_3 != VAR_4)
     {
       FUNC_2 ('-');
     }
   else
     {
       FUNC_2 ('+');


       if (VAR_2[2] == ':')
  {
    FUNC_2 (VAR_2[0]);
    FUNC_2 (VAR_2[1]);

    return &VAR_2[3];
  }

       return &VAR_2[0];
     }
 }
    }
}
