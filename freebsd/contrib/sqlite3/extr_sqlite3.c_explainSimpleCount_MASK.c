
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int zName; } ;
typedef TYPE_1__ Table ;
struct TYPE_12__ {char* zName; } ;
struct TYPE_11__ {int explain; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ Index ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,int ,char*,int ,char*,char*) ;

__attribute__((used)) static void FUNC_3(
  Parse *VAR_0,
  Table *VAR_1,
  Index *VAR_2
){
  if( VAR_0->explain==2 ){
    int VAR_3 = (VAR_2!=0 && (FUNC_0(VAR_1) || !FUNC_1(VAR_2)));
    FUNC_2(VAR_0, 0, "SCAN TABLE %s%s%s",
        VAR_1->zName,
        VAR_3 ? " USING COVERING INDEX " : "",
        VAR_3 ? VAR_2->zName : ""
    );
  }
}
