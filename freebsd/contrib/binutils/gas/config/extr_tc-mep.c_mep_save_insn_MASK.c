
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mep_insn ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (size_t) ;
 size_t VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_2 (mep_insn VAR_3)
{

  if (VAR_1 < 0 || VAR_1 >= VAR_0)
    {
      FUNC_0("index into saved_insns[] out of bounds.");
      return;
    }
  VAR_2[VAR_1] = VAR_3;
  FUNC_1(VAR_1);
  VAR_1++;
}
