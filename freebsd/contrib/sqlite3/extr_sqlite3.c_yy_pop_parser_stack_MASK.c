
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t major; int minor; } ;
typedef TYPE_1__ yyStackEntry ;
struct TYPE_6__ {int yytos; int yystack; } ;
typedef TYPE_2__ yyParser ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,char*,char*,char*) ;
 char** VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 int FUNC_2 (TYPE_2__*,size_t,int *) ;

__attribute__((used)) static void FUNC_3(yyParser *VAR_3){
  yyStackEntry *VAR_4;
  FUNC_0( VAR_3->yytos!=0 );
  FUNC_0( VAR_3->yytos > VAR_3->yystack );
  VAR_4 = VAR_3->yytos--;

  if( VAR_1 ){
    FUNC_1(VAR_1,"%sPopping %s\n",
      VAR_2,
      VAR_0[VAR_4->major]);
  }

  FUNC_2(VAR_3, VAR_4->major, &VAR_4->minor);
}
