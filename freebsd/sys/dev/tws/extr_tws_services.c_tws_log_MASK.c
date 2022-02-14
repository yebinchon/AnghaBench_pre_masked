
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tws_softc {int tws_dev; } ;
struct TYPE_2__ {int desc; int severity_level; int error_code; int error_str; int fmt; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;

void
FUNC_1(struct tws_softc *VAR_1, int VAR_2)
{
    FUNC_0((VAR_1)->tws_dev, VAR_0[VAR_2].fmt,
                    VAR_0[VAR_2].error_str,
                    VAR_0[VAR_2].error_code,
                    VAR_0[VAR_2].severity_level,
                    VAR_0[VAR_2].desc );
}
