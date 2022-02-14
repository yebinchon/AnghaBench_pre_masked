
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u_int ;
typedef scalar_t__ XENSTORE_RING_IDX ;
struct TYPE_5__ {scalar_t__ req_cons; scalar_t__ req_prod; int req; } ;
struct TYPE_4__ {int xen_intr_handle; int ring_lock; int request_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (void*,char const*,unsigned int) ;
 int FUNC_1 (TYPE_2__*,int *,int,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 TYPE_2__* VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 void* FUNC_8 (scalar_t__,scalar_t__,int ,unsigned int*) ;

__attribute__((used)) static int
FUNC_9(const void *VAR_8, unsigned VAR_9)
{
 XENSTORE_RING_IDX VAR_10, VAR_11;
 const char *VAR_12 = (const char *)VAR_8;
 int VAR_13;

 FUNC_4(&VAR_7.request_mutex, VAR_4);
 while (VAR_9 != 0) {
  void *VAR_14;
  u_int VAR_15;


  FUNC_2(&VAR_7.ring_lock);
  VAR_10 = VAR_6->req_cons;
  VAR_11 = VAR_6->req_prod;
  if ((VAR_11 - VAR_10) == VAR_5) {
   VAR_13 = FUNC_1(VAR_6, &VAR_7.ring_lock, VAR_2|VAR_3,
        "xbwrite", 0);
   if (VAR_13 && VAR_13 != VAR_1)
    return (VAR_13);


   continue;
  }
  FUNC_3(&VAR_7.ring_lock);


  if (!FUNC_7(VAR_10, VAR_11)) {
   VAR_6->req_cons = VAR_6->req_prod = 0;
   return (VAR_0);
  }

  VAR_14 = FUNC_8(VAR_10, VAR_11, VAR_6->req, &VAR_15);
  if (VAR_15 > VAR_9)
   VAR_15 = VAR_9;

  FUNC_0(VAR_14, VAR_12, VAR_15);
  VAR_12 += VAR_15;
  VAR_9 -= VAR_15;







  FUNC_5();
  VAR_6->req_prod += VAR_15;





  FUNC_6(VAR_7.xen_intr_handle);
 }

 return (0);
}
