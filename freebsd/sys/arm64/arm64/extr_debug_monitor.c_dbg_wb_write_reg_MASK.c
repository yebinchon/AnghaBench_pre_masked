
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_8, int VAR_9, uint64_t VAR_10)
{
 switch (VAR_8 + VAR_9) {
 FUNC_0(VAR_7, VAR_3, VAR_10);
 FUNC_0(VAR_6, VAR_2, VAR_10);
 FUNC_0(VAR_5, VAR_1, VAR_10);
 FUNC_0(VAR_4, VAR_0, VAR_10);
 default:
  FUNC_2("trying to write to wrong debug register %d\n", VAR_9);
  return;
 }
 FUNC_1();
}
