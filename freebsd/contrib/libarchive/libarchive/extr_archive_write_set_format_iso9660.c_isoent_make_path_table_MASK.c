
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int max_depth; } ;
struct TYPE_7__ {int iso_level; scalar_t__ joliet; scalar_t__ limit_dirs; scalar_t__ rr; int limit_depth; } ;
struct iso9660 {scalar_t__ dircnt_max; TYPE_2__ joliet; TYPE_1__ opt; TYPE_2__ primary; } ;
struct archive_write {int archive; struct iso9660* format_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,char*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct archive_write*,TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int *,int ) ;
 int FUNC_4 (struct archive_write*,TYPE_2__*,int,int*) ;
 int FUNC_5 (struct archive_write*) ;
 int FUNC_6 (struct archive_write*,TYPE_2__*) ;
 int FUNC_7 (struct iso9660*) ;

__attribute__((used)) static int
FUNC_8(struct archive_write *VAR_4)
{
 struct iso9660 *VAR_5 = VAR_4->format_data;
 int VAR_6, VAR_7;
 int VAR_8;




 if (VAR_5->dircnt_max >= VAR_3 &&
     (!VAR_5->opt.limit_depth || VAR_5->opt.iso_level == 4))
  VAR_7 = FUNC_2(VAR_4, &(VAR_5->primary),
      VAR_5->dircnt_max + 1);
 else


  VAR_7 = FUNC_2(VAR_4, &(VAR_5->primary),
      VAR_3);
 if (VAR_7 < 0)
  return (VAR_7);
 if (VAR_5->opt.joliet) {
  VAR_7 = FUNC_2(VAR_4, &(VAR_5->joliet),
      VAR_5->dircnt_max + 1);
  if (VAR_7 < 0)
   return (VAR_7);
 }




 FUNC_3(&(VAR_5->primary), ((void*)0), 0);
 if (VAR_5->opt.joliet)
  FUNC_3(&(VAR_5->joliet), ((void*)0), 0);



 if (VAR_5->opt.rr) {
  VAR_7 = FUNC_5(VAR_4);
  if (VAR_7 < 0)
   return (VAR_7);
 }


 FUNC_7(VAR_5);







 VAR_7 = FUNC_6(VAR_4, &(VAR_5->primary));
 if (VAR_7 < 0)
  return (VAR_7);
 if (VAR_5->opt.joliet) {
  VAR_7 = FUNC_6(VAR_4, &(VAR_5->joliet));
  if (VAR_7 < 0)
   return (VAR_7);
 }





 VAR_8 = 1;
 for (VAR_6 = 0; VAR_6 < VAR_5->primary.max_depth; VAR_6++) {
  VAR_7 = FUNC_4(VAR_4, &(VAR_5->primary),
      VAR_6, &VAR_8);
  if (VAR_7 < 0)
   return (VAR_7);
 }
 if (VAR_5->opt.joliet) {
  VAR_8 = 1;
  for (VAR_6 = 0; VAR_6 < VAR_5->joliet.max_depth; VAR_6++) {
   VAR_7 = FUNC_4(VAR_4, &(VAR_5->joliet),
       VAR_6, &VAR_8);
   if (VAR_7 < 0)
    return (VAR_7);
  }
 }
 if (VAR_5->opt.limit_dirs && VAR_8 > 0xffff) {






  FUNC_0(&VAR_4->archive, VAR_0,
      "Too many directories(%d) over 65535.", VAR_8);
  return (VAR_1);
 }


 FUNC_1(&(VAR_5->primary));
 if (VAR_5->opt.joliet)
  FUNC_1(&(VAR_5->joliet));

 return (VAR_2);
}
