
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flex_array {unsigned int element_size; } ;


 unsigned int FUNC_0 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct flex_array *VAR_0,
     unsigned int VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = VAR_1 %
    FUNC_0(VAR_0->element_size);
 return VAR_2 * VAR_0->element_size;
}
