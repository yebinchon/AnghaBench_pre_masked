
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buffer_page {TYPE_1__* page; } ;
struct TYPE_2__ {void* data; } ;



__attribute__((used)) static inline void *FUNC_0(struct buffer_page *VAR_0, unsigned VAR_1)
{
 return VAR_0->page->data + VAR_1;
}
