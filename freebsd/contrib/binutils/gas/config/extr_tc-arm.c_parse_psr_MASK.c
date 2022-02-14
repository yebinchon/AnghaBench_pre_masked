
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct asm_psr {int field; } ;
struct TYPE_2__ {int error; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct asm_psr* FUNC_2 (int ,char*,int) ;
 TYPE_1__ VAR_6 ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_4 (char **VAR_7)
{
  char *VAR_8;
  unsigned long VAR_9;
  const struct asm_psr *VAR_10;
  char *VAR_11;



  VAR_8 = *VAR_7;
  if (FUNC_3 (VAR_8, "SPSR", 4) == 0)
    VAR_9 = VAR_3;
  else if (FUNC_3 (VAR_8, "CPSR", 4) == 0)
    VAR_9 = 0;
  else
    {
      VAR_11 = VAR_8;
      do
 VAR_8++;
      while (FUNC_0 (*VAR_8) || *VAR_8 == '_');

      VAR_10 = FUNC_2 (VAR_5, VAR_11, VAR_8 - VAR_11);
      if (!VAR_10)
 return VAR_0;

      *VAR_7 = VAR_8;
      return VAR_10->field;
    }

  VAR_8 += 4;
  if (*VAR_8 == '_')
    {

      VAR_8++;
      VAR_11 = VAR_8;

      do
 VAR_8++;
      while (FUNC_0 (*VAR_8) || *VAR_8 == '_');

      VAR_10 = FUNC_2 (VAR_4, VAR_11, VAR_8 - VAR_11);
      if (!VAR_10)
 goto error;

      VAR_9 |= VAR_10->field;
    }
  else
    {
      if (FUNC_0 (*VAR_8))
 goto error;

      VAR_9 |= (VAR_1 | VAR_2);
    }
  *VAR_7 = VAR_8;
  return VAR_9;

 error:
  VAR_6.error = FUNC_1("flag for {c}psr instruction expected");
  return VAR_0;
}
