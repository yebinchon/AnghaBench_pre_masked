
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct kcov_info {int mode; int * thread; int state; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kcov_info*,int (*) (struct kcov_info*)) ;
 int FUNC_1 (struct kcov_info*) ;
 struct kcov_info* FUNC_2 (int,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_4, int VAR_5, int VAR_6, struct thread *VAR_7)
{
 struct kcov_info *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(sizeof(struct kcov_info), VAR_1, VAR_3 | VAR_2);
 VAR_8->state = VAR_0;
 VAR_8->thread = ((void*)0);
 VAR_8->mode = -1;

 if ((VAR_9 = FUNC_0(VAR_8, FUNC_1)) != 0)
  FUNC_1(VAR_8);

 return (VAR_9);
}
