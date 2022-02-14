
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ version; TYPE_2__* method; } ;
struct TYPE_7__ {TYPE_1__* ssl3_enc; } ;
struct TYPE_6__ {int (* export_keying_material ) (TYPE_3__*,unsigned char*,size_t,char const*,size_t,unsigned char const*,size_t,int) ;} ;
typedef TYPE_3__ SSL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,unsigned char*,size_t,char const*,size_t,unsigned char const*,size_t,int) ;

int FUNC_1(SSL *VAR_2, unsigned char *VAR_3, size_t VAR_4,
                               const char *VAR_5, size_t VAR_6,
                               const unsigned char *VAR_7, size_t VAR_8,
                               int VAR_9)
{
    if (VAR_2->version < VAR_1 && VAR_2->version != VAR_0)
        return -1;

    return VAR_2->method->ssl3_enc->export_keying_material(VAR_2, VAR_3, VAR_4, VAR_5,
                                                       VAR_6, VAR_7,
                                                       VAR_8, VAR_9);
}
