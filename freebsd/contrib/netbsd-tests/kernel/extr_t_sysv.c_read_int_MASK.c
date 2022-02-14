
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int,int*,int) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1, VAR_0);
 if (VAR_2 == -1)
  return -1;
 else {
  int VAR_3;
  FUNC_0(FUNC_3(VAR_2, &VAR_3, sizeof(VAR_3)), sizeof(VAR_3));
  FUNC_1(VAR_2);
  return VAR_3;
 }
}
