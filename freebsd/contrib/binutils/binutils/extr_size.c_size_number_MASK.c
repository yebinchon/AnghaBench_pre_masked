
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bfd_size_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,unsigned long) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2 (bfd_size_type VAR_3)
{
  char VAR_4[40];

  FUNC_0 (VAR_4,
    (VAR_2 == VAR_0 ? "%lu" :
    ((VAR_2 == VAR_1) ? "0%lo" : "0x%lx")),
    (unsigned long) VAR_3);

  return FUNC_1 (VAR_4);
}
