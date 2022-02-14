
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct pthread*) ;
 int FUNC_1 (struct pthread*,struct pthread*) ;
 int FUNC_2 (struct pthread*,struct pthread*,int) ;

int
FUNC_3(struct pthread *VAR_1, struct pthread *VAR_2,
    int VAR_3)
{
 int VAR_4;

 if (VAR_2 == ((void*)0))

  return (VAR_0);

 if ((VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3)) == 0) {
  VAR_2->refcount++;
  FUNC_0(VAR_1);
  FUNC_1(VAR_1, VAR_2);
 }


 return (VAR_4);
}
