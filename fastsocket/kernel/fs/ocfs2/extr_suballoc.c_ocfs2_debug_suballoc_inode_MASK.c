
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int cl_next_free_rec; TYPE_3__* cl_recs; int cl_count; int cl_bpc; int cl_cpg; } ;
struct TYPE_10__ {TYPE_4__ i_chain; } ;
struct TYPE_6__ {int i_total; int i_used; } ;
struct TYPE_7__ {TYPE_1__ bitmap1; } ;
struct ocfs2_dinode {TYPE_5__ id2; TYPE_2__ id1; int i_generation; int i_clusters; scalar_t__ i_size; int i_signature; scalar_t__ i_blkno; } ;
struct TYPE_8__ {unsigned long long c_free; unsigned long long c_total; scalar_t__ c_blkno; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,...) ;

__attribute__((used)) static inline void FUNC_2(struct ocfs2_dinode *VAR_0)
{
 int VAR_1;

 FUNC_1("Suballoc Inode %llu:\n", (unsigned long long)VAR_0->i_blkno);
 FUNC_1("i_signature:                  %s\n", VAR_0->i_signature);
 FUNC_1("i_size:                       %llu\n",
        (unsigned long long)VAR_0->i_size);
 FUNC_1("i_clusters:                   %u\n", VAR_0->i_clusters);
 FUNC_1("i_generation:                 %u\n",
        FUNC_0(VAR_0->i_generation));
 FUNC_1("id1.bitmap1.i_used:           %u\n",
        FUNC_0(VAR_0->id1.bitmap1.i_used));
 FUNC_1("id1.bitmap1.i_total:          %u\n",
        FUNC_0(VAR_0->id1.bitmap1.i_total));
 FUNC_1("id2.i_chain.cl_cpg:           %u\n", VAR_0->id2.i_chain.cl_cpg);
 FUNC_1("id2.i_chain.cl_bpc:           %u\n", VAR_0->id2.i_chain.cl_bpc);
 FUNC_1("id2.i_chain.cl_count:         %u\n", VAR_0->id2.i_chain.cl_count);
 FUNC_1("id2.i_chain.cl_next_free_rec: %u\n",
        VAR_0->id2.i_chain.cl_next_free_rec);
 for(VAR_1 = 0; VAR_1 < VAR_0->id2.i_chain.cl_next_free_rec; VAR_1++) {
  FUNC_1("fe->id2.i_chain.cl_recs[%d].c_free:  %u\n", VAR_1,
         VAR_0->id2.i_chain.cl_recs[VAR_1].c_free);
  FUNC_1("fe->id2.i_chain.cl_recs[%d].c_total: %u\n", VAR_1,
         VAR_0->id2.i_chain.cl_recs[VAR_1].c_total);
  FUNC_1("fe->id2.i_chain.cl_recs[%d].c_blkno: %llu\n", VAR_1,
         (unsigned long long)VAR_0->id2.i_chain.cl_recs[VAR_1].c_blkno);
 }
}
