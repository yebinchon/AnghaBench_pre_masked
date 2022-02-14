
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct cfi_softc {scalar_t__ sc_maxbuf; int * sc_mto_counts; int * sc_tto_counts; int sc_dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_1 (int ) ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct cfi_softc *VAR_5)
{
 struct sysctl_ctx_list *VAR_6;
 struct sysctl_oid_list *VAR_7;

 VAR_6 = FUNC_2(VAR_5->sc_dev);
 VAR_7 = FUNC_1(FUNC_3(VAR_5->sc_dev));

 FUNC_0(VAR_6, VAR_7, VAR_4,
     "typical_erase_timout_count",
     VAR_3, &VAR_5->sc_tto_counts[VAR_1],
     0, "Number of times the typical erase timeout was exceeded");
 FUNC_0(VAR_6, VAR_7, VAR_4,
     "max_erase_timout_count",
     VAR_3, &VAR_5->sc_mto_counts[VAR_1], 0,
     "Number of times the maximum erase timeout was exceeded");
 FUNC_0(VAR_6, VAR_7, VAR_4,
     "typical_write_timout_count",
     VAR_3, &VAR_5->sc_tto_counts[VAR_2], 0,
     "Number of times the typical write timeout was exceeded");
 FUNC_0(VAR_6, VAR_7, VAR_4,
     "max_write_timout_count",
     VAR_3, &VAR_5->sc_mto_counts[VAR_2], 0,
     "Number of times the maximum write timeout was exceeded");
 if (VAR_5->sc_maxbuf > 0) {
  FUNC_0(VAR_6, VAR_7, VAR_4,
      "typical_bufwrite_timout_count",
      VAR_3, &VAR_5->sc_tto_counts[VAR_0], 0,
      "Number of times the typical buffered write timeout was "
      "exceeded");
  FUNC_0(VAR_6, VAR_7, VAR_4,
      "max_bufwrite_timout_count",
      VAR_3, &VAR_5->sc_mto_counts[VAR_0], 0,
      "Number of times the maximum buffered write timeout was "
      "exceeded");
 }
}
