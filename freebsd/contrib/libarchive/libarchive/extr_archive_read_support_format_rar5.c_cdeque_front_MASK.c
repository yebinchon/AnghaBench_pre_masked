
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdeque {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cdeque*,void**) ;

__attribute__((used)) static int FUNC_1(struct cdeque* VAR_2, void** VAR_3) {
 if(VAR_2->size > 0) {
  FUNC_0(VAR_2, VAR_3);
  return VAR_0;
 } else
  return VAR_1;
}
