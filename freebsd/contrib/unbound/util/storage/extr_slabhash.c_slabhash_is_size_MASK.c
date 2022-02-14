
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabhash {size_t size; } ;


 size_t FUNC_0 (struct slabhash*) ;

int FUNC_1(struct slabhash* VAR_0, size_t VAR_1, size_t VAR_2)
{



 if(!VAR_0) return 0;
 if(VAR_0->size != VAR_2) return 0;
 if(VAR_2 == 0) return 0;
 if( (VAR_1/VAR_2)*VAR_2 == FUNC_0(VAR_0))
  return 1;
 return 0;
}
