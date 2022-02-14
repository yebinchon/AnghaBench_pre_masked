
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int * FUNC_2 (char const*,int ) ;
 int FUNC_3 (int ,...) ;
 int * VAR_1 ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5 (const char *VAR_2)
{
  FILE *VAR_3 = FUNC_2 (VAR_2, VAR_0);

  if (!VAR_3)

    FUNC_1 (FUNC_0("Can't open def file: %s"), VAR_2);

  VAR_1 = VAR_3;


  FUNC_3 (FUNC_0("Processing def file: %s"), VAR_2);

  FUNC_4 ();

  FUNC_3 (FUNC_0("Processed def file"));
}
