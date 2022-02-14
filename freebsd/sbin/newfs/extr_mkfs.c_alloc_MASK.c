
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;


typedef int uint ;
typedef int ufs2_daddr_t ;
struct TYPE_22__ {int d_error; } ;
struct TYPE_21__ {int cs_nffree; int cs_ndir; int cs_nbfree; } ;
struct TYPE_18__ {int cs_nffree; int cs_ndir; int cs_nbfree; } ;
struct TYPE_20__ {int fs_frag; scalar_t__ fs_contigsumsize; int fs_bsize; TYPE_1__ fs_cstotal; int fs_fsize; int fs_cgsize; } ;
struct TYPE_19__ {scalar_t__ cs_nbfree; int cs_nffree; int cs_ndir; } ;
struct TYPE_17__ {scalar_t__ cg_magic; int cg_ndblk; int * cg_frsum; TYPE_2__ cg_cs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_12__ VAR_2 ;
 int FUNC_0 (TYPE_8__*,scalar_t__,char*,int ) ;
 int FUNC_1 (TYPE_12__*) ;
 int FUNC_2 (TYPE_12__*) ;
 scalar_t__ FUNC_3 (TYPE_8__*,TYPE_12__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 TYPE_8__ VAR_3 ;
 int FUNC_7 (int,char*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_3__*,int) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int ) ;
 TYPE_5__* VAR_4 ;
 int FUNC_11 (int,int ) ;
 scalar_t__ FUNC_12 (TYPE_3__*,int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_13 (char*) ;
 TYPE_3__ VAR_6 ;
 int FUNC_14 (int ,int) ;

ufs2_daddr_t
FUNC_15(int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 uint VAR_12;

 FUNC_0(&VAR_3, VAR_5 + FUNC_10(&VAR_6, FUNC_4(&VAR_6, 0)), (char *)&VAR_2,
     VAR_6.fs_cgsize);
 if (VAR_2.cg_magic != VAR_0) {
  FUNC_13("cg 0: bad magic number\n");
  FUNC_8(38);
 }
 if (VAR_2.cg_cs.cs_nbfree == 0) {
  FUNC_13("first cylinder group ran out of space\n");
  FUNC_8(39);
 }
 for (VAR_12 = 0; VAR_12 < VAR_2.cg_ndblk; VAR_12 += VAR_6.fs_frag)
  if (FUNC_12(&VAR_6, FUNC_1(&VAR_2), VAR_12 / VAR_6.fs_frag))
   goto goth;
 FUNC_13("internal error: can't find block in cyl 0\n");
 FUNC_8(40);
goth:
 VAR_10 = FUNC_9(&VAR_6, VAR_12);
 FUNC_6(&VAR_6, FUNC_1(&VAR_2), VAR_10);
 if (VAR_6.fs_contigsumsize > 0)
  FUNC_5(FUNC_2(&VAR_2), VAR_10);
 VAR_2.cg_cs.cs_nbfree--;
 VAR_6.fs_cstotal.cs_nbfree--;
 VAR_4[0].cs_nbfree--;
 if (VAR_8 & VAR_1) {
  VAR_2.cg_cs.cs_ndir++;
  VAR_6.fs_cstotal.cs_ndir++;
  VAR_4[0].cs_ndir++;
 }
 if (VAR_7 != VAR_6.fs_bsize) {
  VAR_11 = FUNC_11(VAR_7, VAR_6.fs_fsize);
  VAR_4[0].cs_nffree += VAR_6.fs_frag - VAR_11;
  VAR_6.fs_cstotal.cs_nffree += VAR_6.fs_frag - VAR_11;
  VAR_2.cg_cs.cs_nffree += VAR_6.fs_frag - VAR_11;
  VAR_2.cg_frsum[VAR_6.fs_frag - VAR_11]++;
  for (VAR_9 = VAR_11; VAR_9 < VAR_6.fs_frag; VAR_9++)
   FUNC_14(FUNC_1(&VAR_2), VAR_12 + VAR_9);
 }
 if (FUNC_3(&VAR_3, &VAR_2) != 0)
  FUNC_7(1, "alloc: cgput: %s", VAR_3.d_error);
 return ((ufs2_daddr_t)VAR_12);
}
