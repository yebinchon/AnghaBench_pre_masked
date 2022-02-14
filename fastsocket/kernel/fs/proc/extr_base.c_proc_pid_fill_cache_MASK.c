
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tgid_iter {int tgid; int task; } ;
struct file {int dummy; } ;
typedef int name ;
typedef int filldir_t ;


 int VAR_0 ;
 int FUNC_0 (struct file*,void*,int ,char*,int,int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, filldir_t VAR_4,
 struct tgid_iter VAR_5)
{
 char VAR_6[VAR_0];
 int VAR_7 = FUNC_1(VAR_6, sizeof(VAR_6), "%d", VAR_5.tgid);
 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_6, VAR_7,
    VAR_1, VAR_5.task, ((void*)0));
}
