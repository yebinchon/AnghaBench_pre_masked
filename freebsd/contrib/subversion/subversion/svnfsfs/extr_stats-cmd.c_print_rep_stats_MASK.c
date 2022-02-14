
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ count; scalar_t__ expanded_size; scalar_t__ packed_size; } ;
struct TYPE_5__ {scalar_t__ expanded_size; scalar_t__ count; scalar_t__ packed_size; } ;
struct TYPE_7__ {double chain_len; TYPE_2__ total; scalar_t__ references; scalar_t__ expanded_size; TYPE_1__ shared; } ;
typedef TYPE_3__ svn_fs_fs__representation_stats_t ;
typedef int apr_pool_t ;


 double FUNC_0 (double,double) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*,char*,char*,char*,char*,char*,char*,double) ;
 char* FUNC_3 (scalar_t__,char,int *) ;

__attribute__((used)) static void
FUNC_4(svn_fs_fs__representation_stats_t *VAR_0,
                apr_pool_t *VAR_1)
{
  FUNC_2(FUNC_1("%20s bytes in %12s reps\n"
           "%20s bytes in %12s shared reps\n"
           "%20s bytes expanded size\n"
           "%20s bytes expanded shared size\n"
           "%20s bytes with rep-sharing off\n"
           "%20s shared references\n"
           "%20.3f average delta chain length\n"),
         FUNC_3(VAR_0->total.packed_size, ',', VAR_1),
         FUNC_3(VAR_0->total.count, ',', VAR_1),
         FUNC_3(VAR_0->shared.packed_size, ',', VAR_1),
         FUNC_3(VAR_0->shared.count, ',', VAR_1),
         FUNC_3(VAR_0->total.expanded_size, ',', VAR_1),
         FUNC_3(VAR_0->shared.expanded_size, ',', VAR_1),
         FUNC_3(VAR_0->expanded_size, ',', VAR_1),
         FUNC_3(VAR_0->references - VAR_0->total.count, ',', VAR_1),
         VAR_0->chain_len / FUNC_0(1.0, (double)VAR_0->total.count));
}
