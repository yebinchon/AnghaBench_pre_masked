
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff {int options; int format; int mstackpos; int rstackpos; char escape; int reqtab; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct roff* FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ) ;

struct roff *
FUNC_2(int VAR_3)
{
 struct roff *VAR_4;

 VAR_4 = FUNC_0(1, sizeof(struct roff));
 VAR_4->reqtab = FUNC_1(0, VAR_2);
 VAR_4->options = VAR_3;
 VAR_4->format = VAR_3 & (VAR_1 | VAR_0);
 VAR_4->mstackpos = -1;
 VAR_4->rstackpos = -1;
 VAR_4->escape = '\\';
 return VAR_4;
}
