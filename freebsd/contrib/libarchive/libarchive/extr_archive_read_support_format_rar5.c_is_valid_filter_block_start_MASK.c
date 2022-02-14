
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ write_ptr; scalar_t__ last_block_start; scalar_t__ last_block_length; } ;
struct rar5 {TYPE_1__ cstate; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ int64_t ;



__attribute__((used)) static int FUNC_0(struct rar5* VAR_0,
    uint32_t VAR_1)
{
 const int64_t VAR_2 = (ssize_t) VAR_1 + VAR_0->cstate.write_ptr;
 const int64_t VAR_3 = VAR_0->cstate.last_block_start;
 const ssize_t VAR_4 = VAR_0->cstate.last_block_length;

 if(VAR_3 == 0 || VAR_4 == 0) {

  return 1;
 }

 if(VAR_2 >= VAR_3 + VAR_4) {


  return 1;
 }


 return 0;
}
