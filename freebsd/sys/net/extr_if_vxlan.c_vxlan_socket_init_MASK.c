
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int val ;
struct TYPE_3__ {int sa_family; } ;
struct TYPE_4__ {TYPE_1__ sa; } ;
struct vxlan_socket {int vxlso_sock; TYPE_2__ vxlso_laddr; } ;
struct thread {int td_ucred; } ;
struct sockopt {int* sopt_val; int sopt_valsize; int sopt_name; int sopt_level; int sopt_dir; } ;
struct ifnet {int dummy; } ;
typedef int sopt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sockopt*,int) ;
 struct thread* VAR_5 ;
 int FUNC_1 (struct ifnet*,char*,int) ;
 int FUNC_2 (int ,int *,int ,int ,int ,struct thread*) ;
 int FUNC_3 (int ,struct sockopt*) ;
 int FUNC_4 (int ,int ,int *,struct vxlan_socket*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_5(struct vxlan_socket *VAR_8, struct ifnet *VAR_9)
{
 struct thread *VAR_10;
 int VAR_11;

 VAR_10 = VAR_5;

 VAR_11 = FUNC_2(VAR_8->vxlso_laddr.sa.sa_family, &VAR_8->vxlso_sock,
     VAR_2, VAR_1, VAR_10->td_ucred, VAR_10);
 if (VAR_11) {
  FUNC_1(VAR_9, "cannot create socket: %d\n", VAR_11);
  return (VAR_11);
 }

 VAR_11 = FUNC_4(VAR_8->vxlso_sock,
     VAR_6, ((void*)0), VAR_8);
 if (VAR_11) {
  FUNC_1(VAR_9, "cannot set tunneling function: %d\n", VAR_11);
  return (VAR_11);
 }

 if (VAR_7 != 0) {
  struct sockopt VAR_12;
  int VAR_13 = 1;

  FUNC_0(&VAR_12, sizeof(VAR_12));
  VAR_12.sopt_dir = VAR_3;
  VAR_12.sopt_level = VAR_0;
  VAR_12.sopt_name = VAR_4;
  VAR_12.sopt_val = &VAR_13;
  VAR_12.sopt_valsize = sizeof(VAR_13);
  VAR_11 = FUNC_3(VAR_8->vxlso_sock, &VAR_12);
  if (VAR_11) {
   FUNC_1(VAR_9,
       "cannot set REUSEADDR socket opt: %d\n", VAR_11);
   return (VAR_11);
  }
 }

 return (0);
}
