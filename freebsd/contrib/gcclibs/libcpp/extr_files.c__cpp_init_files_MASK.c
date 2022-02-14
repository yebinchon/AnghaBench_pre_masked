
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nonexistent_file_ob; void* nonexistent_file_hash; void* dir_hash; void* file_hash; } ;
typedef TYPE_1__ cpp_reader ;


 int FUNC_0 (int *,int ,int ,void* (*) (long),void (*) (void*)) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_2 (int,int ,int ,int *,int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

void
FUNC_3 (cpp_reader *VAR_7)
{
  VAR_7->file_hash = FUNC_2 (127, VAR_1, VAR_0,
     ((void*)0), VAR_5, VAR_2);
  VAR_7->dir_hash = FUNC_2 (127, VAR_1, VAR_0,
     ((void*)0), VAR_5, VAR_2);
  FUNC_1 (VAR_7);
  VAR_7->nonexistent_file_hash = FUNC_2 (127, VAR_3,
          VAR_4,
          ((void*)0), VAR_5, VAR_2);
  FUNC_0 (&VAR_7->nonexistent_file_ob, 0, 0,
    (void *(*) (long)) VAR_6,
    (void (*) (void *)) VAR_2);
}
