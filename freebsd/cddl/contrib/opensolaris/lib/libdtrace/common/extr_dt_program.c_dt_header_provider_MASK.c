
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_6__ {char* dtvd_name; } ;
struct TYPE_7__ {int pv_flags; int pv_probes; TYPE_1__ pv_desc; } ;
typedef TYPE_2__ dt_provider_t ;
struct TYPE_8__ {int dthi_empty; void* dthi_pfname; void* dthi_pmname; int * dthi_out; int * dthi_dtp; } ;
typedef TYPE_3__ dt_header_info_t ;
typedef int FILE ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (void*,char*) ;
 int FUNC_2 (void*,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_3__*) ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int *,char*) ;
 char* FUNC_6 (char const*,char) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(dtrace_hdl_t *VAR_4, dt_provider_t *VAR_5, FILE *VAR_6)
{
 dt_header_info_t VAR_7;
 const char *VAR_8;
 int VAR_9;

 if (VAR_5->pv_flags & VAR_0)
  return (0);





 VAR_8 = VAR_5->pv_desc.dtvd_name;
 for (VAR_9 = 0; (VAR_8 = FUNC_6(VAR_8, '-')) != ((void*)0); VAR_9++)
  VAR_8++;

 VAR_7.dthi_dtp = VAR_4;
 VAR_7.dthi_out = VAR_6;
 VAR_7.dthi_empty = 0;

 VAR_7.dthi_pmname = FUNC_0(FUNC_7(VAR_5->pv_desc.dtvd_name) + 1);
 FUNC_2(VAR_7.dthi_pmname, VAR_5->pv_desc.dtvd_name);

 VAR_7.dthi_pfname = FUNC_0(FUNC_7(VAR_5->pv_desc.dtvd_name) + 1 + VAR_9);
 FUNC_1(VAR_7.dthi_pfname, VAR_5->pv_desc.dtvd_name);





 if (FUNC_5(VAR_6, "#if _DTRACE_VERSION\n\n") < 0)
  return (FUNC_4(VAR_4, VAR_3));

 if (FUNC_3(VAR_5->pv_probes, VAR_2, &VAR_7) != 0)
  return (-1);
 if (FUNC_5(VAR_6, "\n\n") < 0)
  return (FUNC_4(VAR_4, VAR_3));
 if (FUNC_3(VAR_5->pv_probes, VAR_1, &VAR_7) != 0)
  return (-1);

 if (FUNC_5(VAR_6, "\n#else\n\n") < 0)
  return (FUNC_4(VAR_4, VAR_3));

 VAR_7.dthi_empty = 1;

 if (FUNC_3(VAR_5->pv_probes, VAR_2, &VAR_7) != 0)
  return (-1);

 if (FUNC_5(VAR_6, "\n#endif\n\n") < 0)
  return (FUNC_4(VAR_4, VAR_3));

 return (0);
}
