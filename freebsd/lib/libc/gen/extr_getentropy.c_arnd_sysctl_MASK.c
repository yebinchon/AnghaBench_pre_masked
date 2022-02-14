
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int,int *,size_t*,int *,int ) ;

__attribute__((used)) static size_t
FUNC_1(u_char *VAR_2, size_t VAR_3)
{
 int VAR_4[2];
 size_t VAR_5, VAR_6;

 VAR_4[0] = VAR_0;
 VAR_4[1] = VAR_1;
 VAR_6 = 0;

 do {
  VAR_5 = VAR_3;
  if (FUNC_0(VAR_4, 2, VAR_2, &VAR_5, ((void*)0), 0) == -1)
   return (VAR_6);
  VAR_6 += VAR_5;
  VAR_2 += VAR_5;
  VAR_3 -= VAR_5;
 } while (VAR_3 > 0);

 return (VAR_6);
}
