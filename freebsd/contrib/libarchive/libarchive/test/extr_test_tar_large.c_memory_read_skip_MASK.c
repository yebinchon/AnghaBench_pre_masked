
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memdata {scalar_t__ filebytes; int * last; int * first; } ;
struct archive {int dummy; } ;
typedef scalar_t__ off_t ;
typedef scalar_t__ int64_t ;



__attribute__((used)) static int64_t
FUNC_0(struct archive *VAR_0, void *VAR_1, int64_t VAR_2)
{
 struct memdata *VAR_3 = VAR_1;

 (void)VAR_0;

 if (VAR_3->first == ((void*)0)) {
  VAR_3->last = ((void*)0);
  return (0);
 }
 if (VAR_3->filebytes > 0) {
  if (VAR_3->filebytes < VAR_2)
   VAR_2 = (off_t)VAR_3->filebytes;
  VAR_3->filebytes -= VAR_2;
 } else {
  VAR_2 = 0;
 }
 return (VAR_2);
}
