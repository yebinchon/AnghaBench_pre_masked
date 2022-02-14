
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_s {scalar_t__ type; int file; int label; int sectorsize; int mediasize; int flags; } ;
struct md_req {scalar_t__ md_type; int * md_file; int * md_label; int md_sectorsize; int md_mediasize; int md_options; int md_unit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,scalar_t__) ;
 int VAR_4 ;
 struct md_s* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(struct md_req *VAR_5)
{
 struct md_s *VAR_6;
 int VAR_7;

 FUNC_3(&VAR_4, VAR_3);

 VAR_6 = FUNC_1(VAR_5->md_unit);
 if (VAR_6 == ((void*)0))
  return (VAR_0);
 VAR_5->md_type = VAR_6->type;
 VAR_5->md_options = VAR_6->flags;
 VAR_5->md_mediasize = VAR_6->mediasize;
 VAR_5->md_sectorsize = VAR_6->sectorsize;
 VAR_7 = 0;
 if (VAR_5->md_label != ((void*)0)) {
  VAR_7 = FUNC_0(VAR_6->label, VAR_5->md_label,
      FUNC_2(VAR_6->label) + 1);
  if (VAR_7 != 0)
   return (VAR_7);
 }
 if (VAR_6->type == VAR_2 ||
     (VAR_6->type == VAR_1 && VAR_5->md_file != ((void*)0)))
  VAR_7 = FUNC_0(VAR_6->file, VAR_5->md_file,
      FUNC_2(VAR_6->file) + 1);
 return (VAR_7);
}
