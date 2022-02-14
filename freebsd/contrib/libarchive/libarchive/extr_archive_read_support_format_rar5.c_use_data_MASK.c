
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct data_ready* dready; } ;
struct rar5 {TYPE_1__ cstate; } ;
struct data_ready {void* buf; size_t size; scalar_t__ used; int offset; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct data_ready*) ;

__attribute__((used)) static int FUNC_1(struct rar5* VAR_2, const void** VAR_3, size_t* VAR_4,
    int64_t* VAR_5)
{
 int VAR_6;

 for(VAR_6 = 0; VAR_6 < FUNC_0(VAR_2->cstate.dready); VAR_6++) {
  struct data_ready *VAR_7 = &VAR_2->cstate.dready[VAR_6];

  if(VAR_7->used) {
   if(VAR_3) *VAR_3 = VAR_7->buf;
   if(VAR_4) *VAR_4 = VAR_7->size;
   if(VAR_5) *VAR_5 = VAR_7->offset;

   VAR_7->used = 0;
   return VAR_0;
  }
 }

 return VAR_1;
}
