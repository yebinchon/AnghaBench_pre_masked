
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_extract {void (* extract_progress ) (void*) ;void* extract_progress_user_data; } ;
struct archive_read {int dummy; } ;
struct archive {int dummy; } ;


 struct archive_read_extract* FUNC_0 (struct archive_read*) ;

void
FUNC_1(struct archive *VAR_0,
    void (*VAR_1)(void *), void *VAR_2)
{
 struct archive_read *VAR_3 = (struct archive_read *)VAR_0;
 struct archive_read_extract *VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 != ((void*)0)) {
  VAR_4->extract_progress = VAR_1;
  VAR_4->extract_progress_user_data = VAR_2;
 }
}
