
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct audit_watch {int dummy; } ;
struct audit_krule {scalar_t__ listnr; struct audit_watch* watch; scalar_t__ tree; scalar_t__ inode_f; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct audit_watch*) ;
 int FUNC_1 (struct audit_watch*) ;
 int FUNC_2 (struct audit_watch*) ;
 int VAR_4 ;
 struct audit_watch* FUNC_3 (char*) ;

int FUNC_4(struct audit_krule *VAR_5, char *VAR_6, int VAR_7, u32 VAR_8)
{
 struct audit_watch *VAR_9;

 if (!VAR_4)
  return -VAR_3;

 if (VAR_6[0] != '/' || VAR_6[VAR_7-1] == '/' ||
     VAR_5->listnr != VAR_0 ||
     VAR_8 != VAR_1 ||
     VAR_5->inode_f || VAR_5->watch || VAR_5->tree)
  return -VAR_2;

 VAR_9 = FUNC_3(VAR_6);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 FUNC_2(VAR_9);
 VAR_5->watch = VAR_9;

 return 0;
}
