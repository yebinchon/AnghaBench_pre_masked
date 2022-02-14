
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,int ) ;
 void* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_9, int VAR_10, int VAR_11, struct thread *VAR_12)
{
 void *VAR_13;

 VAR_13 = FUNC_1(VAR_0 * VAR_3,
     VAR_1, VAR_2);
 FUNC_2(&VAR_7);
 if (VAR_4 == ((void*)0)) {
  VAR_4 = VAR_13;
  VAR_8 = VAR_5 = 0;
  VAR_6 = 0;
 } else {
  FUNC_0(VAR_13, VAR_1);
 }
 FUNC_3(&VAR_7);

 return (0);
}
