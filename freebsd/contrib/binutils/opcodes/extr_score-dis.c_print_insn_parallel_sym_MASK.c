
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {int (* fprintf_func ) (void*,char*,char*) ;void* stream; } ;
typedef int (* fprintf_ftype ) (void*,char*,char*) ;



__attribute__((used)) static void
FUNC_0 (struct disassemble_info *VAR_0)
{
  void *VAR_1 = VAR_0->stream;
  fprintf_ftype VAR_2 = VAR_0->fprintf_func;




  VAR_2 (VAR_1, "%s", " ||\n      \t          \t");
}
