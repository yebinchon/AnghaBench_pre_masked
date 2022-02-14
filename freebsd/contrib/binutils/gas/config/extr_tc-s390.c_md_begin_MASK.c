
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_opcode {scalar_t__ min_cpu; int name; } ;
typedef scalar_t__ bfd_boolean ;
typedef int PTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 char* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct s390_opcode* VAR_12 ;
 int VAR_13 ;
 struct s390_opcode* VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int VAR_16 ;

void
FUNC_9 ()
{
  register const struct s390_opcode *VAR_17;
  const struct s390_opcode *VAR_18;
  bfd_boolean VAR_19 = VAR_0;
  const char *VAR_20;


  if (VAR_6 == 64 && VAR_4 < VAR_1)
    FUNC_3 ("The 64 bit file format is used without esame instructions.");

  VAR_7 = -VAR_6 / 8;


  if (VAR_8)
    FUNC_4 (VAR_15, VAR_8);


  VAR_13 = FUNC_6 ();

  VAR_18 = VAR_14 + VAR_10;
  for (VAR_17 = VAR_14; VAR_17 < VAR_18; VAR_17++)
    {
      VAR_20 = FUNC_5 (VAR_13, VAR_17->name, (PTR) VAR_17);
      if (VAR_20 != (const char *) ((void*)0))
 {
   FUNC_2 (FUNC_0("Internal assembler error for instruction format %s"),
    VAR_17->name);
   VAR_19 = VAR_2;
 }
    }


  VAR_11 = FUNC_6 ();

  VAR_18 = VAR_12 + VAR_9;
  for (VAR_17 = VAR_12; VAR_17 < VAR_18; VAR_17++)
    if (VAR_17->min_cpu <= VAR_4)
      {
 VAR_20 = FUNC_5 (VAR_11, VAR_17->name, (PTR) VAR_17);
 if (VAR_20 != (const char *) ((void*)0))
   {
     FUNC_2 (FUNC_0("Internal assembler error for instruction %s"),
      VAR_17->name);
     VAR_19 = VAR_2;
   }
 while (VAR_17 < VAR_18 - 1 && FUNC_8 (VAR_17->name, VAR_17[1].name) == 0)
   VAR_17++;
      }

  if (VAR_19)
    FUNC_1 ();

  FUNC_7 (VAR_16, 2);
  FUNC_7 (VAR_5, 2);
  FUNC_7 (VAR_3, 2);

}
