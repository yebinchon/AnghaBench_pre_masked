
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct witness {int w_line; } ;
struct lock_object {struct witness* lo_witness; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct lock_object *VAR_2)
{
 struct witness *VAR_3;

 if (VAR_0 || VAR_1 < 1 || VAR_2->lo_witness == ((void*)0))
  return (0);
 VAR_3 = VAR_2->lo_witness;
 return (VAR_3->w_line);
}
