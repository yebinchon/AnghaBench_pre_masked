
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ptable {int sectorsize; int type; int entries; } ;
struct TYPE_4__ {int bsd; } ;
struct TYPE_3__ {int start; int end; int index; int type; } ;
struct pentry {TYPE_2__ type; TYPE_1__ part; } ;
struct partition {scalar_t__ p_offset; scalar_t__ p_size; int p_fstype; } ;
struct disklabel {scalar_t__ d_magic; scalar_t__ d_magic2; scalar_t__ d_secsize; int d_npartitions; struct partition* d_partitions; } ;
typedef scalar_t__ (* diskread_t ) (void*,int *,int,int) ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int *,struct pentry*,struct pentry*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct ptable*) ;

__attribute__((used)) static struct ptable *
FUNC_8(struct ptable *VAR_3, void *VAR_4, diskread_t VAR_5)
{
 struct disklabel *VAR_6;
 struct partition *VAR_7;
 struct pentry *VAR_8;
 uint8_t *VAR_9;
 uint32_t VAR_10;
 int VAR_11;

 if (VAR_3->sectorsize < sizeof(struct disklabel)) {
  FUNC_0("Too small sectorsize");
  return (VAR_3);
 }
 VAR_9 = FUNC_6(VAR_3->sectorsize);
 if (VAR_9 == ((void*)0))
  return (VAR_3);
 if (VAR_5(VAR_4, VAR_9, 1, 1) != 0) {
  FUNC_0("read failed");
  FUNC_7(VAR_3);
  VAR_3 = ((void*)0);
  goto out;
 }
 VAR_6 = (struct disklabel *)VAR_9;
 if (FUNC_5(VAR_6->d_magic) != VAR_0 &&
     FUNC_5(VAR_6->d_magic2) != VAR_0)
  goto out;
 if (FUNC_5(VAR_6->d_secsize) != VAR_3->sectorsize) {
  FUNC_0("unsupported sector size");
  goto out;
 }
 VAR_6->d_npartitions = FUNC_4(VAR_6->d_npartitions);
 if (VAR_6->d_npartitions > 20 || VAR_6->d_npartitions < 8) {
  FUNC_0("invalid number of partitions");
  goto out;
 }
 FUNC_0("BSD detected");
 VAR_7 = &VAR_6->d_partitions[0];
 VAR_10 = FUNC_5(VAR_7[VAR_2].p_offset);
 for (VAR_11 = 0; VAR_11 < VAR_6->d_npartitions; VAR_11++, VAR_7++) {
  if (VAR_11 == VAR_2)
   continue;
  if (VAR_7->p_size == 0)
   continue;
  VAR_8 = FUNC_6(sizeof(*VAR_8));
  if (VAR_8 == ((void*)0))
   break;
  VAR_8->part.start = FUNC_5(VAR_7->p_offset) - VAR_10;
  VAR_8->part.end = VAR_8->part.start +
      FUNC_5(VAR_7->p_size) - 1;
  VAR_8->part.type = FUNC_2(VAR_7->p_fstype);
  VAR_8->part.index = VAR_11;
  VAR_8->type.bsd = VAR_7->p_fstype;
  FUNC_1(&VAR_3->entries, VAR_8, VAR_8);
  FUNC_0("new BSD partition added");
 }
 VAR_3->type = VAR_1;
out:
 FUNC_3(VAR_9);
 return (VAR_3);
}
