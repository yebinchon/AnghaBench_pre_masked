
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu_chunk {int immutable; } ;
struct page {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct pcpu_chunk*,unsigned int,int) ;
 struct page* FUNC_2 (void*) ;

__attribute__((used)) static struct page *FUNC_3(struct pcpu_chunk *VAR_0,
        unsigned int VAR_1, int VAR_2)
{

 FUNC_0(VAR_0->immutable);

 return FUNC_2((void *)FUNC_1(VAR_0, VAR_1, VAR_2));
}
