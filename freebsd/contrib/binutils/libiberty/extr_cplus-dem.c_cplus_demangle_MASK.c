
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int work ;
struct work_stuff {int options; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_0 (char const*,int) ;
 char* FUNC_1 (char const*,int) ;
 scalar_t__ VAR_5 ;
 char* FUNC_2 (struct work_stuff*,char const*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char*,int ,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (struct work_stuff*) ;
 char* FUNC_6 (char const*) ;

char *
FUNC_7 (const char *VAR_7, int VAR_8)
{
  char *VAR_9;
  struct work_stuff VAR_10[1];

  if (VAR_5 == VAR_6)
    return FUNC_6 (VAR_7);

  FUNC_4 ((char *) VAR_10, 0, sizeof (VAR_10));
  VAR_10->options = VAR_8;
  if ((VAR_10->options & VAR_1) == 0)
    VAR_10->options |= (int) VAR_5 & VAR_1;


  if (VAR_3 || VAR_0)
    {
      VAR_9 = FUNC_1 (VAR_7, VAR_10->options);
      if (VAR_9 || VAR_3)
 return VAR_9;
    }

  if (VAR_4)
    {
      VAR_9 = FUNC_3 (VAR_7);
      if (VAR_9)
        return VAR_9;
    }

  if (VAR_2)
    return FUNC_0(VAR_7,VAR_8);

  VAR_9 = FUNC_2 (VAR_10, VAR_7);
  FUNC_5 (VAR_10);
  return (VAR_9);
}
