
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


struct TYPE_19__ {scalar_t__ count; scalar_t__ packed_size; } ;
struct TYPE_16__ {TYPE_3__ total; } ;
struct TYPE_20__ {scalar_t__ overhead_size; scalar_t__ count; scalar_t__ packed_size; scalar_t__ expanded_size; } ;
struct TYPE_21__ {double chain_len; TYPE_4__ total; scalar_t__ expanded_size; } ;
struct TYPE_17__ {scalar_t__ count; scalar_t__ sum; } ;
struct TYPE_18__ {TYPE_1__ total; } ;
struct TYPE_23__ {scalar_t__ count; scalar_t__ size; } ;
struct TYPE_22__ {scalar_t__ count; scalar_t__ size; } ;
struct TYPE_24__ {scalar_t__ count; scalar_t__ size; } ;
struct TYPE_25__ {int dir_prop_rep_histogram; int dir_prop_histogram; int dir_rep_histogram; int dir_histogram; int file_prop_rep_histogram; int file_prop_histogram; int file_rep_histogram; int file_histogram; int rep_size_histogram; int node_size_histogram; int largest_changes; TYPE_11__ file_prop_rep_stats; TYPE_11__ dir_prop_rep_stats; TYPE_11__ file_rep_stats; TYPE_11__ dir_rep_stats; TYPE_5__ total_rep_stats; TYPE_2__ added_rep_size_histogram; TYPE_7__ file_node_stats; TYPE_6__ dir_node_stats; TYPE_8__ total_node_stats; scalar_t__ change_count; scalar_t__ change_len; scalar_t__ revision_count; scalar_t__ total_size; } ;
typedef TYPE_9__ svn_fs_fs__stats_t ;
typedef int apr_pool_t ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_9__*,int *) ;
 int FUNC_2 (TYPE_9__*,int *) ;
 int FUNC_3 (TYPE_9__*,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_9__*,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (TYPE_11__*,int *) ;
 int FUNC_8 (char*,...) ;
 char* FUNC_9 (scalar_t__,char,int *) ;

__attribute__((used)) static void
FUNC_10(svn_fs_fs__stats_t *VAR_0,
            apr_pool_t *VAR_1)
{

  FUNC_8("\n\nGlobal statistics:\n");
  FUNC_8(FUNC_0("%20s bytes in %12s revisions\n"
           "%20s bytes in %12s changes\n"
           "%20s bytes in %12s node revision records\n"
           "%20s bytes in %12s representations\n"
           "%20s bytes expanded representation size\n"
           "%20s bytes with rep-sharing off\n"),
         FUNC_9(VAR_0->total_size, ',', VAR_1),
         FUNC_9(VAR_0->revision_count, ',', VAR_1),
         FUNC_9(VAR_0->change_len, ',', VAR_1),
         FUNC_9(VAR_0->change_count, ',', VAR_1),
         FUNC_9(VAR_0->total_node_stats.size, ',', VAR_1),
         FUNC_9(VAR_0->total_node_stats.count, ',', VAR_1),
         FUNC_9(VAR_0->total_rep_stats.total.packed_size, ',',
                         VAR_1),
         FUNC_9(VAR_0->total_rep_stats.total.count, ',', VAR_1),
         FUNC_9(VAR_0->total_rep_stats.total.expanded_size, ',',
                         VAR_1),
         FUNC_9(VAR_0->total_rep_stats.expanded_size, ',', VAR_1));

  FUNC_8("\nNoderev statistics:\n");
  FUNC_8(FUNC_0("%20s bytes in %12s nodes total\n"
           "%20s bytes in %12s directory noderevs\n"
           "%20s bytes in %12s file noderevs\n"),
         FUNC_9(VAR_0->total_node_stats.size, ',', VAR_1),
         FUNC_9(VAR_0->total_node_stats.count, ',', VAR_1),
         FUNC_9(VAR_0->dir_node_stats.size, ',', VAR_1),
         FUNC_9(VAR_0->dir_node_stats.count, ',', VAR_1),
         FUNC_9(VAR_0->file_node_stats.size, ',', VAR_1),
         FUNC_9(VAR_0->file_node_stats.count, ',', VAR_1));

  FUNC_8("\nRepresentation statistics:\n");
  FUNC_8(FUNC_0("%20s bytes in %12s representations total\n"
           "%20s bytes in %12s directory representations\n"
           "%20s bytes in %12s file representations\n"
           "%20s bytes in %12s representations of added file nodes\n"
           "%20s bytes in %12s directory property representations\n"
           "%20s bytes in %12s file property representations\n"
           "                         with %12.3f average delta chain length\n"
           "%20s bytes in header & footer overhead\n"),
         FUNC_9(VAR_0->total_rep_stats.total.packed_size, ',',
                         VAR_1),
         FUNC_9(VAR_0->total_rep_stats.total.count, ',', VAR_1),
         FUNC_9(VAR_0->dir_rep_stats.total.packed_size, ',',
                         VAR_1),
         FUNC_9(VAR_0->dir_rep_stats.total.count, ',', VAR_1),
         FUNC_9(VAR_0->file_rep_stats.total.packed_size, ',',
                         VAR_1),
         FUNC_9(VAR_0->file_rep_stats.total.count, ',', VAR_1),
         FUNC_9(VAR_0->added_rep_size_histogram.total.sum, ',',
                         VAR_1),
         FUNC_9(VAR_0->added_rep_size_histogram.total.count, ',',
                         VAR_1),
         FUNC_9(VAR_0->dir_prop_rep_stats.total.packed_size, ',',
                         VAR_1),
         FUNC_9(VAR_0->dir_prop_rep_stats.total.count, ',', VAR_1),
         FUNC_9(VAR_0->file_prop_rep_stats.total.packed_size, ',',
                         VAR_1),
         FUNC_9(VAR_0->file_prop_rep_stats.total.count, ',', VAR_1),
         VAR_0->total_rep_stats.chain_len
            / (double)VAR_0->total_rep_stats.total.count,
         FUNC_9(VAR_0->total_rep_stats.total.overhead_size, ',',
                         VAR_1));

  FUNC_8("\nDirectory representation statistics:\n");
  FUNC_7(&VAR_0->dir_rep_stats, VAR_1);
  FUNC_8("\nFile representation statistics:\n");
  FUNC_7(&VAR_0->file_rep_stats, VAR_1);
  FUNC_8("\nDirectory property representation statistics:\n");
  FUNC_7(&VAR_0->dir_prop_rep_stats, VAR_1);
  FUNC_8("\nFile property representation statistics:\n");
  FUNC_7(&VAR_0->file_prop_rep_stats, VAR_1);

  FUNC_8("\nLargest representations:\n");
  FUNC_6(VAR_0->largest_changes, VAR_1);
  FUNC_8("\nExtensions by number of representations:\n");
  FUNC_1(VAR_0, VAR_1);
  FUNC_8("\nExtensions by size of changed files:\n");
  FUNC_2(VAR_0, VAR_1);
  FUNC_8("\nExtensions by size of representations:\n");
  FUNC_3(VAR_0, VAR_1);

  FUNC_8("\nHistogram of expanded node sizes:\n");
  FUNC_4(&VAR_0->node_size_histogram, VAR_1);
  FUNC_8("\nHistogram of representation sizes:\n");
  FUNC_4(&VAR_0->rep_size_histogram, VAR_1);
  FUNC_8("\nHistogram of file sizes:\n");
  FUNC_4(&VAR_0->file_histogram, VAR_1);
  FUNC_8("\nHistogram of file representation sizes:\n");
  FUNC_4(&VAR_0->file_rep_histogram, VAR_1);
  FUNC_8("\nHistogram of file property sizes:\n");
  FUNC_4(&VAR_0->file_prop_histogram, VAR_1);
  FUNC_8("\nHistogram of file property representation sizes:\n");
  FUNC_4(&VAR_0->file_prop_rep_histogram, VAR_1);
  FUNC_8("\nHistogram of directory sizes:\n");
  FUNC_4(&VAR_0->dir_histogram, VAR_1);
  FUNC_8("\nHistogram of directory representation sizes:\n");
  FUNC_4(&VAR_0->dir_rep_histogram, VAR_1);
  FUNC_8("\nHistogram of directory property sizes:\n");
  FUNC_4(&VAR_0->dir_prop_histogram, VAR_1);
  FUNC_8("\nHistogram of directory property representation sizes:\n");
  FUNC_4(&VAR_0->dir_prop_rep_histogram, VAR_1);

  FUNC_5(VAR_0, VAR_1);
}
