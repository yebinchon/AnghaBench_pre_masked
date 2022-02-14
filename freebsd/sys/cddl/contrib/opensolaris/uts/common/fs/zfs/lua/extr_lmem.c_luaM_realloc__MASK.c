
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {scalar_t__ GCdebt; int ud; void* (* frealloc ) (int ,void*,size_t,size_t) ;scalar_t__ gcrunning; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int ,void*,size_t,size_t) ;
 void* FUNC_6 (int ,void*,size_t,size_t) ;

void *FUNC_7 (lua_State *VAR_1, void *VAR_2, size_t VAR_3, size_t VAR_4) {
  void *VAR_5;
  global_State *VAR_6 = FUNC_0(VAR_1);
  size_t VAR_7 = (VAR_2) ? VAR_3 : 0;
  FUNC_4((VAR_7 == 0) == (VAR_2 == ((void*)0)));




  VAR_5 = (*VAR_6->frealloc)(VAR_6->ud, VAR_2, VAR_3, VAR_4);
  if (VAR_5 == ((void*)0) && VAR_4 > 0) {
    FUNC_1(VAR_1, VAR_4 > VAR_7,
                 "realloc cannot fail when shrinking a block");
    if (VAR_6->gcrunning) {
      FUNC_2(VAR_1, 1);
      VAR_5 = (*VAR_6->frealloc)(VAR_6->ud, VAR_2, VAR_3, VAR_4);
    }
    if (VAR_5 == ((void*)0))
      FUNC_3(VAR_1, VAR_0);
  }
  FUNC_4((VAR_4 == 0) == (VAR_5 == ((void*)0)));
  VAR_6->GCdebt = (VAR_6->GCdebt + VAR_4) - VAR_7;
  return VAR_5;
}
