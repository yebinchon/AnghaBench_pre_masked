
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int,int *,size_t) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(int VAR_4, unsigned int VAR_5,
    unsigned int VAR_6)
{
 uint8_t VAR_7[VAR_0];
 size_t VAR_8 = 0;

 VAR_8 += FUNC_1(VAR_7 + VAR_8, VAR_5);
 VAR_8 += FUNC_1(VAR_7 + VAR_8, VAR_6);

 if (FUNC_3(VAR_4, VAR_1, VAR_2) < 0) {
  FUNC_0("lseek: %s\n", FUNC_4(VAR_3));
  return -1;
 }

 if (FUNC_2(VAR_4, VAR_7, VAR_8) < 0)
  return -1;

 return 0;
}
