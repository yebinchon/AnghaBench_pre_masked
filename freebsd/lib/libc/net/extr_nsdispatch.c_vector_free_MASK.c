
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* vector_free_elem ) (void*) ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (unsigned int,void*,unsigned int,size_t) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, unsigned int *VAR_1, size_t VAR_2,
    vector_free_elem VAR_3)
{
 unsigned int VAR_4;
 void *VAR_5;

 for (VAR_4 = 0; VAR_4 < *VAR_1; VAR_4++) {
  VAR_5 = FUNC_1(VAR_4, VAR_0, *VAR_1, VAR_2);
  if (VAR_5 != ((void*)0))
   VAR_3(VAR_5);
 }
 FUNC_0(VAR_0);
 *VAR_1 = 0;
}
