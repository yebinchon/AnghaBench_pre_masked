
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct xsd_sockmsg {int type; scalar_t__ len; scalar_t__ req_id; int tx_id; } ;
struct xs_transaction {int id; } ;
struct iovec {int iov_len; struct xsd_sockmsg* iov_base; } ;
typedef int msg ;
typedef enum xsd_sockmsg_type { ____Placeholder_xsd_sockmsg_type } xsd_sockmsg_type ;
struct TYPE_2__ {int request_mutex; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int*,size_t*,void**) ;
 int FUNC_7 (struct xsd_sockmsg*,int) ;

__attribute__((used)) static int
FUNC_8(struct xs_transaction VAR_3, enum xsd_sockmsg_type VAR_4,
    const struct iovec *VAR_5, u_int VAR_6, u_int *VAR_7, void **VAR_8)
{
 struct xsd_sockmsg VAR_9;
 void *VAR_10 = ((void*)0);
 u_int VAR_11;
 int VAR_12;

 VAR_9.tx_id = VAR_3.id;
 VAR_9.req_id = 0;
 VAR_9.type = VAR_4;
 VAR_9.len = 0;
 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
  VAR_9.len += VAR_5[VAR_11].iov_len;

 FUNC_3(&VAR_2.request_mutex);
 VAR_12 = FUNC_7(&VAR_9, sizeof(VAR_9));
 if (VAR_12) {
  FUNC_2("xs_talkv failed %d\n", VAR_12);
  goto error_lock_held;
 }

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  VAR_12 = FUNC_7(VAR_5[VAR_11].iov_base, VAR_5[VAR_11].iov_len);
  if (VAR_12) {
   FUNC_2("xs_talkv failed %d\n", VAR_12);
   goto error_lock_held;
  }
 }

 VAR_12 = FUNC_6(&VAR_9.type, VAR_7, &VAR_10);

error_lock_held:
 FUNC_4(&VAR_2.request_mutex);
 if (VAR_12)
  return (VAR_12);

 if (VAR_9.type == VAR_1) {
  VAR_12 = FUNC_5(VAR_10);
  FUNC_1(VAR_10, VAR_0);
  return (VAR_12);
 }


 FUNC_0(VAR_9.type == VAR_4, ("bad xenstore message type"));

 if (VAR_8)
  *VAR_8 = VAR_10;
 else
  FUNC_1(VAR_10, VAR_0);

 return (0);
}
