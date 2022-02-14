
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int bpf_u_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*,int*,int*) ;

int
FUNC_1(const char *VAR_3, bpf_u_int32 *VAR_4)
{




 u_int VAR_5, VAR_6;

 if (FUNC_0(VAR_3, "%d.%d", &VAR_6, &VAR_5) != 2)
  return(0);

 *VAR_4 = (VAR_6 << 10) & 0176000;
 *VAR_4 |= (VAR_5 & 01777);

 return(32);
}
