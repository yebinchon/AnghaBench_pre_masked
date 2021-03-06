
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_tool {scalar_t__ lost; } ;
struct TYPE_3__ {scalar_t__ nr_unknown_events; scalar_t__ nr_unknown_id; scalar_t__ nr_invalid_chains; scalar_t__ nr_unprocessable_samples; int * nr_events; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;
struct perf_session {TYPE_2__ hists; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_1(const struct perf_session *VAR_3,
         const struct perf_tool *VAR_4)
{
 if (VAR_4->lost == VAR_2 &&
     VAR_3->hists.stats.nr_events[VAR_0] != 0) {
  FUNC_0("Processed %d events and lost %d chunks!\n\n"
       "Check IO/CPU overload!\n\n",
       VAR_3->hists.stats.nr_events[0],
       VAR_3->hists.stats.nr_events[VAR_0]);
 }

 if (VAR_3->hists.stats.nr_unknown_events != 0) {
  FUNC_0("Found %u unknown events!\n\n"
       "Is this an older tool processing a perf.data "
       "file generated by a more recent tool?\n\n"
       "If that is not the case, consider "
       "reporting to linux-kernel@vger.kernel.org.\n\n",
       VAR_3->hists.stats.nr_unknown_events);
 }

 if (VAR_3->hists.stats.nr_unknown_id != 0) {
  FUNC_0("%u samples with id not present in the header\n",
       VAR_3->hists.stats.nr_unknown_id);
 }

  if (VAR_3->hists.stats.nr_invalid_chains != 0) {
   FUNC_0("Found invalid callchains!\n\n"
        "%u out of %u events were discarded for this reason.\n\n"
        "Consider reporting to linux-kernel@vger.kernel.org.\n\n",
        VAR_3->hists.stats.nr_invalid_chains,
        VAR_3->hists.stats.nr_events[VAR_1]);
  }

 if (VAR_3->hists.stats.nr_unprocessable_samples != 0) {
  FUNC_0("%u unprocessable samples recorded.\n"
       "Do you have a KVM guest running and not using 'perf kvm'?\n",
       VAR_3->hists.stats.nr_unprocessable_samples);
 }
}
