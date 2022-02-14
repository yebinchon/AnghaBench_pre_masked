
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ seq; int mode; } ;
struct TYPE_5__ {TYPE_1__ shm_perm; } ;
struct shmid_kernel {TYPE_2__ u; } ;
typedef int newsegs ;
struct TYPE_6__ {int shmmni; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct shmid_kernel*,struct shmid_kernel*,int) ;
 int FUNC_2 (struct shmid_kernel*,int ) ;
 int FUNC_3 (struct shmid_kernel*) ;
 struct shmid_kernel* FUNC_4 (int,int ,int) ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 struct shmid_kernel* VAR_6 ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct shmid_kernel *VAR_7;
 int VAR_8;

 FUNC_0();

 if (VAR_4 >= VAR_5.shmmni)
  return;

 VAR_7 = FUNC_4(VAR_5.shmmni * sizeof(*VAR_7), VAR_0,
     VAR_1 | VAR_2);
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  FUNC_1(&VAR_6[VAR_8], &VAR_7[VAR_8], sizeof(VAR_7[0]));
 for (; VAR_8 < VAR_5.shmmni; VAR_8++) {
  VAR_7[VAR_8].u.shm_perm.mode = VAR_3;
  VAR_7[VAR_8].u.shm_perm.seq = 0;



 }
 FUNC_2(VAR_6, VAR_0);
 VAR_6 = VAR_7;
 VAR_4 = VAR_5.shmmni;
}
