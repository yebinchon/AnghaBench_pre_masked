
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint {int line_number; int * source_file; int address; int number; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2 (struct tracepoint *VAR_2)
{
  FUNC_1 ("Tracepoint %d", VAR_2->number);

  if (VAR_0 || (VAR_2->source_file == ((void*)0)))
    {
      FUNC_1 (" at ");
      FUNC_0 (VAR_2->address, 1, VAR_1);
    }
  if (VAR_2->source_file)
    FUNC_1 (": file %s, line %d.",
       VAR_2->source_file, VAR_2->line_number);

  FUNC_1 ("\n");
}
