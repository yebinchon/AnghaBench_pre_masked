
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int mutex; } ;
struct TYPE_4__ {int (* xFree ) (void*) ;} ;
struct TYPE_5__ {TYPE_1__ m; scalar_t__ bMemstat; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,scalar_t__) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*) ;

void FUNC_9(void *VAR_5){
  if( VAR_5==0 ) return;
  FUNC_0( FUNC_2(VAR_5, VAR_0) );
  FUNC_0( FUNC_3(VAR_5, (u8)~VAR_0) );
  if( VAR_4.bMemstat ){
    FUNC_5(VAR_3);
    FUNC_4(VAR_2, FUNC_1(VAR_5));
    FUNC_4(VAR_1, 1);
    VAR_4.m.xFree(VAR_5);
    FUNC_6(VAR_3);
  }else{
    VAR_4.m.xFree(VAR_5);
  }
}
