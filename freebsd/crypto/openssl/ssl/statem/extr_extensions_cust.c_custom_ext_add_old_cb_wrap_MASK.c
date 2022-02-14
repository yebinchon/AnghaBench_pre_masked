
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* add_cb ) (int *,unsigned int,unsigned char const**,size_t*,int*,int ) ;int add_arg; } ;
typedef TYPE_1__ custom_ext_add_cb_wrap ;
typedef int X509 ;
typedef int SSL ;


 int FUNC_0 (int *,unsigned int,unsigned char const**,size_t*,int*,int ) ;

__attribute__((used)) static int FUNC_1(SSL *VAR_0, unsigned int VAR_1,
                                      unsigned int VAR_2,
                                      const unsigned char **VAR_3,
                                      size_t *VAR_4, X509 *VAR_5, size_t VAR_6,
                                      int *VAR_7, void *VAR_8)
{
    custom_ext_add_cb_wrap *VAR_9 = (custom_ext_add_cb_wrap *)VAR_8;

    if (VAR_9->add_cb == ((void*)0))
        return 1;

    return VAR_9->add_cb(VAR_0, VAR_1, VAR_3, VAR_4, VAR_7,
                               VAR_9->add_arg);
}
