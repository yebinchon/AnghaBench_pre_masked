
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ version; unsigned char* log_id; size_t log_id_len; int validation_status; } ;
typedef TYPE_1__ SCT ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_2(SCT *VAR_5, unsigned char *VAR_6, size_t VAR_7)
{
    if (VAR_5->version == VAR_4 && VAR_7 != VAR_2) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    FUNC_1(VAR_5->log_id);
    VAR_5->log_id = VAR_6;
    VAR_5->log_id_len = VAR_7;
    VAR_5->validation_status = VAR_3;
    return 1;
}
