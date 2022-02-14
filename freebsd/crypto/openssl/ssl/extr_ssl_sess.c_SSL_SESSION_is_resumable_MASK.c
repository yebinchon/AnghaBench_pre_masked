
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ticklen; } ;
struct TYPE_5__ {scalar_t__ session_id_length; TYPE_1__ ext; int not_resumable; } ;
typedef TYPE_2__ SSL_SESSION ;



int FUNC_0(const SSL_SESSION *VAR_0)
{




    return !VAR_0->not_resumable
           && (VAR_0->session_id_length > 0 || VAR_0->ext.ticklen > 0);
}
