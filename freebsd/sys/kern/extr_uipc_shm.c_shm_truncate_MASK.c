
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct shmfd {int dummy; } ;
struct file {int f_cred; struct shmfd* f_data; } ;
typedef int off_t ;


 int FUNC_0 (struct ucred*,int ,struct shmfd*) ;
 int FUNC_1 (struct shmfd*,int ) ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_0, off_t VAR_1, struct ucred *VAR_2,
    struct thread *VAR_3)
{
 struct shmfd *VAR_4;




 VAR_4 = VAR_0->f_data;





 return (FUNC_1(VAR_4, VAR_1));
}
