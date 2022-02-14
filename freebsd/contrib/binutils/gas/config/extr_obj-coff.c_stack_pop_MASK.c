
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pointer; scalar_t__ element_size; char* data; } ;
typedef TYPE_1__ stack ;



__attribute__((used)) static char *
FUNC_0 (stack *VAR_0)
{
  if (VAR_0->pointer < VAR_0->element_size)
    {
      VAR_0->pointer = 0;
      return ((void*)0);
    }
  VAR_0->pointer -= VAR_0->element_size;
  return VAR_0->data + VAR_0->pointer;
}
