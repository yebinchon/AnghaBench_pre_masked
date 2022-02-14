
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char const*) ;
 scalar_t__ FUNC_1 (unsigned char const) ;

__attribute__((used)) static int
FUNC_2(const unsigned char *VAR_3, const unsigned char *VAR_4,
 bool VAR_5)
{
  FUNC_0(VAR_4);
  FUNC_0(VAR_3);

  if (*VAR_4 == '\0')
    {
      return (((*VAR_3) != '\0') ? VAR_1 : VAR_0);
    }
  else
    {
      if (VAR_5)
 {
   while (*VAR_3++ == *VAR_4)
     {
       if (*VAR_4++ == '\0')
  return VAR_0;
     }
 }
      else
 {
   while (FUNC_1(*VAR_3++) == FUNC_1(*VAR_4))
     {
       if (*VAR_4++ == '\0')
  return VAR_0;
     }
 }
    }



  FUNC_0(VAR_4);
  if (*VAR_4)
    return VAR_1;



  return ((VAR_3[-1] != '\0') ? VAR_2 : VAR_0);
}
