
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (char*,size_t,char*,double) ;

__attribute__((used)) static void
FUNC_1(char *VAR_0, size_t VAR_1, uint8_t *VAR_2)
{
 double VAR_3;

 VAR_3 = (double)VAR_2[0];
 VAR_3 += (double)VAR_2[1] / 256;

 FUNC_0(VAR_0, VAR_1, "%.2f C", VAR_3);
}
