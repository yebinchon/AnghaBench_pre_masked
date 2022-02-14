
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct kwsmatch {size_t* size; } ;
typedef int mbstate_t ;


 scalar_t__ FUNC_0 (char const*,size_t,size_t*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned char) ;
 char VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 size_t FUNC_3 (int ,char const*,size_t,struct kwsmatch*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t FUNC_4 (char const*,int,int *) ;
 int FUNC_5 (int*,char const*,int) ;
 char* FUNC_6 (char const*,char,int) ;
 int FUNC_7 (int *,char,int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static size_t
FUNC_8 (char const *VAR_7, size_t VAR_8, size_t *VAR_9, int VAR_10)
{
  register char const *VAR_11, *VAR_12, *VAR_13;
  register size_t VAR_14;
  char VAR_15 = VAR_1;
  struct kwsmatch VAR_16;
  size_t VAR_17;







  for (VAR_11 = VAR_7; VAR_11 <= VAR_7 + VAR_8; ++VAR_11)
    {
      size_t VAR_18;
      VAR_18 = FUNC_3 (VAR_3, VAR_11, VAR_7 + VAR_8 - VAR_11, &VAR_16);

      if (VAR_18 == (size_t) -1)
 goto failure;
      VAR_11 += VAR_18;
      VAR_14 = VAR_16.size[0];
      if (VAR_10 && !VAR_5)
 goto success_in_beg_and_len;
      if (VAR_4)
 {
   if (VAR_11 > VAR_7 && VAR_11[-1] != VAR_15)
     goto next_char;
   if (VAR_11 + VAR_14 < VAR_7 + VAR_8 && VAR_11[VAR_14] != VAR_15)
     goto next_char;
   goto success;
 }
      else if (VAR_5)
 {
   while (1)
     {
       int VAR_19 = 0;
       if (VAR_11 > VAR_7)
  {
    if (FUNC_1 ((unsigned char) VAR_11[-1]))
      goto next_char;
  }
  if (VAR_11 + VAR_14 >= VAR_7 + VAR_8 || !FUNC_1 ((unsigned char) VAR_11[VAR_14]))
    VAR_19 = 1;
       if (VAR_19)
  {
    if (!VAR_10)

      goto success;
    else

      goto success_in_beg_and_len;
  }
       if (VAR_14 > 0)
  {

    --VAR_14;
    VAR_18 = FUNC_3 (VAR_3, VAR_11, VAR_14, &VAR_16);

    if (VAR_18 == -1)
      goto next_char;
    VAR_11 += VAR_18;
    VAR_14 = VAR_16.size[0];
  }
     }
 }
      else
 goto success;
next_char:;
    }

 failure:
  return -1;

 success:
  VAR_13 = FUNC_6 (VAR_11 + VAR_14, VAR_15, (VAR_7 + VAR_8) - (VAR_11 + VAR_14));

  VAR_13++;
  while (VAR_7 < VAR_11 && VAR_11[-1] != VAR_15)
    --VAR_11;
  VAR_14 = VAR_13 - VAR_11;


 success_in_beg_and_len:
  *VAR_9 = VAR_14;
  return VAR_11 - VAR_7;
}
