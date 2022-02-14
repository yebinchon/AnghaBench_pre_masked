
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int testing_map ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (unsigned long*,int) ;
 int FUNC_3 (int ,unsigned long*) ;

int FUNC_4(u8 VAR_2)
{
 unsigned long VAR_3[FUNC_0(VAR_1)];

 FUNC_2(VAR_3, sizeof(VAR_3));
 if (!FUNC_3(VAR_2, VAR_3)) {
  FUNC_1(VAR_0,
       "node (%u) does not have heartbeating enabled.\n",
       VAR_2);
  return 0;
 }

 return 1;
}
