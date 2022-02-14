
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int*,int,int*,size_t*,char const*,int ) ;

int
FUNC_2(const char *VAR_2, int *VAR_3, size_t *VAR_4)
{
 int VAR_5[2];
 int VAR_6;

 VAR_5[0] = VAR_0;
 VAR_5[1] = VAR_1;

 *VAR_4 *= sizeof(int);
 VAR_6 = FUNC_1(VAR_5, 2, VAR_3, VAR_4, VAR_2, FUNC_0(VAR_2));
 *VAR_4 /= sizeof(int);
 return (VAR_6);
}
