
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGEST ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 char* FUNC_0 (long) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,long,int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (char) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

int
FUNC_9 (CORE_ADDR VAR_2, char *VAR_3, int VAR_4)
{
  char *VAR_5;
  int VAR_6;
  long VAR_7;
  int VAR_8;


  VAR_6 = FUNC_1 ();
  VAR_7 = VAR_6 + 1;
  VAR_5 = FUNC_0 (VAR_7);

  VAR_8 = VAR_4;
  while (VAR_4 > 0)
    {
      char *VAR_9;
      int VAR_10;
      int VAR_11;

      VAR_10 = FUNC_6 (VAR_4, VAR_6 / 2);



      VAR_2 = FUNC_8 (VAR_2);
      VAR_9 = VAR_5;
      *VAR_9++ = 'm';
      VAR_9 += FUNC_4 (VAR_9, (ULONGEST) VAR_2);
      *VAR_9++ = ',';
      VAR_9 += FUNC_4 (VAR_9, (ULONGEST) VAR_10);
      *VAR_9 = '\0';

      FUNC_7 (VAR_5);
      FUNC_2 (VAR_5, VAR_7, 0);

      if (VAR_5[0] == 'E'
   && FUNC_5 (VAR_5[1]) && FUNC_5 (VAR_5[2])
   && VAR_5[3] == '\0')
 {




   VAR_1 = VAR_0;
   return 0;
 }




      VAR_9 = VAR_5;
      if ((VAR_11 = FUNC_3 (VAR_9, VAR_3, VAR_10)) < VAR_10)
 {


   return VAR_11 + (VAR_8 - VAR_4);
 }
      VAR_3 += VAR_10;
      VAR_2 += VAR_10;
      VAR_4 -= VAR_10;
    }
  return VAR_8;
}
