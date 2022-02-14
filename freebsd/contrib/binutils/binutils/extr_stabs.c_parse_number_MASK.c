
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef scalar_t__ bfd_signed_vma ;
typedef scalar_t__ bfd_boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_4 (char const*,char**,int ) ;
 int FUNC_5 (char const*,int ) ;

__attribute__((used)) static bfd_vma
FUNC_6 (const char **VAR_3, bfd_boolean *VAR_4)
{
  unsigned long VAR_5;
  const char *VAR_6;

  if (VAR_4 != ((void*)0))
    *VAR_4 = VAR_0;

  VAR_6 = *VAR_3;

  VAR_2 = 0;
  VAR_5 = FUNC_4 (*VAR_3, (char **) VAR_3, 0);
  if (VAR_5 + 1 != 0 || VAR_2 == 0)
    {



      if (*VAR_6 == '-')
 return (bfd_vma) (bfd_signed_vma) (long) VAR_5;
      return (bfd_vma) VAR_5;
    }



  if (sizeof (bfd_vma) > sizeof (unsigned long))
    {
      const char *VAR_7;
      bfd_boolean VAR_8;
      int VAR_9;
      bfd_vma VAR_10, VAR_11;
      bfd_boolean VAR_12;
      bfd_vma VAR_13;


      VAR_7 = VAR_6;

      VAR_8 = VAR_0;
      if (*VAR_7 == '+')
 ++VAR_7;
      else if (*VAR_7 == '-')
 {
   VAR_8 = VAR_1;
   ++VAR_7;
 }

      VAR_9 = 10;
      if (*VAR_7 == '0')
 {
   if (VAR_7[1] == 'x' || VAR_7[1] == 'X')
     {
       VAR_9 = 16;
       VAR_7 += 2;
     }
   else
     {
       VAR_9 = 8;
       ++VAR_7;
     }
 }

      VAR_10 = ((bfd_vma) (bfd_signed_vma) -1) / (bfd_vma) VAR_9;
      VAR_11 = ((bfd_vma) (bfd_signed_vma) -1) % (bfd_vma) VAR_9;

      VAR_12 = VAR_0;
      VAR_13 = 0;
      while (1)
 {
   int VAR_14;

   VAR_14 = *VAR_7++;
   if (FUNC_0 (VAR_14))
     VAR_14 -= '0';
   else if (FUNC_2 (VAR_14))
     VAR_14 -= 'A';
   else if (FUNC_1 (VAR_14))
     VAR_14 -= 'a';
   else
     break;

   if (VAR_14 >= VAR_9)
     break;

   if (VAR_13 > VAR_10 || (VAR_13 == VAR_10 && (bfd_vma) VAR_14 > VAR_11))
     {
       VAR_12 = VAR_1;
       break;
     }
 }

      if (! VAR_12)
 {
   if (VAR_8)
     VAR_13 = - VAR_13;
   return VAR_13;
 }
    }



  if (VAR_4 != ((void*)0))
    *VAR_4 = VAR_1;
  else
    FUNC_5 (VAR_6, FUNC_3("numeric overflow"));

  return 0;
}
