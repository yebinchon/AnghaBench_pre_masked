
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pam_ctxt {int pam_psock; int pam_csock; } ;
typedef int sp_pthread_t ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(sp_pthread_t *VAR_5, const void *VAR_6,
    void *(*VAR_7)(void *), void *VAR_8)
{
 pid_t VAR_9;
 struct pam_ctxt *VAR_10 = VAR_8;

 VAR_4 = -1;
 switch ((VAR_9 = FUNC_3())) {
 case -1:
  FUNC_2("fork(): %s", FUNC_5(VAR_1));
  return (-1);
 case 0:
  FUNC_1(VAR_10->pam_psock);
  VAR_10->pam_psock = -1;
  VAR_7(VAR_8);
  FUNC_0(1);
 default:
  *VAR_5 = VAR_9;
  FUNC_1(VAR_10->pam_csock);
  VAR_10->pam_csock = -1;
  VAR_2 = FUNC_4(VAR_0, VAR_3);
  return (0);
 }
}
