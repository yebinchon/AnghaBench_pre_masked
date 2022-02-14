
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iser_global {int dummy; } ;
struct icl_iser_pdu {int dummy; } ;
struct TYPE_3__ {int close_conns_mutex; int connlist; int connlist_mutex; int device_list; int device_list_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,int,int ,int ,int ) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (char*,int,int *,int *,int *,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_9(void)
{
 int VAR_7;

 FUNC_1("Starting iSER datamover...");

 VAR_3 = FUNC_8("icl_iser_pdu", sizeof(struct icl_iser_pdu),
       ((void*)0), ((void*)0), ((void*)0), ((void*)0),
       VAR_1, 0);


 FUNC_6(&VAR_2, 0);

 VAR_7 = FUNC_3("iser", 1, 0, VAR_5, VAR_6);
 FUNC_2(VAR_7 == 0, ("failed to register iser"));

 FUNC_4(&VAR_4, 0, sizeof(struct iser_global));


 FUNC_7(&VAR_4.device_list_mutex, "global_device_lock");
 FUNC_0(&VAR_4.device_list);
 FUNC_5(&VAR_4.connlist_mutex, "iser_global_conn_lock", ((void*)0), VAR_0);
 FUNC_0(&VAR_4.connlist);
 FUNC_7(&VAR_4.close_conns_mutex, "global_close_conns_lock");

 return (VAR_7);
}
