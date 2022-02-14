
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quotafile {int quotatype; int fsname; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;

int
FUNC_2(struct quotafile *VAR_1)
{

 return (FUNC_1(VAR_1->fsname, FUNC_0(VAR_0, VAR_1->quotatype), 0, 0));
}
