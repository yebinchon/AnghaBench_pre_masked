
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zip {int dummy; } ;
struct archive_read {TYPE_1__* format; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 char* FUNC_0 (struct archive_read*,size_t,int *) ;
 scalar_t__ FUNC_1 (struct archive_read*,int,int ) ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (struct zip*,char const*,scalar_t__) ;
 int FUNC_4 (struct archive_read*,struct zip*,char const*) ;
 scalar_t__ FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct archive_read *VAR_1, int VAR_2)
{
 struct zip *VAR_3 = (struct zip *)VAR_1->format->data;
 int64_t VAR_4, VAR_5;
 const char *VAR_6;
 int VAR_7, VAR_8;



 if (VAR_2 > 32)
  return (-1);

 VAR_4 = FUNC_1(VAR_1, 0, VAR_0);
 if (VAR_4 <= 0)
  return 0;



 VAR_8 = (int)FUNC_5(1024 * 16, VAR_4);
 VAR_5 = FUNC_1(VAR_1, -VAR_8, VAR_0);
 if (VAR_5 < 0)
  return 0;
 if ((VAR_6 = FUNC_0(VAR_1, (size_t)VAR_8, ((void*)0))) == ((void*)0))
  return 0;




 for (VAR_7 = VAR_8 - 22; VAR_7 > 0;) {
  switch (VAR_6[VAR_7]) {
  case 'P':
   if (FUNC_2(VAR_6 + VAR_7, "PK\005\006", 4) == 0) {
    int VAR_9 = FUNC_3(VAR_3, VAR_6 + VAR_7,
        VAR_5 + VAR_7);


    if (VAR_7 >= 20 && FUNC_2(VAR_6 + VAR_7 - 20, "PK\006\007", 4) == 0) {
     int VAR_10 = FUNC_4(VAR_1, VAR_3, VAR_6 + VAR_7 - 20);
     if (VAR_10 > VAR_9)
      VAR_9 = VAR_10;
    }
    return (VAR_9);
   }
   VAR_7 -= 4;
   break;
  case 'K': VAR_7 -= 1; break;
  case 005: VAR_7 -= 2; break;
  case 006: VAR_7 -= 3; break;
  default: VAR_7 -= 4; break;
  }
 }
 return 0;
}
