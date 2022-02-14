
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qp; scalar_t__ qkey; int lid; } ;
struct sa_handle {int fd; int agent; TYPE_1__ dport; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct sa_handle* FUNC_2 (int,int) ;
 int FUNC_3 (struct sa_handle*) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*,int ,TYPE_1__*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,int ,int,int,int *) ;

struct sa_handle * FUNC_7(void)
{
 struct sa_handle * VAR_4;
 VAR_4 = FUNC_2(1, sizeof(*VAR_4));
 if (!VAR_4)
  FUNC_0("calloc failed");

 FUNC_4(VAR_2, VAR_3, &VAR_4->dport);
 if (!VAR_4->dport.lid) {
  FUNC_1("No SM/SA found on port %s:%d",
   VAR_2 ? "" : VAR_2,
   VAR_3);
  FUNC_3(VAR_4);
  return (((void*)0));
 }

 VAR_4->dport.qp = 1;
 if (!VAR_4->dport.qkey)
  VAR_4->dport.qkey = VAR_0;

 VAR_4->fd = FUNC_5(VAR_2, VAR_3);
 VAR_4->agent = FUNC_6(VAR_4->fd, VAR_1, 2, 1, ((void*)0));

 return VAR_4;
}
