
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fman_port_params {int dummy; } ;
struct fman_port_cfg {int dummy; } ;
struct fman_port {int type; int im_en; } ;


 int VAR_0 ;






 int FUNC_0 (struct fman_port*,struct fman_port_cfg*,struct fman_port_params*) ;
 int FUNC_1 (struct fman_port*,struct fman_port_cfg*,struct fman_port_params*) ;
 int FUNC_2 (struct fman_port*,struct fman_port_cfg*,struct fman_port_params*) ;
 int FUNC_3 (struct fman_port*,struct fman_port_cfg*,struct fman_port_params*) ;

int FUNC_4(struct fman_port *VAR_1,
        struct fman_port_cfg *VAR_2,
        struct fman_port_params *VAR_3)
{
    int VAR_4;


    switch (VAR_1->type) {
    case 131:
    case 130:
        VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
        break;
    case 129:
    case 128:
        VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
        break;
    case 132:
    case 133:
        VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
        break;
    default:
        return -VAR_0;
    }

    if (VAR_4)
        return VAR_4;


    if (!VAR_1->im_en)
    {
        VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
        return VAR_4;
    }
    return 0;
}
