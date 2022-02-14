
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int arg2; int arg1; int error; } ;
struct TYPE_5__ {scalar_t__ unique_subject; } ;
struct TYPE_6__ {TYPE_4__* db; TYPE_1__ attributes; } ;
typedef TYPE_2__ CA_DB ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ,int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;

int FUNC_4(CA_DB *VAR_6)
{
    if (!FUNC_3(VAR_6->db, VAR_1, ((void*)0),
                             FUNC_2(VAR_5),
                             FUNC_1(VAR_5))) {
        FUNC_0(VAR_2,
                   "error creating serial number index:(%ld,%ld,%ld)\n",
                   VAR_6->db->error, VAR_6->db->arg1, VAR_6->db->arg2);
        return 0;
    }

    if (VAR_6->attributes.unique_subject
        && !FUNC_3(VAR_6->db, VAR_0, VAR_4,
                                FUNC_2(VAR_3),
                                FUNC_1(VAR_3))) {
        FUNC_0(VAR_2, "error creating name index:(%ld,%ld,%ld)\n",
                   VAR_6->db->error, VAR_6->db->arg1, VAR_6->db->arg2);
        return 0;
    }
    return 1;
}
