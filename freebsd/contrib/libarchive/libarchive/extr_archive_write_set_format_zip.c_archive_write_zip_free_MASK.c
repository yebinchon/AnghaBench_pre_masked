
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip {int hctx; scalar_t__ hctx_valid; int cctx; scalar_t__ cctx_valid; int entry; struct zip* buf; struct zip* buff; struct zip* next; struct zip* central_directory; } ;
struct cd_segment {int hctx; scalar_t__ hctx_valid; int cctx; scalar_t__ cctx_valid; int entry; struct cd_segment* buf; struct cd_segment* buff; struct cd_segment* next; struct cd_segment* central_directory; } ;
struct archive_write {struct zip* format_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct zip*) ;

__attribute__((used)) static int
FUNC_4(struct archive_write *VAR_1)
{
 struct zip *VAR_2;
 struct cd_segment *VAR_3;

 VAR_2 = VAR_1->format_data;
 while (VAR_2->central_directory != ((void*)0)) {
  VAR_3 = VAR_2->central_directory;
  VAR_2->central_directory = VAR_3->next;
  FUNC_3(VAR_3->buff);
  FUNC_3(VAR_3);
 }
 FUNC_3(VAR_2->buf);
 FUNC_1(VAR_2->entry);
 if (VAR_2->cctx_valid)
  FUNC_0(&VAR_2->cctx);
 if (VAR_2->hctx_valid)
  FUNC_2(&VAR_2->hctx);


 FUNC_3(VAR_2);
 VAR_1->format_data = ((void*)0);
 return (VAR_0);
}
