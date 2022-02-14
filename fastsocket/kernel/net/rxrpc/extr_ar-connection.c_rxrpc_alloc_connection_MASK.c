
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_header {int dummy; } ;
struct rxrpc_connection {int size_align; int header_size; int debug_id; int avail_calls; int usage; int state_lock; int lock; int rx_queue; int calls; int bundle_link; int processor; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,struct rxrpc_connection*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 struct rxrpc_connection* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct rxrpc_connection *FUNC_10(gfp_t VAR_4)
{
 struct rxrpc_connection *VAR_5;

 FUNC_2("");

 VAR_5 = FUNC_6(sizeof(struct rxrpc_connection), VAR_4);
 if (VAR_5) {
  FUNC_1(&VAR_5->processor, &VAR_3);
  FUNC_0(&VAR_5->bundle_link);
  VAR_5->calls = VAR_0;
  FUNC_8(&VAR_5->rx_queue);
  FUNC_7(&VAR_5->lock);
  FUNC_9(&VAR_5->state_lock);
  FUNC_5(&VAR_5->usage, 1);
  VAR_5->debug_id = FUNC_4(&VAR_2);
  VAR_5->avail_calls = VAR_1;
  VAR_5->size_align = 4;
  VAR_5->header_size = sizeof(struct rxrpc_header);
 }

 FUNC_3(" = %p{%d}", VAR_5, VAR_5 ? VAR_5->debug_id : 0);
 return VAR_5;
}
