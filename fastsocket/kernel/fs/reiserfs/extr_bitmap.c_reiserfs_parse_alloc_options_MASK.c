
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_3__ {int border; int large_file_size; int preallocmin; int preallocsize; scalar_t__ bits; } ;
struct TYPE_4__ {TYPE_1__ s_alloc_options; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct super_block*,char*,int ) ;
 int FUNC_4 (struct super_block*,char*,char*,char*) ;
 int FUNC_5 (char*,char**,int ) ;
 int VAR_13 ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char*) ;
 char* FUNC_8 (char**,char*) ;

int FUNC_9(struct super_block *VAR_14, char *VAR_15)
{
 char *VAR_16, *VAR_17;

 FUNC_0(VAR_14)->s_alloc_options.bits = 0;

 while ((VAR_16 = FUNC_8(&VAR_15, ":")) != ((void*)0)) {
  if ((VAR_17 = FUNC_6(VAR_16, '=')) != ((void*)0))
   *VAR_17++ = 0;

  if (!FUNC_7(VAR_16, "concentrating_formatted_nodes")) {
   int VAR_18;
   FUNC_2(VAR_1);
   VAR_18 = (VAR_17
    && *VAR_17) ? FUNC_5(VAR_17, &VAR_17,
           0) : 10;
   if (VAR_18 <= 0 || VAR_18 > 100) {
    FUNC_0(VAR_14)->s_alloc_options.border = 10;
   } else {
    FUNC_0(VAR_14)->s_alloc_options.border =
        100 / VAR_18;
   }
   continue;
  }
  if (!FUNC_7(VAR_16, "displacing_large_files")) {
   FUNC_2(VAR_4);
   FUNC_0(VAR_14)->s_alloc_options.large_file_size =
       (VAR_17
        && *VAR_17) ? FUNC_5(VAR_17, &VAR_17, 0) : 16;
   continue;
  }
  if (!FUNC_7(VAR_16, "displacing_new_packing_localities")) {
   FUNC_2(VAR_5);
   continue;
  };

  if (!FUNC_7(VAR_16, "old_hashed_relocation")) {
   FUNC_2(VAR_10);
   continue;
  }

  if (!FUNC_7(VAR_16, "new_hashed_relocation")) {
   FUNC_2(VAR_8);
   continue;
  }

  if (!FUNC_7(VAR_16, "dirid_groups")) {
   FUNC_2(VAR_2);
   continue;
  }
  if (!FUNC_7(VAR_16, "oid_groups")) {
   FUNC_2(VAR_9);
   continue;
  }
  if (!FUNC_7(VAR_16, "packing_groups")) {
   FUNC_2(VAR_12);
   continue;
  }
  if (!FUNC_7(VAR_16, "hashed_formatted_nodes")) {
   FUNC_2(VAR_6);
   continue;
  }

  if (!FUNC_7(VAR_16, "skip_busy")) {
   FUNC_2(VAR_13);
   continue;
  }

  if (!FUNC_7(VAR_16, "hundredth_slices")) {
   FUNC_2(VAR_7);
   continue;
  }

  if (!FUNC_7(VAR_16, "old_way")) {
   FUNC_2(VAR_11);
   continue;
  }

  if (!FUNC_7(VAR_16, "displace_based_on_dirid")) {
   FUNC_2(VAR_3);
   continue;
  }

  if (!FUNC_7(VAR_16, "preallocmin")) {
   FUNC_0(VAR_14)->s_alloc_options.preallocmin =
       (VAR_17
        && *VAR_17) ? FUNC_5(VAR_17, &VAR_17, 0) : 4;
   continue;
  }

  if (!FUNC_7(VAR_16, "preallocsize")) {
   FUNC_0(VAR_14)->s_alloc_options.preallocsize =
       (VAR_17
        && *VAR_17) ? FUNC_5(VAR_17, &VAR_17,
        0) :
       VAR_0;
   continue;
  }

  FUNC_4(VAR_14, "zam-4001", "unknown option - %s",
     VAR_16);
  return 1;
 }

 FUNC_3(VAR_14, "allocator options = [%08x]\n", FUNC_1(VAR_14));
 return 0;
}
