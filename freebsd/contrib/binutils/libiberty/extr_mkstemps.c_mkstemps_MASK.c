
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int gcc_uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (char*,int,int) ;
 size_t FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

int
FUNC_5 (char *VAR_5, int VAR_6)
{
  static const char VAR_7[]
    = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  static gcc_uint64_t VAR_8;



  char *VAR_9;
  size_t VAR_10;
  int VAR_11;

  VAR_10 = FUNC_3 (VAR_5);

  if ((int) VAR_10 < 6 + VAR_6
      || FUNC_4 (&VAR_5[VAR_10 - 6 - VAR_6], "XXXXXX", 6))
    {
      return -1;
    }

  VAR_9 = &VAR_5[VAR_10 - 6 - VAR_6];






  VAR_8 += FUNC_0 ();


  for (VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11)
    {
      gcc_uint64_t VAR_12 = VAR_8;
      int VAR_13;


      VAR_9[0] = VAR_7[VAR_12 % 62];
      VAR_12 /= 62;
      VAR_9[1] = VAR_7[VAR_12 % 62];
      VAR_12 /= 62;
      VAR_9[2] = VAR_7[VAR_12 % 62];
      VAR_12 /= 62;
      VAR_9[3] = VAR_7[VAR_12 % 62];
      VAR_12 /= 62;
      VAR_9[4] = VAR_7[VAR_12 % 62];
      VAR_12 /= 62;
      VAR_9[5] = VAR_7[VAR_12 % 62];

      VAR_13 = FUNC_2 (VAR_5, VAR_0|VAR_3|VAR_1|VAR_2, 0600);
      if (VAR_13 >= 0)

 return VAR_13;




      VAR_8 += 7777;
    }


  VAR_5[0] = '\0';
  return -1;
}
