
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef scalar_t__ offsetT ;
typedef int bfd_vma ;
typedef scalar_t__ addressT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,unsigned int,char const*,char*,...) ;
 int FUNC_3 (char*,unsigned int,char const*,char*,...) ;
 int FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_5 (char * VAR_2,
    offsetT VAR_3,
    offsetT VAR_4,
    offsetT VAR_5,
    char * VAR_6,
    unsigned VAR_7,
    int VAR_8)
{
  const char * VAR_9;

  if (VAR_2 == ((void*)0))
    VAR_2 = "";

  if (VAR_3 >= VAR_4 && VAR_3 <= VAR_5)
    {
      addressT VAR_10 = VAR_5 & -VAR_5;

      if (VAR_5 <= 1)
 FUNC_1 ();


      VAR_9 = FUNC_0("%s out of domain (%d is not a multiple of %d)");
      if (VAR_8)
 FUNC_2 (VAR_6, VAR_7, VAR_9,
        VAR_2, (int) VAR_3, (int) VAR_10);
      else
 FUNC_3 (VAR_6, VAR_7, VAR_9,
         VAR_2, (int) VAR_3, (int) VAR_10);
      return;
    }

  if ( VAR_3 < VAR_0
      && VAR_4 < VAR_0
      && VAR_5 < VAR_0
      && VAR_3 > VAR_1
      && VAR_4 > VAR_1
      && VAR_5 > VAR_1)
    {

      VAR_9 = FUNC_0("%s out of range (%d is not between %d and %d)");

      if (VAR_8)
 FUNC_2 (VAR_6, VAR_7, VAR_9,
        VAR_2, (int) VAR_3, (int) VAR_4, (int) VAR_5);
      else
 FUNC_3 (VAR_6, VAR_7, VAR_9,
         VAR_2, (int) VAR_3, (int) VAR_4, (int) VAR_5);
    }
  else
    {
      char VAR_11 [sizeof (VAR_3) * 3 + 2];
      char VAR_12 [sizeof (VAR_3) * 3 + 2];
      char VAR_13 [sizeof (VAR_3) * 3 + 2];

      if (sizeof (VAR_3) > sizeof (bfd_vma))
 FUNC_1 ();

      FUNC_4 (VAR_11, VAR_3);
      FUNC_4 (VAR_12, VAR_4);
      FUNC_4 (VAR_13, VAR_5);


      VAR_9 = FUNC_0("%s out of range (0x%s is not between 0x%s and 0x%s)");

      if (VAR_8)
 FUNC_2 (VAR_6, VAR_7, VAR_9, VAR_2, VAR_11, VAR_12, VAR_13);
      else
 FUNC_3 (VAR_6, VAR_7, VAR_9, VAR_2, VAR_11, VAR_12, VAR_13);
    }
}
