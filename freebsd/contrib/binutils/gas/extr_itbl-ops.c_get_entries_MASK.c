
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itbl_entry {int dummy; } ;
typedef size_t e_type ;
typedef size_t e_processor ;


 struct itbl_entry*** VAR_0 ;

__attribute__((used)) static struct itbl_entry **
FUNC_0 (e_processor VAR_1, e_type VAR_2)
{
  return &VAR_0[VAR_1][VAR_2];
}
