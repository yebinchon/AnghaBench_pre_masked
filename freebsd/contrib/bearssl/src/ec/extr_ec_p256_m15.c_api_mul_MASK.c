
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int p256_jacobian ;


 int FUNC_0 (int *,unsigned char*,size_t) ;
 int FUNC_1 (unsigned char*,int *) ;
 int FUNC_2 (int *,unsigned char const*,size_t) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static uint32_t
FUNC_4(unsigned char *VAR_0, size_t VAR_1,
 const unsigned char *VAR_2, size_t VAR_3, int VAR_4)
{
 uint32_t VAR_5;
 p256_jacobian VAR_6;

 (void)VAR_4;
 VAR_5 = FUNC_0(&VAR_6, VAR_0, VAR_1);
 FUNC_2(&VAR_6, VAR_2, VAR_3);
 if (VAR_1 >= 65) {
  FUNC_3(&VAR_6);
  FUNC_1(VAR_0, &VAR_6);
 }
 return VAR_5;
}
