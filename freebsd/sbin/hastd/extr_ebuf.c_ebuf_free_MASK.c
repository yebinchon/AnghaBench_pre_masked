
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebuf {scalar_t__ eb_magic; struct ebuf* eb_start; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ebuf*) ;

void
FUNC_2(struct ebuf *VAR_1)
{

 FUNC_0(VAR_1 != ((void*)0) && VAR_1->eb_magic == VAR_0);

 VAR_1->eb_magic = 0;

 FUNC_1(VAR_1->eb_start);
 FUNC_1(VAR_1);
}
