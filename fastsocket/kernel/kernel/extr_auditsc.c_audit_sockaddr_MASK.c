
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct audit_context {int sockaddr_len; void* sockaddr; scalar_t__ dummy; } ;
struct TYPE_2__ {struct audit_context* audit_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 void* FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (void*,void*,int) ;

int FUNC_3(int VAR_3, void *VAR_4)
{
 struct audit_context *VAR_5 = VAR_2->audit_context;

 if (FUNC_1(!VAR_5 || VAR_5->dummy))
  return 0;

 if (!VAR_5->sockaddr) {
  void *VAR_6 = FUNC_0(sizeof(struct sockaddr_storage), VAR_1);
  if (!VAR_6)
   return -VAR_0;
  VAR_5->sockaddr = VAR_6;
 }

 VAR_5->sockaddr_len = VAR_3;
 FUNC_2(VAR_5->sockaddr, VAR_4, VAR_3);
 return 0;
}
