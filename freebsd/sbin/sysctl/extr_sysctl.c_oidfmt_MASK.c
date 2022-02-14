
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int,size_t,int ) ;
 int VAR_2 ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int*,int,int *,size_t*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(int *VAR_3, int VAR_4, char *VAR_5, u_int *VAR_6)
{
 int VAR_7[VAR_1+2];
 u_char VAR_8[VAR_0];
 int VAR_9;
 size_t VAR_10;

 VAR_7[0] = 0;
 VAR_7[1] = 4;
 FUNC_1(VAR_7 + 2, VAR_3, VAR_4 * sizeof(int));

 VAR_10 = sizeof(VAR_8);
 VAR_9 = FUNC_3(VAR_7, VAR_4 + 2, VAR_8, &VAR_10, 0, 0);
 if (VAR_9)
  FUNC_0(1, "sysctl fmt %d %zu %d", VAR_9, VAR_10, VAR_2);

 if (VAR_6)
  *VAR_6 = *(u_int *)VAR_8;

 if (VAR_5)
  FUNC_2(VAR_5, (char *)(VAR_8 + sizeof(u_int)));
 return (0);
}
