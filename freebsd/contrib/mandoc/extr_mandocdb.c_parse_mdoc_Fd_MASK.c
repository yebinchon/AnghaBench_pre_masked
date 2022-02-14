
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {scalar_t__ sec; scalar_t__ type; char* string; struct roff_node* next; struct roff_node* child; } ;
struct roff_meta {int dummy; } ;
struct mpage {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mpage*,char*,int,int ) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(struct mpage *VAR_3, const struct roff_meta *VAR_4,
 const struct roff_node *VAR_5)
{
 char *VAR_6, *VAR_7;
 size_t VAR_8;

 if (VAR_1 != VAR_5->sec ||
     ((void*)0) == (VAR_5 = VAR_5->child) ||
     VAR_5->type != VAR_0)
  return 0;






 if (FUNC_1("#include", VAR_5->string))
  return 0;

 if ((VAR_5 = VAR_5->next) == ((void*)0) || VAR_5->type != VAR_0)
  return 0;






 VAR_6 = VAR_5->string;
 if ('<' == *VAR_6 || '"' == *VAR_6)
  VAR_6++;

 if (0 == (VAR_8 = FUNC_2(VAR_6)))
  return 0;

 VAR_7 = &VAR_6[(int)VAR_8 - 1];
 if ('>' == *VAR_7 || '"' == *VAR_7)
  VAR_7--;

 if (VAR_7 > VAR_6)
  FUNC_0(VAR_3, VAR_6, VAR_7 - VAR_6 + 1, VAR_2);
 return 0;
}
