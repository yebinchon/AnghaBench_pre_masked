
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tocblock {scalar_t__ bitmap1_start; scalar_t__ bitmap1_size; scalar_t__ bitmap2_start; scalar_t__ bitmap2_size; } ;
struct privhead {scalar_t__ config_size; } ;
struct ldmdb {struct tocblock toc; struct privhead ph; } ;
struct block_device {int dummy; } ;
typedef int Sector ;


 int FUNC_0 (int) ;
 int VAR_0 ;




 int FUNC_1 (struct tocblock*) ;
 struct tocblock* FUNC_2 (int,int ) ;
 int FUNC_3 (struct tocblock*,struct tocblock*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int) ;
 scalar_t__ FUNC_7 (int *,struct tocblock*) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (struct block_device*,unsigned long,int *) ;

__attribute__((used)) static bool FUNC_10(struct block_device *VAR_1,
 unsigned long VAR_2, struct ldmdb *VAR_3)
{
 static const int VAR_4[4] = { 131, 130, 129, 128};
 struct tocblock *VAR_5[4];
 struct privhead *VAR_6;
 Sector VAR_7;
 u8 *VAR_8;
 int VAR_9, VAR_10;
 bool VAR_11 = 0;

 FUNC_0(!VAR_1 || !VAR_3);
 VAR_6 = &VAR_3->ph;
 VAR_5[0] = &VAR_3->toc;
 VAR_5[1] = FUNC_2(sizeof(*VAR_5[1]) * 3, VAR_0);
 if (!VAR_5[1]) {
  FUNC_4("Out of memory.");
  goto err;
 }
 VAR_5[2] = (struct tocblock*)((u8*)VAR_5[1] + sizeof(*VAR_5[1]));
 VAR_5[3] = (struct tocblock*)((u8*)VAR_5[2] + sizeof(*VAR_5[2]));






 for (VAR_10 = VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  VAR_8 = FUNC_9(VAR_1, VAR_2 + VAR_4[VAR_9], &VAR_7);
  if (!VAR_8) {
   FUNC_6("Disk read failed for TOCBLOCK %d.", VAR_9);
   continue;
  }
  if (FUNC_7(VAR_8, VAR_5[VAR_10]))
   VAR_10++;
  FUNC_8(VAR_7);
 }
 if (!VAR_10) {
  FUNC_4("Failed to find a valid TOCBLOCK.");
  goto err;
 }

 if (((VAR_5[0]->bitmap1_start + VAR_5[0]->bitmap1_size) > VAR_6->config_size) ||
   ((VAR_5[0]->bitmap2_start + VAR_5[0]->bitmap2_size) >
   VAR_6->config_size)) {
  FUNC_4("The bitmaps are out of range.  Giving up.");
  goto err;
 }

 for (VAR_9 = 1; VAR_9 < VAR_10; VAR_9++) {
  if (!FUNC_3(VAR_5[0], VAR_5[VAR_9])) {
   FUNC_4("TOCBLOCKs 0 and %d do not match.", VAR_9);
   goto err;
  }
 }
 FUNC_5("Validated %d TOCBLOCKs successfully.", VAR_10);
 VAR_11 = 1;
err:
 FUNC_1(VAR_5[1]);
 return VAR_11;
}
