
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int refcnt ;
typedef int ref_psize ;
typedef int ref_lsize ;
typedef int ref_dsize ;
typedef int ref_blocks ;
typedef int psize ;
typedef int lsize ;
typedef int dsize ;
struct TYPE_3__ {unsigned long long dds_blocks; unsigned long long dds_lsize; unsigned long long dds_psize; unsigned long long dds_dsize; unsigned long long dds_ref_blocks; unsigned long long dds_ref_lsize; unsigned long long dds_ref_psize; unsigned long long dds_ref_dsize; } ;
typedef TYPE_1__ ddt_stat_t ;
typedef int blocks ;


 int FUNC_0 (char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (unsigned long long,char*,int) ;

__attribute__((used)) static void
FUNC_3(const ddt_stat_t *VAR_0, int VAR_1)
{
 char VAR_2[6];
 char VAR_3[6], VAR_4[6], VAR_5[6], VAR_6[6];
 char VAR_7[6], VAR_8[6], VAR_9[6], VAR_10[6];

 if (VAR_0 == ((void*)0) || VAR_0->dds_blocks == 0)
  return;

 if (VAR_1 == -1)
  (void) FUNC_1(VAR_2, "Total");
 else
  FUNC_2(1ULL << VAR_1, VAR_2, sizeof (VAR_2));

 FUNC_2(VAR_0->dds_blocks, VAR_3, sizeof (VAR_3));
 FUNC_2(VAR_0->dds_lsize, VAR_4, sizeof (VAR_4));
 FUNC_2(VAR_0->dds_psize, VAR_5, sizeof (VAR_5));
 FUNC_2(VAR_0->dds_dsize, VAR_6, sizeof (VAR_6));
 FUNC_2(VAR_0->dds_ref_blocks, VAR_7, sizeof (VAR_7));
 FUNC_2(VAR_0->dds_ref_lsize, VAR_8, sizeof (VAR_8));
 FUNC_2(VAR_0->dds_ref_psize, VAR_9, sizeof (VAR_9));
 FUNC_2(VAR_0->dds_ref_dsize, VAR_10, sizeof (VAR_10));

 (void) FUNC_0("%6s   %6s   %5s   %5s   %5s   %6s   %5s   %5s   %5s\n",
     VAR_2,
     VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8, VAR_9, VAR_10);
}
