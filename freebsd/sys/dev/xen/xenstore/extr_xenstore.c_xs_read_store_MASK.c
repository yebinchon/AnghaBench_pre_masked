
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u_int ;
typedef scalar_t__ XENSTORE_RING_IDX ;
struct TYPE_5__ {scalar_t__ rsp_cons; scalar_t__ rsp_prod; int rsp; } ;
struct TYPE_4__ {int xen_intr_handle; int ring_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,char const*,unsigned int) ;
 int FUNC_2 (TYPE_2__*,int *,int,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 char* FUNC_8 (scalar_t__,scalar_t__,int ,unsigned int*) ;

__attribute__((used)) static int
FUNC_9(void *VAR_6, unsigned VAR_7)
{
 XENSTORE_RING_IDX VAR_8, VAR_9;
 char *VAR_10 = (char *)VAR_6;
 int VAR_11;

 while (VAR_7 != 0) {
  u_int VAR_12;
  const char *VAR_13;


  FUNC_3(&VAR_5.ring_lock);
  VAR_8 = VAR_4->rsp_cons;
  VAR_9 = VAR_4->rsp_prod;
  if (VAR_8 == VAR_9) {
   VAR_11 = FUNC_2(VAR_4, &VAR_5.ring_lock, VAR_2|VAR_3,
       "xbread", 0);
   if (VAR_11 && VAR_11 != VAR_1)
    return (VAR_11);
   continue;
  }
  FUNC_4(&VAR_5.ring_lock);


  if (!FUNC_7(VAR_8, VAR_9)) {
   VAR_4->rsp_cons = VAR_4->rsp_prod = 0;
   return (VAR_0);
  }

  VAR_13 = FUNC_8(VAR_8, VAR_9, VAR_4->rsp, &VAR_12);
  if (VAR_12 > VAR_7)
   VAR_12 = VAR_7;





  FUNC_5();

  FUNC_1(VAR_10, VAR_13, VAR_12);
  VAR_10 += VAR_12;
  VAR_7 -= VAR_12;






  FUNC_0();
  VAR_4->rsp_cons += VAR_12;





  FUNC_6(VAR_5.xen_intr_handle);
 }

 return (0);
}
