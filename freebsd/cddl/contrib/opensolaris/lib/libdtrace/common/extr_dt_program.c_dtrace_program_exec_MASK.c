
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dpi_matches; } ;
typedef TYPE_1__ dtrace_proginfo_t ;
typedef int dtrace_prog_t ;
typedef int dtrace_hdl_t ;
struct TYPE_7__ {scalar_t__ n_matched; void* dof; } ;
typedef TYPE_2__ dtrace_enable_io_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (int *,int ,TYPE_2__*) ;
 int FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,void*) ;
 int FUNC_4 (int *,int *,TYPE_1__*) ;
 int VAR_6 ;

int
FUNC_5(dtrace_hdl_t *VAR_7, dtrace_prog_t *VAR_8,
    dtrace_proginfo_t *VAR_9)
{
 dtrace_enable_io_t VAR_10;
 void *VAR_11;
 int VAR_12, VAR_13;

 FUNC_4(VAR_7, VAR_8, VAR_9);

 if ((VAR_11 = FUNC_2(VAR_7, VAR_8, VAR_1)) == ((void*)0))
  return (-1);

 VAR_10.dof = VAR_11;
 VAR_10.n_matched = 0;
 VAR_12 = FUNC_0(VAR_7, VAR_0, &VAR_10);
 FUNC_3(VAR_7, VAR_11);

 if (VAR_12 == -1) {
  switch (VAR_6) {
  case 128:
   VAR_13 = VAR_3;
   break;
  case 129:
   VAR_13 = VAR_2;
   break;
  case 131:
   VAR_13 = VAR_4;
   break;
  case 130:
   VAR_13 = VAR_5;
   break;
  default:
   VAR_13 = VAR_6;
  }

  return (FUNC_1(VAR_7, VAR_13));
 }

 if (VAR_9 != ((void*)0))
  VAR_9->dpi_matches += VAR_10.n_matched;

 return (0);
}
