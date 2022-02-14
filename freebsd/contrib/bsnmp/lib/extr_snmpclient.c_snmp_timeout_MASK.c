
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sent_pdu {scalar_t__ retrycount; int timeout_id; int pdu; int reqid; int arg; int (* callback ) (int ,int *,int ) ;} ;
struct TYPE_2__ {scalar_t__ retries; int timeout; int (* timeout_start ) (int *,void (*) (void*),struct sent_pdu*) ;} ;


 int FUNC_0 (struct sent_pdu*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sent_pdu*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int *,void (*) (void*),struct sent_pdu*) ;
 int FUNC_5 (char*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(void * VAR_2)
{
 struct sent_pdu *VAR_3 = VAR_2;






 VAR_3->retrycount++;
 if (VAR_3->retrycount > VAR_1.retries) {

  FUNC_0(VAR_3, VAR_0);
  VAR_3->callback(VAR_3->pdu, ((void*)0), VAR_3->arg);
  FUNC_1(VAR_3);
 } else {


  VAR_3->reqid = FUNC_2(VAR_3->pdu);
  VAR_3->timeout_id =
      VAR_1.timeout_start(&VAR_1.timeout,
      FUNC_6, VAR_3);
 }
}
