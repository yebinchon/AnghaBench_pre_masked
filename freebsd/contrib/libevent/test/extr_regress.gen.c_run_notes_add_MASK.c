
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run {scalar_t__ notes_length; scalar_t__ notes_num_allocated; char** notes_data; int notes_set; } ;


 scalar_t__ FUNC_0 (struct run*) ;
 char* FUNC_1 (char const*) ;

char * *
FUNC_2(struct run *VAR_0, const char * VAR_1)
{
  if (++VAR_0->notes_length >= VAR_0->notes_num_allocated) {
    if (FUNC_0(VAR_0)<0)
      goto error;
  }
  if (VAR_1 != ((void*)0)) {
    VAR_0->notes_data[VAR_0->notes_length - 1] = FUNC_1(VAR_1);
    if (VAR_0->notes_data[VAR_0->notes_length - 1] == ((void*)0)) {
      goto error;
    }
  } else {
    VAR_0->notes_data[VAR_0->notes_length - 1] = ((void*)0);
  }
  VAR_0->notes_set = 1;
  return &(VAR_0->notes_data[VAR_0->notes_length - 1]);
error:
  --VAR_0->notes_length;
  return (((void*)0));
}
