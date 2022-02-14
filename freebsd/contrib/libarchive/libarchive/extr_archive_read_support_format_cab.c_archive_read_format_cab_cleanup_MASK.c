
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cfheader {int folder_count; int file_count; struct cab* file_array; struct cab* folder_array; } ;
struct TYPE_3__ {struct cab* memimage; } ;
struct cab {struct cab* uncompressed_buffer; int ws; int xstrm; int stream; scalar_t__ stream_valid; int pathname; struct cfheader cfheader; TYPE_1__ cfdata; } ;
struct archive_read {TYPE_2__* format; } ;
struct TYPE_4__ {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cab*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct archive_read *VAR_1)
{
 struct cab *VAR_2 = (struct cab *)(VAR_1->format->data);
 struct cfheader *VAR_3 = &VAR_2->cfheader;
 int VAR_4;

 if (VAR_3->folder_array != ((void*)0)) {
  for (VAR_4 = 0; VAR_4 < VAR_3->folder_count; VAR_4++)
   FUNC_2(VAR_3->folder_array[VAR_4].cfdata.memimage);
  FUNC_2(VAR_3->folder_array);
 }
 if (VAR_3->file_array != ((void*)0)) {
  for (VAR_4 = 0; VAR_4 < VAR_2->cfheader.file_count; VAR_4++)
   FUNC_0(&(VAR_3->file_array[VAR_4].pathname));
  FUNC_2(VAR_3->file_array);
 }




 FUNC_4(&VAR_2->xstrm);
 FUNC_1(&VAR_2->ws);
 FUNC_2(VAR_2->uncompressed_buffer);
 FUNC_2(VAR_2);
 (VAR_1->format->data) = ((void*)0);
 return (VAR_0);
}
