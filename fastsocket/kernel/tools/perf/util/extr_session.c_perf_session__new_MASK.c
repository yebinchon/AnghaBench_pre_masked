
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct perf_tool {int ordered_samples; scalar_t__ ordering_requires_timestamps; } ;
struct TYPE_2__ {int to_free; int sample_cache; int samples; } ;
struct perf_session {int mmap_window; int repipe; int evlist; int hists; int host_machine; TYPE_1__ ordered_samples; int machines; int filename; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,struct stat*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int ,char const*,size_t) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct perf_session*) ;
 int FUNC_9 (struct perf_session*) ;
 scalar_t__ FUNC_10 (struct perf_session*,int) ;
 int FUNC_11 (struct perf_session*) ;
 size_t FUNC_12 (char const*) ;
 struct perf_session* FUNC_13 (int) ;

struct perf_session *FUNC_14(const char *VAR_6, int VAR_7,
           bool VAR_8, bool VAR_9,
           struct perf_tool *VAR_10)
{
 struct perf_session *VAR_11;
 struct stat VAR_12;
 size_t VAR_13;

 if (!VAR_6 || !FUNC_12(VAR_6)) {
  if (!FUNC_3(VAR_4, &VAR_12) && FUNC_1(VAR_12.st_mode))
   VAR_6 = "-";
  else
   VAR_6 = "perf.data";
 }

 VAR_13 = FUNC_12(VAR_6);
 VAR_11 = FUNC_13(sizeof(*VAR_11) + VAR_13);

 if (VAR_11 == ((void*)0))
  goto out;

 FUNC_6(VAR_11->filename, VAR_6, VAR_13);







 VAR_11->mmap_window = 32 * 1024 * 1024ULL;

 VAR_11->machines = VAR_3;
 VAR_11->repipe = VAR_9;
 FUNC_0(&VAR_11->ordered_samples.samples);
 FUNC_0(&VAR_11->ordered_samples.sample_cache);
 FUNC_0(&VAR_11->ordered_samples.to_free);
 FUNC_5(&VAR_11->host_machine, "", VAR_0);
 FUNC_4(&VAR_11->hists);

 if (VAR_7 == VAR_1) {
  if (FUNC_10(VAR_11, VAR_8) < 0)
   goto out_delete;
  FUNC_11(VAR_11);
 } else if (VAR_7 == VAR_2) {




  if (FUNC_8(VAR_11) < 0)
   goto out_delete;
 }

 if (VAR_10 && VAR_10->ordering_requires_timestamps &&
     VAR_10->ordered_samples && !FUNC_7(VAR_11->evlist)) {
  FUNC_2("WARNING: No sample_id_all support, falling back to unordered processing\n");
  VAR_10->ordered_samples = 0;
 }

out:
 return VAR_11;
out_delete:
 FUNC_9(VAR_11);
 return ((void*)0);
}
