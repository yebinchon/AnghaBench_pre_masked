
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_6__ {int dtrd_action; scalar_t__ dtrd_offset; int dtrd_uarg; } ;
typedef TYPE_1__ dtrace_recdesc_t ;
struct TYPE_7__ {scalar_t__ dtpda_data; TYPE_3__* dtpda_edesc; } ;
typedef TYPE_2__ dtrace_probedata_t ;
struct TYPE_8__ {int dtepd_nrecs; } ;
typedef TYPE_3__ dtrace_eprobedesc_t ;
typedef int dtrace_aggvarid_t ;
typedef scalar_t__ caddr_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(const dtrace_probedata_t *VAR_5, const dtrace_recdesc_t *VAR_6, void *VAR_7)
{
 dtrace_eprobedesc_t *VAR_8 = VAR_5->dtpda_edesc;
 dtrace_aggvarid_t VAR_9[2];
 const void *VAR_10;
 int VAR_11, VAR_12;




 if (VAR_6 == ((void*)0))
  return (VAR_0);

 VAR_10 = VAR_5->dtpda_data - VAR_6->dtrd_offset;

 switch (VAR_6->dtrd_action) {
 case 129:
  (void) FUNC_4("\n%s\n\n", (char *)VAR_10 + VAR_6->dtrd_offset);
  if (!VAR_3) {
   FUNC_3();
   FUNC_2();
  }
  return (VAR_0);

 case 128:
  for (VAR_12 = 0, VAR_11 = 0; VAR_11 < VAR_8->dtepd_nrecs - 1; VAR_11++) {
   const dtrace_recdesc_t *VAR_13 = &VAR_6[VAR_11];

   if (VAR_13->dtrd_uarg != VAR_6->dtrd_uarg)
    break;


   VAR_9[VAR_12++] = *(dtrace_aggvarid_t *)((caddr_t)VAR_10 +
       VAR_13->dtrd_offset);
  }

  if (VAR_12 == (VAR_3 ? 1 : 2)) {
   uint_t VAR_14 = 0;
   if (FUNC_1(VAR_2, VAR_9, VAR_12,
       VAR_4, &VAR_14) != 0)
    FUNC_0("failed to walk aggregate");
  }

  return (VAR_0);
 }

 return (VAR_1);
}
