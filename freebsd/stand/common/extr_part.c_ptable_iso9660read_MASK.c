
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ptable {int sectorsize; int type; int entries; int sectors; } ;
struct TYPE_2__ {scalar_t__ index; int type; int end; scalar_t__ start; } ;
struct pentry {TYPE_1__ part; } ;
struct iso_primary_descriptor {int id; } ;
typedef scalar_t__ (* diskread_t ) (void*,int *,int,int ) ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct pentry*,struct pentry*) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct ptable*) ;

__attribute__((used)) static struct ptable *
FUNC_7(struct ptable *VAR_3, void *VAR_4, diskread_t VAR_5)
{
 uint8_t *VAR_6;
 struct iso_primary_descriptor *VAR_7;
 struct pentry *VAR_8;

 VAR_6 = FUNC_5(VAR_3->sectorsize);
 if (VAR_6 == ((void*)0))
  return (VAR_3);

 if (VAR_5(VAR_4, VAR_6, 1, FUNC_3(16)) != 0) {
  FUNC_0("read failed");
  FUNC_6(VAR_3);
  VAR_3 = ((void*)0);
  goto out;
 }
 VAR_7 = (struct iso_primary_descriptor *)VAR_6;
 if (FUNC_2(VAR_7->id, VAR_0, sizeof VAR_7->id) != 0)
  goto out;

 VAR_8 = FUNC_5(sizeof(*VAR_8));
 if (VAR_8 == ((void*)0))
  goto out;
 VAR_8->part.start = 0;
 VAR_8->part.end = VAR_3->sectors;
 VAR_8->part.type = VAR_1;
 VAR_8->part.index = 0;
 FUNC_1(&VAR_3->entries, VAR_8, VAR_8);

 VAR_3->type = VAR_2;

out:
 FUNC_4(VAR_6);
 return (VAR_3);
}
