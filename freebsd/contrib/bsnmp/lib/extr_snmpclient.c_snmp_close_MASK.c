
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sent_pdu {int * timeout_id; } ;
struct TYPE_2__ {int fd; char* local_path; struct sent_pdu* cport; struct sent_pdu* chost; int (* timeout_stop ) (int *) ;} ;


 int FUNC_0 (int *) ;
 struct sent_pdu* FUNC_1 (int *) ;
 int FUNC_2 (struct sent_pdu*,int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (struct sent_pdu*) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_6 (int *) ;

void
FUNC_7(void)
{
 struct sent_pdu *VAR_3;

 if (VAR_2.fd != -1) {
  (void)FUNC_3(VAR_2.fd);
  VAR_2.fd = -1;
  if (VAR_2.local_path[0] != '\0')
   (void)FUNC_5(VAR_2.local_path);
 }
 while(!FUNC_0(&VAR_1)){
  VAR_3 = FUNC_1(&VAR_1);
  if (VAR_3->timeout_id != ((void*)0))
   VAR_2.timeout_stop(VAR_3->timeout_id);
  FUNC_2(VAR_3, VAR_0);
  FUNC_4(VAR_3);
 }
 FUNC_4(VAR_2.chost);
 FUNC_4(VAR_2.cport);
}
