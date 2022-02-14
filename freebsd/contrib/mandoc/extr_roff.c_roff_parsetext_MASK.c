
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff {TYPE_1__* man; } ;
struct buf {char* buf; int sz; } ;
typedef enum mandoc_esc { ____Placeholder_mandoc_esc } mandoc_esc ;
struct TYPE_2__ {int next; int * last; } ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (char**,char*,char*,char*) ;
 int FUNC_3 (char const**,int *,int *) ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 size_t FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(struct roff *VAR_9, struct buf *VAR_10, int VAR_11, int *VAR_12)
{
 size_t VAR_13;
 const char *VAR_14;
 char *VAR_15;
 int VAR_16;
 enum mandoc_esc VAR_17;



 if (VAR_7 == 1) {
  VAR_16 = FUNC_2(&VAR_15, "%s\n.%s", VAR_10->buf, VAR_8);
  FUNC_0(VAR_10->buf);
  VAR_10->buf = VAR_15;
  VAR_10->sz = VAR_16 + 1;
  *VAR_12 = 0;
  FUNC_0(VAR_8);
  VAR_7 = 0;
  return VAR_4;
 } else if (VAR_7 > 1)
  --VAR_7;

 if (VAR_6 != ((void*)0) && VAR_10->buf[VAR_11] != '\0') {
  if (VAR_5 < 1) {
   VAR_9->man->last = VAR_6;
   VAR_9->man->next = VAR_3;
   VAR_5 = 0;
   VAR_6 = ((void*)0);
  } else
   VAR_5--;
 }



 VAR_14 = VAR_15 = VAR_10->buf + VAR_11;

 while (*VAR_15 != '\0') {
  VAR_13 = FUNC_4(VAR_15, "-\\");
  VAR_15 += VAR_13;

  if (*VAR_15 == '\0')
   break;

  if (*VAR_15 == '\\') {

   VAR_15++;
   VAR_17 = FUNC_3((const char **)&VAR_15, ((void*)0), ((void*)0));
   if (VAR_17 == VAR_1)
    break;
   while (*VAR_15 == '-')
    VAR_15++;
   continue;
  } else if (VAR_15 == VAR_14) {
   VAR_15++;
   continue;
  }

  if (FUNC_1((unsigned char)VAR_15[-1]) &&
      FUNC_1((unsigned char)VAR_15[1]))
   *VAR_15 = VAR_0;
  VAR_15++;
 }
 return VAR_2;
}
