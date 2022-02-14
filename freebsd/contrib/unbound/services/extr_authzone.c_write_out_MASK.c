
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 size_t FUNC_0 (char const*,int,size_t,int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(FILE* VAR_1, const char* VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 if(VAR_3 == 0)
  return 1;
 VAR_4 = FUNC_0(VAR_2, 1, VAR_3, VAR_1);
 if(VAR_4 == 0) {
  FUNC_1("write failed: %s", FUNC_2(VAR_0));
  return 0;
 } else if(VAR_4 < VAR_3) {
  FUNC_1("write failed: too short (disk full?)");
  return 0;
 }
 return 1;
}
