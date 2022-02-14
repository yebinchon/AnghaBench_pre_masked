
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef void* u32 ;
struct ui_browser {void* nr_entries; scalar_t__ top_idx; scalar_t__ index; int (* seek ) (struct ui_browser*,scalar_t__,int ) ;int * top; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int FUNC_0 (struct ui_browser*,scalar_t__,int ) ;

void FUNC_1(struct ui_browser *VAR_1, u32 VAR_2)
{
 off_t VAR_3 = VAR_2 - VAR_1->nr_entries;

 VAR_1->nr_entries = VAR_2;

 if (VAR_3 < 0) {
  if (VAR_1->top_idx < (u64)-VAR_3)
   VAR_3 = -VAR_1->top_idx;

  VAR_1->index += VAR_3;
  VAR_1->top_idx += VAR_3;
 }

 VAR_1->top = ((void*)0);
 VAR_1->seek(VAR_1, VAR_1->top_idx, VAR_0);
}
