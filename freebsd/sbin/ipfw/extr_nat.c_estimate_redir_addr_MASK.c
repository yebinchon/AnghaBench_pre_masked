
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct nat44_cfg_spool {int dummy; } ;
struct nat44_cfg_redir {int dummy; } ;


 char* FUNC_0 (char*,char) ;

__attribute__((used)) static int
FUNC_1(int *VAR_0, char ***VAR_1)
{
 size_t VAR_2 = sizeof(struct nat44_cfg_redir);
 char *VAR_3 = **VAR_1;
 u_int VAR_4 = 0;

 (void)VAR_0;
 while ((VAR_3 = FUNC_0(VAR_3, ',')) != ((void*)0)) {
  VAR_4++;
  VAR_3++;
 }

 if (VAR_4 > 0)
  VAR_4++;

 VAR_2 += VAR_4 * sizeof(struct nat44_cfg_spool);

 return (VAR_2);
}
