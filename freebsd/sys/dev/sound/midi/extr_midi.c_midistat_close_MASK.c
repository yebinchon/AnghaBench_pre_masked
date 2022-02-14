
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_4, int VAR_5, int VAR_6, struct thread *VAR_7)
{
 FUNC_0(1, FUNC_1("midistat_close\n"));
 FUNC_3(&VAR_2);
 if (!VAR_1) {
  FUNC_4(&VAR_2);
  return VAR_0;
 }
 FUNC_2(&VAR_3);
 VAR_1 = 0;
 FUNC_4(&VAR_2);
 return 0;
}
