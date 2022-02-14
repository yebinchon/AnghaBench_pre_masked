
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wavnc_info ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int,unsigned int*,int,unsigned int*) ;

__attribute__((used)) static int
FUNC_1(wavnc_info *VAR_1, char *VAR_2)
{
 unsigned int VAR_3[2];
 unsigned int VAR_4 = VAR_0;

 FUNC_0(VAR_1, 1, &VAR_4, 2, VAR_3);

 VAR_2[0] = VAR_3[0] >> 8;
 VAR_2[1] = VAR_3[0] & 255;
 VAR_2[2] = '\0';

 return VAR_3[0];
}
