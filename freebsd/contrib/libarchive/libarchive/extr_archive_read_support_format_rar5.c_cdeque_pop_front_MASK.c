
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdeque {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cdeque*,void**) ;

__attribute__((used)) static int FUNC_1(struct cdeque* VAR_3, void** VAR_4) {
 if(!VAR_3 || !VAR_4)
  return VAR_2;

 if(VAR_3->size == 0)
  return VAR_1;

 FUNC_0(VAR_3, VAR_4);
 return VAR_0;
}
