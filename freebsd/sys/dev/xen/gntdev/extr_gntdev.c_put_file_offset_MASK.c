
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct per_user_data {int user_data_lock; int file_offset; } ;
struct file_offset_struct {scalar_t__ file_offset; int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,struct file_offset_struct*) ;
 struct file_offset_struct* FUNC_1 (int ,int *,struct file_offset_struct*) ;
 struct file_offset_struct* FUNC_2 (int ,int *,struct file_offset_struct*) ;
 int FUNC_3 (int ,int *,struct file_offset_struct*) ;
 int VAR_4 ;
 int FUNC_4 (struct file_offset_struct*,int ) ;
 struct file_offset_struct* FUNC_5 (int,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct per_user_data *VAR_5, uint32_t VAR_6,
    uint64_t VAR_7)
{
 struct file_offset_struct *VAR_8, *VAR_9, *VAR_10;

 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_0, VAR_1 | VAR_2);
 VAR_8->file_offset = VAR_7;
 VAR_8->count = VAR_6;

 FUNC_6(&VAR_5->user_data_lock);
 FUNC_0(VAR_4, &VAR_5->file_offset, VAR_8);
 VAR_9 = FUNC_1(VAR_4, &VAR_5->file_offset, VAR_8);
 VAR_10 = FUNC_2(VAR_4, &VAR_5->file_offset, VAR_8);
 if (VAR_9 != ((void*)0) &&
     VAR_9->file_offset == VAR_8->file_offset + VAR_8->count *
     VAR_3) {
  VAR_8->count += VAR_9->count;
  FUNC_3(VAR_4, &VAR_5->file_offset,
      VAR_9);
  FUNC_4(VAR_9, VAR_0);
 }
 if (VAR_10 != ((void*)0) &&
     VAR_8->file_offset == VAR_10->file_offset + VAR_10->count *
     VAR_3) {
  VAR_10->count += VAR_8->count;
  FUNC_3(VAR_4, &VAR_5->file_offset, VAR_8);
  FUNC_4(VAR_8, VAR_0);
 }
 FUNC_7(&VAR_5->user_data_lock);
}
