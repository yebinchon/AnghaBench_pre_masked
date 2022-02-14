
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int pid_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int,int ) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct stat) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 size_t FUNC_6 (int,char*,size_t) ;
 scalar_t__ FUNC_7 (int) ;
 char const* VAR_6 ;
 int FUNC_8 (int,int) ;
 int VAR_7 ;
 int FUNC_9 (int,int,char*,char const*,int) ;
 int FUNC_10 (char const*,char**) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (int,struct stat*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (int*) ;
 int * FUNC_18 (char*,char*) ;
 int FUNC_19 (char*,char const*) ;
 int FUNC_20 (char*,char const*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_21 () ;
 scalar_t__ FUNC_22 (int,int*,int ) ;
 int FUNC_23 () ;
 char* FUNC_24 (size_t) ;
 char* FUNC_25 (char*,size_t) ;

__attribute__((used)) static char *
FUNC_26 (char const *VAR_10,
    char const *VAR_11,
    char **VAR_12)
{
  char *VAR_13;
  size_t VAR_14, VAR_15;
  int VAR_16, VAR_17, VAR_18;
  int VAR_19 = 0;
  struct stat VAR_20;
  FILE *VAR_21;
  char const VAR_22[] = " --horizon-lines=100 -- ";
  char *VAR_23 = FUNC_24 (FUNC_19 (0, VAR_6)
      + sizeof "-a"
      + sizeof "--strip-trailing-cr"
      + sizeof VAR_22 - 1
      + FUNC_19 (0, VAR_10) + 1
      + FUNC_19 (0, VAR_11) + 1);
  char *VAR_24 = VAR_23;
  VAR_24 += FUNC_19 (VAR_24, VAR_6);
  if (VAR_9)
    {
      FUNC_20 (VAR_24, " -a");
      VAR_24 += 3;
    }
  if (VAR_8)
    {
      FUNC_20 (VAR_24, " --strip-trailing-cr");
      VAR_24 += 20;
    }
  FUNC_20 (VAR_24, VAR_22);
  VAR_24 += sizeof VAR_22 - 1;
  VAR_24 += FUNC_19 (VAR_24, VAR_10);
  *VAR_24++ = ' ';
  VAR_24 += FUNC_19 (VAR_24, VAR_11);
  *VAR_24 = 0;
  VAR_7 = 0;
  VAR_21 = FUNC_18 (VAR_23, "r");
  if (!VAR_21)
    FUNC_16 (VAR_23);
  FUNC_13 (VAR_23);
  VAR_16 = FUNC_12 (VAR_21);



  if (FUNC_14 (VAR_16, &VAR_20) != 0)
    FUNC_16 ("fstat");
  VAR_14 = FUNC_0 (1, FUNC_1 (VAR_20));
  VAR_13 = FUNC_24 (VAR_14);
  VAR_15 = 0;

  for (;;)
    {
      size_t VAR_25 = VAR_14 - VAR_15;
      size_t VAR_26 = FUNC_6 (VAR_16, VAR_13 + VAR_15, VAR_25);
      VAR_15 += VAR_26;
      if (VAR_26 != VAR_25)
 {
   if (VAR_26 == VAR_4)
     FUNC_16 (FUNC_4("read failed"));
   break;
 }
      if (VAR_3 / 2 <= VAR_14)
 FUNC_23 ();
      VAR_14 *= 2;
      VAR_13 = FUNC_25 (VAR_13, VAR_14);
    }

  if (VAR_15 != 0 && VAR_13[VAR_15-1] != '\n')
    FUNC_11 ("invalid diff format; incomplete last line");

  *VAR_12 = VAR_13;



  VAR_17 = FUNC_15 (VAR_21);
  if (VAR_17 == -1)
    VAR_19 = VAR_7;
  VAR_18 = ! VAR_19 && FUNC_3 (VAR_17) ? FUNC_2 (VAR_17) : VAR_2;

  if (VAR_1 <= VAR_18)
    FUNC_9 (VAR_1, VAR_19,
    FUNC_4(VAR_18 == 126
      ? "subsidiary program `%s' could not be invoked"
      : VAR_18 == 127
      ? "subsidiary program `%s' not found"
      : VAR_18 == VAR_2
      ? "subsidiary program `%s' failed"
      : "subsidiary program `%s' failed (exit status %d)"),
    VAR_6, VAR_18);

  return VAR_13 + VAR_15;
}
