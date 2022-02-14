
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union evrec {int* c; } ;
struct seq_oss_readq {int dummy; } ;
typedef int rec ;


 int VAR_0 ;
 int FUNC_0 (union evrec*,int ,int) ;
 int FUNC_1 (struct seq_oss_readq*,union evrec*) ;

int
FUNC_2(struct seq_oss_readq *VAR_1, int VAR_2, unsigned char *VAR_3, int VAR_4)
{
 union evrec VAR_5;
 int VAR_6;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.c[0] = VAR_0;
 VAR_5.c[2] = VAR_2;

 while (VAR_4-- > 0) {
  VAR_5.c[1] = *VAR_3++;
  VAR_6 = FUNC_1(VAR_1, &VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
 }
 return 0;
}
