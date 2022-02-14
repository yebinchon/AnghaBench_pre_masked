
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {size_t first_size; size_t total_large; } ;


 int VAR_0 ;
 int FUNC_0 (struct regional*) ;

size_t
FUNC_1(struct regional* VAR_1)
{
 return VAR_1->first_size + (FUNC_0(VAR_1)-1)*VAR_0
  + VAR_1->total_large;
}
