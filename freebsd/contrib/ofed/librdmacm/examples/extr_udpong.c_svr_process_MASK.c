
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int s6_addr; } ;
struct TYPE_12__ {TYPE_4__ sin6_addr; } ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_10__ {TYPE_2__ sin_addr; } ;
struct TYPE_8__ {int sa_family; } ;
union socket_addr {TYPE_5__ sin6; TYPE_3__ sin; TYPE_1__ sa; } ;
struct message {int op; size_t id; int data; } ;
typedef size_t ssize_t ;
typedef int socklen_t ;
struct TYPE_13__ {int recvcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 char* FUNC_1 (int ,int *,char*,int) ;
 int FUNC_2 (TYPE_6__*,int ,int) ;




 int FUNC_3 (char*,char*) ;
 size_t FUNC_4 (struct message*,size_t,union socket_addr*,int ) ;

__attribute__((used)) static int FUNC_5(struct message *VAR_4, size_t VAR_5,
         union socket_addr *VAR_6, socklen_t VAR_7)
{
 char VAR_8[64];
 ssize_t VAR_9;

 switch (VAR_4->op) {
 case 129:
  if (VAR_6->sa.sa_family == VAR_0) {
   FUNC_3("client login from %s\n",
          FUNC_1(VAR_0, &VAR_6->sin.sin_addr.s_addr,
      VAR_8, sizeof VAR_8));
  } else {
   FUNC_3("client login from %s\n",
          FUNC_1(VAR_1, &VAR_6->sin6.sin6_addr.s6_addr,
      VAR_8, sizeof VAR_8));
  }
  VAR_4->id = VAR_3++;

 case 128:
  FUNC_2(&VAR_2[VAR_4->id], 0, sizeof VAR_2[VAR_4->id]);
  break;
 case 131:
  VAR_2[VAR_4->id].recvcnt++;
  break;
 case 130:
  VAR_4->data = FUNC_0(VAR_2[VAR_4->id].recvcnt);
  break;
 default:
  VAR_2[VAR_4->id].recvcnt++;
  return 0;
 }

 VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);
 return (VAR_9 == VAR_5) ? 0 : (int) VAR_9;
}
