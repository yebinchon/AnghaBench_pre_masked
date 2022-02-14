
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int dtrd_action; scalar_t__ dtrd_offset; } ;
typedef TYPE_2__ dtrace_recdesc_t ;
struct TYPE_7__ {int dtagd_nrecs; TYPE_2__* dtagd_rec; } ;
typedef TYPE_3__ dtrace_aggdesc_t ;
struct TYPE_5__ {scalar_t__ dtada_data; TYPE_3__* dtada_desc; } ;
struct TYPE_8__ {TYPE_1__ dtahe_data; } ;
typedef TYPE_4__ dt_ahashent_t ;
typedef scalar_t__ caddr_t ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int
FUNC_7(const void *VAR_0, const void *VAR_1)
{
 dt_ahashent_t *VAR_2 = *((dt_ahashent_t **)VAR_0);
 dt_ahashent_t *VAR_3 = *((dt_ahashent_t **)VAR_1);
 dtrace_aggdesc_t *VAR_4 = VAR_2->dtahe_data.dtada_desc;
 dtrace_aggdesc_t *VAR_5 = VAR_3->dtahe_data.dtada_desc;
 caddr_t VAR_6 = VAR_2->dtahe_data.dtada_data;
 caddr_t VAR_7 = VAR_3->dtahe_data.dtada_data;
 dtrace_recdesc_t *VAR_8, *VAR_9;
 int64_t *VAR_10, *VAR_11;
 int VAR_12;

 FUNC_0(VAR_4->dtagd_nrecs == VAR_5->dtagd_nrecs);

 VAR_8 = &VAR_4->dtagd_rec[VAR_4->dtagd_nrecs - 1];
 VAR_9 = &VAR_5->dtagd_rec[VAR_5->dtagd_nrecs - 1];

 FUNC_0(VAR_8->dtrd_action == VAR_9->dtrd_action);

 VAR_10 = (int64_t *)(uintptr_t)(VAR_6 + VAR_8->dtrd_offset);
 VAR_11 = (int64_t *)(uintptr_t)(VAR_7 + VAR_9->dtrd_offset);

 switch (VAR_8->dtrd_action) {
 case 136:
  VAR_12 = FUNC_1(VAR_10, VAR_11);
  break;

 case 129:
  VAR_12 = FUNC_6(VAR_10, VAR_11);
  break;

 case 130:
  VAR_12 = FUNC_5(VAR_10, VAR_11);
  break;

 case 133:
  VAR_12 = FUNC_4(VAR_10, VAR_11);
  break;

 case 134:
  VAR_12 = FUNC_3(VAR_10, VAR_11);
  break;

 case 135:
 case 128:
 case 131:
 case 132:
  VAR_12 = FUNC_2(VAR_10, VAR_11);
  break;

 default:
  FUNC_0(0);
 }

 return (VAR_12);
}
