
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char offsetT ;


 unsigned int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,...) ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned int,char*,int,int) ;
 scalar_t__ VAR_1 ;
 void* FUNC_7 () ;
 char* VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_8 (char*,char,int) ;
 int FUNC_9 (char*,char) ;
 char* FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11 (int VAR_4, int VAR_5)
{
  unsigned int VAR_6 = VAR_0;
  unsigned int VAR_7;
  char *VAR_8 = ((void*)0);
  char VAR_9 = 0;
  offsetT VAR_10 = 0;
  int VAR_11;
  int VAR_12;

  if (VAR_1)
    VAR_8 = FUNC_10 (&VAR_9);

  if (VAR_3[(unsigned char) *VAR_2])
    {
      if (VAR_4 < 0)
 VAR_7 = 0;
      else
 VAR_7 = VAR_4;
    }
  else
    {
      VAR_7 = FUNC_7 ();
      FUNC_0 ();
    }

  if (VAR_5)
    {

      if (VAR_7 != 0)
 {
   unsigned int VAR_13;

   for (VAR_13 = 0; (VAR_7 & 1) == 0; VAR_7 >>= 1, ++VAR_13)
     ;
   if (VAR_7 != 1)
     FUNC_3 (FUNC_1("alignment not a power of 2"));

   VAR_7 = VAR_13;
 }
    }

  if (VAR_7 > VAR_6)
    {
      VAR_7 = VAR_6;
      FUNC_4 (FUNC_1("alignment too large: %u assumed"), VAR_7);
    }

  if (*VAR_2 != ',')
    {
      VAR_12 = 0;
      VAR_11 = 0;
    }
  else
    {
      ++VAR_2;
      if (*VAR_2 == ',')
 VAR_12 = 0;
      else
 {
   VAR_10 = FUNC_7 ();
   FUNC_0 ();
   VAR_12 = 1;
 }

      if (*VAR_2 != ',')
 VAR_11 = 0;
      else
 {
   ++VAR_2;
   VAR_11 = FUNC_7 ();
 }
    }

  if (!VAR_12)
    {
      if (VAR_4 < 0)
 FUNC_4 (FUNC_1("expected fill pattern missing"));
      FUNC_6 (VAR_7, (char *) ((void*)0), 0, VAR_11);
    }
  else
    {
      int VAR_14;

      if (VAR_4 >= 0)
 VAR_14 = 1;
      else
 VAR_14 = -VAR_4;
      if (VAR_14 <= 1)
 {
   char VAR_15;

   VAR_15 = VAR_10;
   FUNC_6 (VAR_7, &VAR_15, VAR_14, VAR_11);
 }
      else
 {
   char VAR_16[16];

   if ((size_t) VAR_14 > sizeof VAR_16)
     FUNC_2 ();
   FUNC_8 (VAR_16, VAR_10, VAR_14);
   FUNC_6 (VAR_7, VAR_16, VAR_14, VAR_11);
 }
    }

  FUNC_5 ();

  if (VAR_1)
    FUNC_9 (VAR_8, VAR_9);
}
