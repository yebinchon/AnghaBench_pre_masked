
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {scalar_t__ type; char* string; scalar_t__ sec; } ;
struct mpage {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mpage*,char*,size_t,int ) ;
 size_t FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2(struct mpage *VAR_4, const struct roff_node *VAR_5)
{
 char *VAR_6;
 size_t VAR_7;

 if (VAR_5->type != VAR_1)
  return;



 VAR_6 = VAR_5->string;
 while (*VAR_6 == '(' || *VAR_6 == '*')
  VAR_6++;
 VAR_7 = FUNC_1(VAR_6, "()");

 FUNC_0(VAR_4, VAR_6, VAR_7, VAR_3);
 if (VAR_5->sec == VAR_2)
  FUNC_0(VAR_4, VAR_6, VAR_7, VAR_0);
}
