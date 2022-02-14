
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct heap_queue {int used; int allocated; struct file_info** files; } ;
struct file_info {scalar_t__ key; } ;
struct archive_read {int archive; } ;
typedef int new_pending_files ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (struct file_info**) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct file_info**,struct file_info**,int) ;

__attribute__((used)) static int
FUNC_4(struct archive_read *VAR_3, struct heap_queue *VAR_4,
    struct file_info *VAR_5, uint64_t VAR_6)
{
 uint64_t VAR_7, VAR_8;
 int VAR_9, VAR_10;


 if (VAR_4->used >= VAR_4->allocated) {
  struct file_info **VAR_11;
  int VAR_12 = VAR_4->allocated * 2;

  if (VAR_4->allocated < 1024)
   VAR_12 = 1024;

  if (VAR_12 <= VAR_4->allocated) {
   FUNC_0(&VAR_3->archive,
       VAR_2, "Out of memory");
   return (VAR_0);
  }
  VAR_11 = (struct file_info **)
      FUNC_2(VAR_12 * sizeof(VAR_11[0]));
  if (VAR_11 == ((void*)0)) {
   FUNC_0(&VAR_3->archive,
       VAR_2, "Out of memory");
   return (VAR_0);
  }
  if (VAR_4->allocated)
   FUNC_3(VAR_11, VAR_4->files,
       VAR_4->allocated * sizeof(VAR_11[0]));
  FUNC_1(VAR_4->files);
  VAR_4->files = VAR_11;
  VAR_4->allocated = VAR_12;
 }

 VAR_7 = VAR_5->key = VAR_6;




 VAR_9 = VAR_4->used++;
 while (VAR_9 > 0) {
  VAR_10 = (VAR_9 - 1)/2;
  VAR_8 = VAR_4->files[VAR_10]->key;
  if (VAR_7 >= VAR_8) {
   VAR_4->files[VAR_9] = VAR_5;
   return (VAR_1);
  }

  VAR_4->files[VAR_9] = VAR_4->files[VAR_10];
  VAR_9 = VAR_10;
 }
 VAR_4->files[0] = VAR_5;

 return (VAR_1);
}
