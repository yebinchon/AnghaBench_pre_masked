
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int*,int,int*,size_t*,char const*,int ) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, int *VAR_2)
{
 int VAR_3[2];
 int VAR_4;
 size_t VAR_5;

 VAR_3[0] = 0;
 VAR_3[1] = 3;

 VAR_5 = VAR_0 * sizeof(int);
 VAR_4 = FUNC_1(VAR_3, 2, VAR_2, &VAR_5, VAR_1, FUNC_0(VAR_1));
 if (VAR_4 < 0)
  return (VAR_4);
 VAR_5 /= sizeof(int);
 return (VAR_5);
}
