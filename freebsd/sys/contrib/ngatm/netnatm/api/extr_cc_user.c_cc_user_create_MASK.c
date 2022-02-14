
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccuser {char* name; struct ccdata* cc; int connq; void* uarg; int state; } ;
struct ccdata {int log; int user_list; } ;


 int VAR_0 ;
 struct ccuser* FUNC_0 (int) ;
 int FUNC_1 (int *,struct ccuser*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct ccuser*,char*,char const*) ;
 int VAR_2 ;
 int FUNC_4 (char*,char const*,int) ;

struct ccuser *
FUNC_5(struct ccdata *VAR_3, void *VAR_4, const char *VAR_5)
{
 struct ccuser *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  return (((void*)0));

 VAR_6->cc = VAR_3;
 VAR_6->state = VAR_1;
 VAR_6->uarg = VAR_4;
 FUNC_4(VAR_6->name, VAR_5, sizeof(VAR_6->name));
 VAR_6->name[sizeof(VAR_6->name) - 1] = '\0';
 FUNC_2(&VAR_6->connq);
 FUNC_1(&VAR_3->user_list, VAR_6, VAR_2);

 if (VAR_6->cc->log & VAR_0)
  FUNC_3(VAR_6, "created with name '%s'", VAR_5);

 return (VAR_6);
}
