
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kref {int refcount; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int *) ;
 scalar_t__ VAR_0 ;

int FUNC_2(struct kref *VAR_1, unsigned int VAR_2,
      void (*VAR_3)(struct kref *VAR_4))
{
 FUNC_0(VAR_3 == ((void*)0));
 FUNC_0(VAR_3 == (void (*)(struct kref *))VAR_0);

 if (FUNC_1((int) VAR_2, &VAR_1->refcount)) {
  VAR_3(VAR_1);
  return 1;
 }
 return 0;
}
