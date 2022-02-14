
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int dtrace_recdesc_t ;
typedef int dtrace_probedata_t ;
struct TYPE_6__ {scalar_t__ dt_buffered_offs; char* dt_buffered_buf; scalar_t__ (* dt_bufhdlr ) (TYPE_2__*,int ) ;int dt_bufarg; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_7__ {char* dtbda_buffered; int dtbda_flags; int const* dtbda_aggdata; int const* dtbda_recdesc; int * dtbda_probe; TYPE_1__* dtbda_handle; } ;
typedef TYPE_2__ dtrace_bufdata_t ;
typedef int dtrace_aggdata_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;

int
FUNC_2(dtrace_hdl_t *VAR_2, dtrace_probedata_t *VAR_3,
    const dtrace_recdesc_t *VAR_4, const dtrace_aggdata_t *VAR_5, uint32_t VAR_6)
{
 dtrace_bufdata_t VAR_7;

 if (VAR_2->dt_buffered_offs == 0)
  return (0);

 VAR_7.dtbda_handle = VAR_2;
 VAR_7.dtbda_buffered = VAR_2->dt_buffered_buf;
 VAR_7.dtbda_probe = VAR_3;
 VAR_7.dtbda_recdesc = VAR_4;
 VAR_7.dtbda_aggdata = VAR_5;
 VAR_7.dtbda_flags = VAR_6;

 if ((*VAR_2->dt_bufhdlr)(&VAR_7, VAR_2->dt_bufarg) == VAR_0)
  return (FUNC_0(VAR_2, VAR_1));

 VAR_2->dt_buffered_offs = 0;
 VAR_2->dt_buffered_buf[0] = '\0';

 return (0);
}
