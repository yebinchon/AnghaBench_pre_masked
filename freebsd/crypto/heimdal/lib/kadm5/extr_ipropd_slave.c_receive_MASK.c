
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int krb5_storage ;
typedef int krb5_context ;
struct TYPE_6__ {TYPE_2__* db; } ;
typedef TYPE_1__ kadm5_server_context ;
struct TYPE_7__ {int (* hdb_open ) (int ,TYPE_2__*,int,int) ;int (* hdb_close ) (int ,TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,char*) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_2__*,int,int) ;
 int FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4 (krb5_context VAR_2,
  krb5_storage *VAR_3,
  kadm5_server_context *VAR_4)
{
    int VAR_5;

    VAR_5 = VAR_4->db->hdb_open(VAR_2,
           VAR_4->db,
           VAR_1 | VAR_0, 0600);
    if (VAR_5)
 FUNC_0 (VAR_2, 1, VAR_5, "db->open");

    FUNC_1 (VAR_2, VAR_3, VAR_4);

    VAR_5 = VAR_4->db->hdb_close (VAR_2, VAR_4->db);
    if (VAR_5)
 FUNC_0 (VAR_2, 1, VAR_5, "db->close");
}
