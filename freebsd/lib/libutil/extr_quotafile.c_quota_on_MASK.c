
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quotafile {int qfname; int fsname; int quotatype; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int ,int ) ;

int
FUNC_2(struct quotafile *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1->quotatype);
 return (FUNC_1(VAR_1->fsname, VAR_2, 0, VAR_1->qfname));
}
