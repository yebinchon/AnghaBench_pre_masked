
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_attr {int flags; scalar_t__ guardsize_attr; int * stackaddr_attr; } ;


 int VAR_0 ;
 int FUNC_0 (struct pthread_attr*) ;

__attribute__((used)) static int
FUNC_1(struct pthread_attr *VAR_1)
{
 int VAR_2;


 if ((VAR_1->stackaddr_attr) != ((void*)0)) {
  VAR_1->guardsize_attr = 0;
  VAR_1->flags |= VAR_0;
  VAR_2 = 0;
 }
 else
  VAR_2 = FUNC_0(VAR_1);
 return (VAR_2);
}
