
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sndstat_file {int sbuf; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,struct sndstat_file*,int ) ;
 int FUNC_3 (struct sndstat_file*,int *) ;
 int VAR_5 ;
 int FUNC_4 (struct sndstat_file*,int ) ;
 struct sndstat_file* FUNC_5 (int,int ,int) ;
 int * FUNC_6 (int *,int *,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_7(struct cdev *VAR_8, int VAR_9, int VAR_10, struct thread *VAR_11)
{
 struct sndstat_file *VAR_12;

 VAR_12 = FUNC_5(sizeof(*VAR_12), VAR_1, VAR_2 | VAR_3);

 FUNC_0();
 if (FUNC_6(&VAR_12->sbuf, ((void*)0), 4096, VAR_4) == ((void*)0)) {
    FUNC_1();
  FUNC_4(VAR_12, VAR_1);
  return (VAR_0);
 }
 FUNC_2(&VAR_7, VAR_12, VAR_5);
 FUNC_1();

 FUNC_3(VAR_12, &VAR_6);

 return (0);
}
