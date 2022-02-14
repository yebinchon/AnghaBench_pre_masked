
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int netdissect_options ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(netdissect_options *VAR_0,
                const char *VAR_1, u_int VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;


 while (VAR_2 > (3 * sizeof(short))) {
     FUNC_2(*VAR_1, 3 * sizeof(short));
     VAR_3 = FUNC_0(VAR_1);
     if (VAR_3 > 1024)
  return (1);
     VAR_1 += sizeof(short);
     VAR_2 -= sizeof(short);
     VAR_4 = FUNC_0(VAR_1);
     VAR_1 += sizeof(short);
     VAR_2 -= sizeof(short);
     VAR_5 = FUNC_0(VAR_1);
     VAR_1 += sizeof(short);
     VAR_2 -= sizeof(short);
     FUNC_1((VAR_0, "{areas %d-%d cost %d hops %d} ", VAR_4, VAR_4 + VAR_3,
       FUNC_3(VAR_5), FUNC_4(VAR_5)));
 }
 return (1);

trunc:
 return (0);
}
