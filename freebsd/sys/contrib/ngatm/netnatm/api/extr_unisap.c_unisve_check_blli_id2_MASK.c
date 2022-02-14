
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unisve_blli_id2 {scalar_t__ tag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

int
FUNC_0(const struct unisve_blli_id2 *VAR_5)
{
 if (VAR_5->tag != VAR_4 &&
     VAR_5->tag != VAR_0 &&
     VAR_5->tag != VAR_1)
  return (VAR_2);
 return (VAR_3);
}
