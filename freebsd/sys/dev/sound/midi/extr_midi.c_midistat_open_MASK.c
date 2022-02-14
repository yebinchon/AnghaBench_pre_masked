
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *,int *,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_7, int VAR_8, int VAR_9, struct thread *VAR_10)
{
 int VAR_11;

 FUNC_0(1, FUNC_2("midistat_open\n"));

 FUNC_4(&VAR_5);
 if (VAR_4) {
  FUNC_5(&VAR_5);
  return VAR_0;
 }
 VAR_4 = 1;
 if (FUNC_3(&VAR_6, ((void*)0), 4096, VAR_3) == ((void*)0)) {
  VAR_11 = VAR_2;
  goto out;
 }
 VAR_11 = (FUNC_1(&VAR_6) > 0) ? 0 : VAR_1;
out:
 if (VAR_11)
  VAR_4 = 0;
 FUNC_5(&VAR_5);
 return VAR_11;
}
