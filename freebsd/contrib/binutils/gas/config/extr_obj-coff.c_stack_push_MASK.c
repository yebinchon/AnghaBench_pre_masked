
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pointer; scalar_t__ element_size; scalar_t__ size; scalar_t__ chunk_size; char* data; } ;
typedef TYPE_1__ stack ;


 int FUNC_0 (char*,char*,scalar_t__) ;
 char* FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static char *
FUNC_2 (stack *VAR_0, char *VAR_1)
{
  if (VAR_0->pointer + VAR_0->element_size >= VAR_0->size)
    {
      VAR_0->size += VAR_0->chunk_size;
      if ((VAR_0->data = FUNC_1 (VAR_0->data, VAR_0->size)) == ((void*)0))
 return ((void*)0);
    }
  FUNC_0 (VAR_0->data + VAR_0->pointer, VAR_1, VAR_0->element_size);
  VAR_0->pointer += VAR_0->element_size;
  return VAR_0->data + VAR_0->pointer;
}
