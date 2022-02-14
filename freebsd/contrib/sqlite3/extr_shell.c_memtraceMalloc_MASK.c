
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* xRoundup ) (int) ;void* (* xMalloc ) (int) ;} ;


 int FUNC_0 (scalar_t__,char*,int) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int) ;

__attribute__((used)) static void *FUNC_4(int VAR_2){
  if( VAR_1 ){
    FUNC_0(VAR_1, "MEMTRACE: allocate %d bytes\n",
            VAR_0.xRoundup(VAR_2));
  }
  return VAR_0.xMalloc(VAR_2);
}
