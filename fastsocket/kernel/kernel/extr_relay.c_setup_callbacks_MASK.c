
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rchan_callbacks {scalar_t__ remove_buf_file; scalar_t__ create_buf_file; scalar_t__ buf_unmapped; scalar_t__ buf_mapped; scalar_t__ subbuf_start; } ;
struct rchan {struct rchan_callbacks* cb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct rchan_callbacks VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(struct rchan *VAR_6,
       struct rchan_callbacks *VAR_7)
{
 if (!VAR_7) {
  VAR_6->cb = &VAR_3;
  return;
 }

 if (!VAR_7->subbuf_start)
  VAR_7->subbuf_start = VAR_5;
 if (!VAR_7->buf_mapped)
  VAR_7->buf_mapped = VAR_0;
 if (!VAR_7->buf_unmapped)
  VAR_7->buf_unmapped = VAR_1;
 if (!VAR_7->create_buf_file)
  VAR_7->create_buf_file = VAR_2;
 if (!VAR_7->remove_buf_file)
  VAR_7->remove_buf_file = VAR_4;
 VAR_6->cb = VAR_7;
}
