
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebuf {scalar_t__ eb_magic; size_t eb_size; size_t eb_used; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

void
FUNC_1(struct ebuf *VAR_1, size_t VAR_2)
{

 FUNC_0(VAR_1 != ((void*)0) && VAR_1->eb_magic == VAR_0);
 FUNC_0(VAR_2 <= VAR_1->eb_size);

 VAR_1->eb_used += VAR_2;
 VAR_1->eb_size -= VAR_2;
}
