
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct cleanup {int dummy; } ;
typedef struct symbol* badness_vector ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct symbol**,int,int ) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (struct cleanup*) ;
 int FUNC_4 (struct cleanup*) ;
 int FUNC_5 (struct type**,int,int ,int,int *,struct symbol**,struct symbol***) ;
 int FUNC_6 (int) ;
 struct cleanup* FUNC_7 (int (*) (struct symbol**),struct symbol**) ;
 struct symbol** FUNC_8 (char const*,char*) ;
 int FUNC_9 (char*,char const*,int) ;
 int FUNC_10 (struct symbol**) ;

__attribute__((used)) static int
FUNC_11 (struct type **VAR_1, int VAR_2,
     const char *VAR_3,
     const char *VAR_4,
     int VAR_5,
     struct symbol ***VAR_6,
     struct badness_vector **VAR_7,
     int *VAR_8)
{
  int VAR_9 = VAR_5;
  int VAR_10 = 0;
  int VAR_11 = 0;
  struct cleanup *VAR_12;
  int VAR_13;
  struct symbol **VAR_14;
  struct badness_vector *VAR_15;
  char *VAR_16;

  if (VAR_9 != 0)
    {
      FUNC_6 (VAR_4[VAR_9] == ':');
      VAR_9 += 2;
    }
  VAR_9
    += FUNC_2 (VAR_4 + VAR_9);


  *VAR_6 = ((void*)0);
  *VAR_7 = ((void*)0);




  if (VAR_4[VAR_9] == ':')
    {
      VAR_10 = 1;

      if (FUNC_11 (VAR_1, VAR_2,
        VAR_3, VAR_4,
        VAR_9,
        VAR_6, VAR_7,
        VAR_8))
 {
   return 1;
 }
    };
  VAR_12 = FUNC_7 (FUNC_10, *VAR_6);
  VAR_12 = FUNC_7 (FUNC_10, *VAR_7);
  VAR_16 = FUNC_0 (VAR_5 + 1);
  FUNC_9 (VAR_16, VAR_4, VAR_5);
  VAR_16[VAR_5] = '\0';
  VAR_14 = FUNC_8 (VAR_3,
           VAR_16);
  while (VAR_14[VAR_11])
    ++VAR_11;

  VAR_13 = FUNC_5 (VAR_1, VAR_2, 0, VAR_11,
          ((void*)0), VAR_14,
          &VAR_15);
  if (VAR_13 != -1
      && FUNC_1 (VAR_15, VAR_2, 0) == VAR_0)
    {
      *VAR_6 = VAR_14;
      *VAR_8 = VAR_13;
      *VAR_7 = VAR_15;
      FUNC_4 (VAR_12);
      return 1;
    }
  else if (VAR_10)
    {
      FUNC_10 (VAR_14);
      FUNC_10 (VAR_15);
      FUNC_3 (VAR_12);
      return 0;
    }
  else
    {
      FUNC_6 (VAR_13 != -1);
      *VAR_6 = VAR_14;
      *VAR_8 = VAR_13;
      *VAR_7 = VAR_15;
      FUNC_3 (VAR_12);
      return 0;
    }
}
