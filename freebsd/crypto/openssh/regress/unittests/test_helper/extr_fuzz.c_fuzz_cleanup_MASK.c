
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuzz {struct fuzz* fuzzed; struct fuzz* seed; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fuzz*) ;
 int * VAR_2 ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(struct fuzz *VAR_3)
{
 FUNC_0(("cleanup, fuzz = %p", VAR_3));




 FUNC_1(VAR_3 != ((void*)0));
 FUNC_1(VAR_3->seed != ((void*)0));
 FUNC_1(VAR_3->fuzzed != ((void*)0));
 FUNC_2(VAR_3->seed);
 FUNC_2(VAR_3->fuzzed);
 FUNC_2(VAR_3);
}
