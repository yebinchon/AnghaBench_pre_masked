
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req_arg {int flag; int len; int value; int kvalue; } ;
struct gctl_req {int nerror; int narg; struct gctl_req_arg* arg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct gctl_req *VAR_1)
{
 int VAR_2, VAR_3;
 struct gctl_req_arg *VAR_4;

 if (VAR_1->nerror)
  return;
 VAR_2 = 0;
 VAR_4 = VAR_1->arg;
 for (VAR_3 = 0; VAR_3 < VAR_1->narg; VAR_3++, VAR_4++) {
  if (!(VAR_4->flag & VAR_0))
   continue;
  VAR_2 = FUNC_0(VAR_4->kvalue, VAR_4->value, VAR_4->len);
  if (!VAR_2)
   continue;
  VAR_1->nerror = VAR_2;
  return;
 }
 return;
}
