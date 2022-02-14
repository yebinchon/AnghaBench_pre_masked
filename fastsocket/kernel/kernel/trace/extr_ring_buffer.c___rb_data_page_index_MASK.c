
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_data_page {void* data; } ;



__attribute__((used)) static inline void *
FUNC_0(struct buffer_data_page *VAR_0, unsigned VAR_1)
{
 return VAR_0->data + VAR_1;
}
