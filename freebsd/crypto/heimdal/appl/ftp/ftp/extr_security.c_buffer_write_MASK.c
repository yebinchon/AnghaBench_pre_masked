
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {scalar_t__ index; scalar_t__ size; int * data; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (char*,void*,size_t) ;
 void* FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static size_t
FUNC_3(struct buffer *VAR_0, void *VAR_1, size_t VAR_2)
{
    if(VAR_0->index + VAR_2 > VAR_0->size) {
 void *VAR_3;
 if(VAR_0->data == ((void*)0))
     VAR_3 = FUNC_0(1024);
 else
     VAR_3 = FUNC_2(VAR_0->data, VAR_0->index + VAR_2);
 if(VAR_3 == ((void*)0))
     return -1;
 VAR_0->data = VAR_3;
 VAR_0->size = VAR_0->index + VAR_2;
    }
    FUNC_1((char*)VAR_0->data + VAR_0->index, VAR_1, VAR_2);
    VAR_0->index += VAR_2;
    return VAR_2;
}
