
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct direct {int d_reclen; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct direct*) ;
 char* VAR_1 ;
 int FUNC_1 (char*,struct direct*,int) ;
 int FUNC_2 (char*,int ,int) ;

int
FUNC_3(struct direct *VAR_2, int VAR_3)
{
 char *VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = VAR_0;
 FUNC_2(VAR_1, 0, VAR_0);
 for (VAR_4 = VAR_1, VAR_5 = 0; VAR_5 < VAR_3 - 1; VAR_5++) {
  VAR_2[VAR_5].d_reclen = FUNC_0(0, &VAR_2[VAR_5]);
  FUNC_1(VAR_4, &VAR_2[VAR_5], VAR_2[VAR_5].d_reclen);
  VAR_4 += VAR_2[VAR_5].d_reclen;
  VAR_6 -= VAR_2[VAR_5].d_reclen;
 }
 VAR_2[VAR_5].d_reclen = VAR_6;
 FUNC_1(VAR_4, &VAR_2[VAR_5], FUNC_0(0, &VAR_2[VAR_5]));
 return (VAR_0);
}
