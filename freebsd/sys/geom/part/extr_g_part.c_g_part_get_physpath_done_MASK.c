
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {struct g_part_entry* private; struct g_geom* geom; } ;
struct g_part_table {int dummy; } ;
struct g_part_entry {int dummy; } ;
struct g_geom {struct g_part_table* softc; } ;
struct bio {scalar_t__ bio_error; char* bio_data; size_t bio_length; struct g_provider* bio_to; struct bio* bio_parent; } ;


 int FUNC_0 (struct g_part_table*,struct g_part_entry*,char*,size_t) ;
 int FUNC_1 (struct bio*) ;
 size_t FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_3(struct bio *VAR_0)
{
 struct g_geom *VAR_1;
 struct g_part_entry *VAR_2;
 struct g_part_table *VAR_3;
 struct g_provider *VAR_4;
 struct bio *VAR_5;

 VAR_5 = VAR_0->bio_parent;
 VAR_4 = VAR_5->bio_to;
 VAR_1 = VAR_4->geom;
 VAR_3 = VAR_1->softc;
 VAR_2 = VAR_4->private;

 if (VAR_0->bio_error == 0) {
  char *VAR_6;
  size_t VAR_7, VAR_8;
  VAR_7 = FUNC_2(VAR_0->bio_data, "/", VAR_0->bio_length);
  if (VAR_7 < VAR_0->bio_length) {
   VAR_6 = VAR_0->bio_data + VAR_7;
   VAR_8 = VAR_0->bio_length - VAR_7;
   FUNC_0(VAR_3, VAR_2, VAR_6, VAR_8);
  }
 }
 FUNC_1(VAR_0);
}
