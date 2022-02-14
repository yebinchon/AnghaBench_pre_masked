
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xref ;
typedef int uint32_t ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int *,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,int*,int) ;
 int FUNC_4 (int ) ;

int
FUNC_5(device_t VAR_1, uint32_t *VAR_2)
{
 pcell_t VAR_3[2];
 phandle_t VAR_4;
 phandle_t VAR_5;
 phandle_t VAR_6;
 int VAR_7;

 if ((VAR_6 = FUNC_4(VAR_1)) == -1)
  return (VAR_0);

 if (FUNC_3(VAR_6, "beri-mem", &VAR_5,
  sizeof(VAR_5)) == -1) {
  return (VAR_0);
 }

 VAR_4 = FUNC_2(VAR_5);
 if ((VAR_7 = FUNC_1(VAR_4, "reg")) <= 0)
  return (VAR_0);
 FUNC_0(VAR_4, "reg", VAR_3, VAR_7);
 *VAR_2 = VAR_3[0];

 return (0);
}
