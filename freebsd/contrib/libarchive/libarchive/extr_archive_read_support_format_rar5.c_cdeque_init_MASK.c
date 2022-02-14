
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdeque {int cap_mask; int * arr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cdeque*) ;
 int * FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct cdeque* VAR_3, int VAR_4) {
 if(VAR_3 == ((void*)0) || VAR_4 == 0)
  return VAR_2;

 VAR_3->cap_mask = VAR_4 - 1;
 VAR_3->arr = ((void*)0);

 if((VAR_4 & VAR_3->cap_mask) > 0)
  return VAR_2;

 FUNC_0(VAR_3);
 VAR_3->arr = FUNC_1(sizeof(void*) * VAR_4);

 return VAR_3->arr ? VAR_1 : VAR_0;
}
