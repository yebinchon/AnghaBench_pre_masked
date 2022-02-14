
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int len ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char,...) ;
 int FUNC_3 (unsigned char*,int) ;

__attribute__((used)) static void
FUNC_4 (unsigned char *VAR_1, int VAR_2)
{
  unsigned char VAR_3[4];
  int VAR_4, VAR_5;
  unsigned char VAR_6;



  FUNC_1 ();

  for (VAR_4 = VAR_5 = 0, VAR_6 = 0; VAR_4 < VAR_2; VAR_4 += VAR_5, VAR_6++)
    {

      VAR_5 = VAR_2 - VAR_4;
      if (VAR_5 > VAR_0)
 VAR_5 = VAR_0;


      FUNC_3 (VAR_3, VAR_5);
      FUNC_2 ('p', VAR_3, sizeof (VAR_3), VAR_6);


      FUNC_0 (&VAR_1[VAR_4], VAR_5);


      FUNC_1 ();
    }


  FUNC_2 ('e', "", 0, 0);
}
