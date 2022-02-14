
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_watch {char* path; unsigned long ino; scalar_t__ dev; int count; int rules; } ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 struct audit_watch* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 struct audit_watch* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct audit_watch *FUNC_5(char *VAR_2)
{
 struct audit_watch *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_1);
 if (FUNC_4(!VAR_3))
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_3->rules);
 FUNC_2(&VAR_3->count, 1);
 VAR_3->path = VAR_2;
 VAR_3->dev = (dev_t)-1;
 VAR_3->ino = (unsigned long)-1;

 return VAR_3;
}
