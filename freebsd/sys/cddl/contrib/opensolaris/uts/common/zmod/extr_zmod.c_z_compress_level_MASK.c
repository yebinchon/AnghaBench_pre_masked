
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zs ;
struct TYPE_6__ {size_t avail_in; size_t avail_out; size_t total_out; int zfree; int zalloc; void* next_out; int * next_in; } ;
typedef TYPE_1__ z_stream ;
typedef int uchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_4(void *VAR_6, size_t *VAR_7, const void *VAR_8, size_t VAR_9,
    int VAR_10)
{

 z_stream VAR_11;
 int VAR_12;

 FUNC_0(&VAR_11, sizeof (VAR_11));
 VAR_11.next_in = (uchar_t *)VAR_8;
 VAR_11.avail_in = VAR_9;
 VAR_11.next_out = VAR_6;
 VAR_11.avail_out = *VAR_7;
 VAR_11.zalloc = VAR_4;
 VAR_11.zfree = VAR_5;

 if ((VAR_12 = FUNC_3(&VAR_11, VAR_10)) != VAR_2)
  return (VAR_12);

 if ((VAR_12 = FUNC_1(&VAR_11, VAR_1)) != VAR_3) {
  (void) FUNC_2(&VAR_11);
  return (VAR_12 == VAR_2 ? VAR_0 : VAR_12);
 }

 *VAR_7 = VAR_11.total_out;
 return (FUNC_2(&VAR_11));
}
