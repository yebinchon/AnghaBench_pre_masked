
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parsed_partitions {int dummy; } ;
struct TYPE_2__ {unsigned long config_start; } ;
struct ldmdb {int v_part; int v_comp; int v_volu; int v_disk; int v_dgrp; TYPE_1__ ph; } ;
struct block_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ldmdb*) ;
 struct ldmdb* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (struct parsed_partitions*,struct ldmdb*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct block_device*,unsigned long,struct ldmdb*) ;
 int FUNC_9 (struct block_device*) ;
 int FUNC_10 (struct block_device*,TYPE_1__*) ;
 int FUNC_11 (struct block_device*,unsigned long,struct ldmdb*) ;
 int FUNC_12 (struct block_device*,unsigned long,struct ldmdb*) ;

int FUNC_13 (struct parsed_partitions *VAR_1, struct block_device *VAR_2)
{
 struct ldmdb *VAR_3;
 unsigned long VAR_4;
 int VAR_5 = -1;

 FUNC_0 (!VAR_1 || !VAR_2);


 if (!FUNC_9 (VAR_2))
  return 0;

 VAR_3 = FUNC_3 (sizeof (*VAR_3), VAR_0);
 if (!VAR_3) {
  FUNC_5 ("Out of memory.");
  goto out;
 }


 if (!FUNC_10 (VAR_2, &VAR_3->ph))
  goto out;


 VAR_4 = VAR_3->ph.config_start;


 if (!FUNC_11 (VAR_2, VAR_4, VAR_3) ||
     !FUNC_12 (VAR_2, VAR_4, VAR_3))
      goto out;


 FUNC_1 (&VAR_3->v_dgrp);
 FUNC_1 (&VAR_3->v_disk);
 FUNC_1 (&VAR_3->v_volu);
 FUNC_1 (&VAR_3->v_comp);
 FUNC_1 (&VAR_3->v_part);

 if (!FUNC_8 (VAR_2, VAR_4, VAR_3)) {
  FUNC_5 ("Failed to read the VBLKs from the database.");
  goto cleanup;
 }


 if (FUNC_4 (VAR_1, VAR_3)) {
  FUNC_6 ("Parsed LDM database successfully.");
  VAR_5 = 1;
 }


cleanup:
 FUNC_7 (&VAR_3->v_dgrp);
 FUNC_7 (&VAR_3->v_disk);
 FUNC_7 (&VAR_3->v_volu);
 FUNC_7 (&VAR_3->v_comp);
 FUNC_7 (&VAR_3->v_part);
out:
 FUNC_2 (VAR_3);
 return VAR_5;
}
