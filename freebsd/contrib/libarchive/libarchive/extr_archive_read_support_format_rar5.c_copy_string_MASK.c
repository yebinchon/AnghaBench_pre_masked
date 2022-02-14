
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int window_mask; int write_ptr; int solid_offset; int * window_buf; } ;
struct rar5 {TYPE_1__ cstate; } ;
struct archive_read {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct rar5* FUNC_0 (struct archive_read*) ;

__attribute__((used)) static int FUNC_1(struct archive_read* VAR_2, int VAR_3, int VAR_4) {
 struct rar5* VAR_5 = FUNC_0(VAR_2);
 const uint64_t VAR_6 = VAR_5->cstate.window_mask;
 const uint64_t VAR_7 = VAR_5->cstate.write_ptr +
     VAR_5->cstate.solid_offset;
 int VAR_8;

 if (VAR_5->cstate.window_buf == ((void*)0))
  return VAR_0;
 for(VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  const ssize_t VAR_9 = (VAR_7 + VAR_8) & VAR_6;
  const ssize_t VAR_10 = (VAR_7 + VAR_8 - VAR_4) & VAR_6;
  VAR_5->cstate.window_buf[VAR_9] =
      VAR_5->cstate.window_buf[VAR_10];
 }

 VAR_5->cstate.write_ptr += VAR_3;
 return VAR_1;
}
