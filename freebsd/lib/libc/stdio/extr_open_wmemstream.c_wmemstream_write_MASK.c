
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmemstream {scalar_t__ offset; scalar_t__ len; scalar_t__* bufp; int mbstate; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct wmemstream*,int,scalar_t__) ;
 size_t FUNC_1 (scalar_t__,char const*,int,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (struct wmemstream*,scalar_t__) ;
 int FUNC_4 (struct wmemstream*) ;

__attribute__((used)) static int
FUNC_5(void *VAR_3, const char *VAR_4, int VAR_5)
{
 struct wmemstream *VAR_6;
 ssize_t VAR_7, VAR_8;
 size_t VAR_9;

 VAR_6 = VAR_3;
 VAR_8 = FUNC_2(&VAR_6->mbstate, VAR_4, VAR_5);
 if (VAR_8 < 0) {
  VAR_1 = VAR_0;
  return (-1);
 }
 if (!FUNC_3(VAR_6, VAR_6->offset + VAR_8))
  return (-1);






 VAR_7 = 0;
 while (VAR_5 > 0 && VAR_6->offset < VAR_6->len) {
  VAR_9 = FUNC_1(*VAR_6->bufp + VAR_6->offset, VAR_4, VAR_5,
      &VAR_6->mbstate);
  if (VAR_9 == (size_t)-1) {
   if (VAR_7 == 0) {
    VAR_1 = VAR_0;
    return (-1);
   }

   break;
  }
  if (VAR_9 == 0)

   VAR_9 = 1;
  if (VAR_9 == (size_t)-2) {
   VAR_7 += VAR_5;
   VAR_5 = 0;
  } else {
   VAR_7 += VAR_9;
   VAR_4 += VAR_9;
   VAR_5 -= VAR_9;
   VAR_6->offset++;
  }
 }
 FUNC_4(VAR_6);



 return (VAR_7);
}
