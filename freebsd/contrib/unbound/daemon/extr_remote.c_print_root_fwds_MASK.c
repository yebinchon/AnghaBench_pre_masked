
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iter_forwards {int dummy; } ;
struct delegpt {int name; } ;
typedef int RES ;


 int VAR_0 ;
 struct delegpt* FUNC_0 (struct iter_forwards*,int *,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int *,int *,int ,struct delegpt*) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int
FUNC_5(RES* VAR_1, struct iter_forwards* VAR_2, uint8_t* VAR_3)
{
 struct delegpt* VAR_4;
 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_0);
 if(!VAR_4)
  return FUNC_4(VAR_1, "off (using root hints)\n");

 FUNC_1(FUNC_2(VAR_4->name, VAR_3)==0);
 return FUNC_3(VAR_1, ((void*)0), VAR_3, VAR_0, VAR_4);
}
