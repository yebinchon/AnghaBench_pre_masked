
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned int*,int ,int) ;
 int FUNC_1 (char const*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, uint8_t *VAR_2)
{
 int VAR_3, VAR_4;
 unsigned int VAR_5[VAR_0];

 VAR_3 = FUNC_1(VAR_1, "%x%*c%x%*c%x%*c%x%*c%x%*c%x",
     &VAR_5[0], &VAR_5[1], &VAR_5[2],
     &VAR_5[3], &VAR_5[4], &VAR_5[5]);
 if (VAR_3 < VAR_0) {
  FUNC_0(VAR_2, 0, VAR_0);
  return (1);
 }


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4 ++)
  VAR_2[VAR_4] = (VAR_5[VAR_4] & 0xff);

 return (0);
}
