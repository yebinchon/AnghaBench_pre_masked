
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tablename; } ;
typedef TYPE_1__ ipfw_xtable_info ;
typedef int ipfw_obj_header ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int **) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int
FUNC_4(ipfw_xtable_info *VAR_1, void *VAR_2)
{
 ipfw_obj_header *VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_5 = VAR_2 == ((void*)0) ? 0 : 1;

 if ((VAR_4 = FUNC_2(VAR_1, &VAR_3)) != 0) {
  FUNC_0(VAR_0, "Error requesting table %s list", VAR_1->tablename);
  return (VAR_4);
 }

 FUNC_3(VAR_3, VAR_5);

 FUNC_1(VAR_3);
 return (0);
}
