
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *,void*,int ,void**) ;
 int FUNC_1 (struct thread*) ;
 int * FUNC_2 (struct thread*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

void
FUNC_3(struct thread *VAR_5, void *VAR_6, size_t *VAR_7)
{
 void *VAR_8;
 size_t VAR_9;

 VAR_9 = 0;
 if (VAR_3) {
  if (VAR_6 != ((void*)0)) {
   FUNC_1(VAR_5);
   VAR_9 += FUNC_0(VAR_0,
       FUNC_2(VAR_5), VAR_6,
       VAR_2, &VAR_8);
   *(uint64_t *)((char *)VAR_8 + VAR_1) =
       VAR_4;
  } else
   VAR_9 += FUNC_0(VAR_0, ((void*)0), ((void*)0),
       VAR_2, ((void*)0));
 }
 *VAR_7 = VAR_9;
}
