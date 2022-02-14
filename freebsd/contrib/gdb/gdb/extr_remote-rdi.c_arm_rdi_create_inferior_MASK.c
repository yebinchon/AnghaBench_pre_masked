
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned long*,unsigned long*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,unsigned long) ;
 int FUNC_9 (scalar_t__,int ,int ) ;
 unsigned long FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char*,char*,int) ;
 unsigned long FUNC_15 (char*,char**,int ) ;

__attribute__((used)) static void
FUNC_16 (char *VAR_6, char *VAR_7, char **VAR_8)
{
  int VAR_9, VAR_10;
  unsigned long VAR_11, VAR_12;
  char *VAR_13;
  CORE_ADDR VAR_14;

  if (VAR_6 == 0 || VAR_4 == 0)
    FUNC_4 ("No executable file specified.");

  VAR_14 = (CORE_ADDR) FUNC_3 (VAR_4);

  FUNC_2 ();
  FUNC_11 ();
  FUNC_5 ();

  VAR_9 = FUNC_13 (VAR_6) + 1 + FUNC_13 (VAR_7) + 1 + 10;
  VAR_13 = (char *) FUNC_0 (VAR_9);
  VAR_13[0] = '\0';
  FUNC_12 (VAR_13, VAR_6);
  FUNC_12 (VAR_13, " ");
  FUNC_12 (VAR_13, VAR_7);

  VAR_5 = FUNC_7 (42);
  FUNC_6 ();

  if (VAR_8 != ((void*)0))
    {
      while (*VAR_8)
 {
   if (FUNC_14 (*VAR_8, "MEMSIZE=", sizeof ("MEMSIZE=") - 1) == 0)
     {
       unsigned long VAR_15;
       char *VAR_16;


       VAR_15 = FUNC_15 (*VAR_8 + sizeof ("MEMSIZE=") - 1,
           &VAR_16, 0);
       FUNC_8 ("Setting top-of-memory to 0x%lx\n",
          VAR_15);

       VAR_10 = FUNC_1 (VAR_1, &VAR_15, &VAR_12);
       if (VAR_10 != VAR_0)
  {
    FUNC_8 ("RDI_info: %s\n", FUNC_10 (VAR_10));
  }
     }
   VAR_8++;
 }
    }

  VAR_11 = (unsigned long) VAR_13;
  VAR_10 = FUNC_1 (VAR_2, (unsigned long *) VAR_13, &VAR_12);
  if (VAR_10 != VAR_0)
    {
      FUNC_8 ("RDI_info: %s\n", FUNC_10 (VAR_10));
    }

  FUNC_9 (VAR_14, VAR_3, 0);
}
