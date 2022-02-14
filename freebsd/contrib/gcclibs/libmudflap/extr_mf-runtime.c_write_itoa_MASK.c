
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int n ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int ) ;

__attribute__((used)) static void
FUNC_2 (int VAR_0, unsigned VAR_1)
{
  enum x { bufsize = sizeof(VAR_1)*4 };
  char VAR_2 [bufsize];
  unsigned VAR_3;

  for (VAR_3=0; VAR_3<bufsize-1; VAR_3++)
    {
      unsigned VAR_4 = VAR_1 % 10;
      VAR_2[bufsize-2-VAR_3] = VAR_4 + '0';
      VAR_1 /= 10;
      if (VAR_1 == 0)
        {
          char *VAR_5 = & VAR_2 [bufsize-2-VAR_3];
          VAR_2[bufsize-1] = '\0';
          FUNC_1 (VAR_0, VAR_5, FUNC_0(VAR_5));
          break;
        }
    }
}
