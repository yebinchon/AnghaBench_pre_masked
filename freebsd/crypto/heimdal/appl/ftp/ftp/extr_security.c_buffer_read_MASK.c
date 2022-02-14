
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int size; int index; scalar_t__ data; } ;


 int FUNC_0 (void*,char*,size_t) ;
 size_t FUNC_1 (size_t,int) ;

__attribute__((used)) static size_t
FUNC_2(struct buffer *VAR_0, void *VAR_1, size_t VAR_2)
{
    VAR_2 = FUNC_1(VAR_2, VAR_0->size - VAR_0->index);
    FUNC_0(VAR_1, (char*)VAR_0->data + VAR_0->index, VAR_2);
    VAR_0->index += VAR_2;
    return VAR_2;
}
