
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md5_ctx {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 size_t FUNC_1 (char*,int,int,int *) ;
 int FUNC_2 (struct md5_ctx*,void*) ;
 int FUNC_3 (struct md5_ctx*) ;
 int FUNC_4 (char*,int,struct md5_ctx*) ;
 int FUNC_5 (char*,size_t,struct md5_ctx*) ;

int
FUNC_6 (FILE *VAR_1, void *VAR_2)
{


  struct md5_ctx VAR_3;
  char VAR_4[4096 + 72];
  size_t VAR_5;


  FUNC_3 (&VAR_3);


  while (1)
    {



      size_t VAR_6;
      VAR_5 = 0;


      do
 {
   VAR_6 = FUNC_1 (VAR_4 + VAR_5, 1, 4096 - VAR_5, VAR_1);

   VAR_5 += VAR_6;
 }
      while (VAR_5 < 4096 && VAR_6 != 0);
      if (VAR_6 == 0 && FUNC_0 (VAR_1))
        return 1;


      if (VAR_6 == 0)
 break;




      FUNC_4 (VAR_4, 4096, &VAR_3);
    }


  if (VAR_5 > 0)
    FUNC_5 (VAR_4, VAR_5, &VAR_3);


  FUNC_2 (&VAR_3, VAR_2);
  return 0;
}
