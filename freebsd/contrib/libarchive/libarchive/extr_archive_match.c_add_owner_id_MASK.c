
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct id_array {int count; int size; scalar_t__* ids; } ;
struct archive_match {int setflag; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_match*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,unsigned int) ;
 void* FUNC_2 (scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_3(struct archive_match *VAR_2, struct id_array *VAR_3, int64_t VAR_4)
{
 unsigned VAR_5;

 if (VAR_3->count + 1 >= VAR_3->size) {
  void *VAR_6;

  if (VAR_3->size == 0)
   VAR_3->size = 8;
  else
   VAR_3->size *= 2;
  VAR_6 = FUNC_2(VAR_3->ids, sizeof(*VAR_3->ids) * VAR_3->size);
  if (VAR_6 == ((void*)0))
   return (FUNC_0(VAR_2));
  VAR_3->ids = (int64_t *)VAR_6;
 }


 for (VAR_5 = 0; VAR_5 < VAR_3->count; VAR_5++) {
  if (VAR_3->ids[VAR_5] >= VAR_4)
   break;
 }


 if (VAR_5 == VAR_3->count)
  VAR_3->ids[VAR_3->count++] = VAR_4;
 else if (VAR_3->ids[VAR_5] != VAR_4) {
  FUNC_1(&(VAR_3->ids[VAR_5+1]), &(VAR_3->ids[VAR_5]),
      (VAR_3->count - VAR_5) * sizeof(VAR_3->ids[0]));
  VAR_3->ids[VAR_5] = VAR_4;
  VAR_3->count++;
 }
 VAR_2->setflag |= VAR_1;
 return (VAR_0);
}
