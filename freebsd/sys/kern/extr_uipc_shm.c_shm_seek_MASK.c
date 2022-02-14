
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tdu_off; } ;
struct thread {TYPE_1__ td_uretoff; } ;
struct shmfd {scalar_t__ shm_size; } ;
struct file {struct shmfd* f_data; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct file*,int ) ;
 int FUNC_1 (struct file*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_4, off_t VAR_5, int VAR_6, struct thread *VAR_7)
{
 struct shmfd *VAR_8;
 off_t VAR_9;
 int VAR_10;

 VAR_8 = VAR_4->f_data;
 VAR_9 = FUNC_0(VAR_4, 0);
 VAR_10 = 0;
 switch (VAR_6) {
 case 130:
  if (VAR_9 < 0 ||
      (VAR_5 > 0 && VAR_9 > VAR_3 - VAR_5)) {
   VAR_10 = VAR_1;
   break;
  }
  VAR_5 += VAR_9;
  break;
 case 128:
  if (VAR_5 > 0 && VAR_8->shm_size > VAR_3 - VAR_5) {
   VAR_10 = VAR_1;
   break;
  }
  VAR_5 += VAR_8->shm_size;
  break;
 case 129:
  break;
 default:
  VAR_10 = VAR_0;
 }
 if (VAR_10 == 0) {
  if (VAR_5 < 0 || VAR_5 > VAR_8->shm_size)
   VAR_10 = VAR_0;
  else
   VAR_7->td_uretoff.tdu_off = VAR_5;
 }
 FUNC_1(VAR_4, VAR_5, VAR_10 != 0 ? VAR_2 : 0);
 return (VAR_10);
}
