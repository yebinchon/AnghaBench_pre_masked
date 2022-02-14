
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct nfsd_nfscbd_args {int principal; } ;
typedef int principal ;
struct TYPE_3__ {int sp_minthreads; int sp_maxthreads; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int,int *) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char*,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;

int
FUNC_7(struct thread *VAR_5, struct nfsd_nfscbd_args *VAR_6)
{
 char VAR_7[128];
 int VAR_8;

 if (VAR_6 != ((void*)0)) {
  VAR_8 = FUNC_2(VAR_6->principal, VAR_7,
      sizeof(VAR_7), ((void*)0));
  if (VAR_8)
   return (VAR_8);
 } else {
  VAR_7[0] = '\0';
 }
 FUNC_0();
 if (VAR_3 == 0) {
  VAR_3++;

  FUNC_1();

  if (VAR_7[0] != '\0')
   FUNC_5(VAR_7, "kerberosv5",
       VAR_0, VAR_2, VAR_1);

  VAR_4->sp_minthreads = 4;
  VAR_4->sp_maxthreads = 4;

  FUNC_6(VAR_4);

  FUNC_4(VAR_2, VAR_1);

  FUNC_0();
  VAR_3--;
  FUNC_3(1);
 }
 FUNC_1();

 return (0);
}
