
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (unsigned int,int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (char**,char*,size_t) ;
 int FUNC_4 (char*,char**,int ) ;
 unsigned int FUNC_5 (char*,int *,int ) ;
 int FUNC_6 (char*,int,char*,...) ;

__attribute__((used)) static ssize_t FUNC_7(struct file *VAR_9, char *VAR_10, size_t VAR_11)
{
 char *VAR_12 = VAR_10;
 char *VAR_13, *VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18;
 unsigned VAR_19;
 ssize_t VAR_20 = 0;
 char *VAR_21;

 if (VAR_11>0) {
  if (VAR_8)




   return -VAR_0;
  if (VAR_10[VAR_11-1] != '\n')
   return -VAR_1;
  VAR_10[VAR_11-1] = 0;

  VAR_13 = VAR_12;
  VAR_16 = FUNC_3(&VAR_12, VAR_13, VAR_11);
  if (VAR_16 <= 0) return -VAR_1;
  do {
   VAR_15 = *VAR_13;
   if (VAR_15 == '+' || VAR_15 == '-')
    VAR_17 = FUNC_4((VAR_13+1), &VAR_14, 0);
   else
    VAR_17 = FUNC_4(VAR_13, &VAR_14, 0);
   if (*VAR_14 == '.') {
    if (VAR_17 < 4)
     return -VAR_1;
    VAR_19 = FUNC_5(VAR_14+1, ((void*)0), 0);
    if (VAR_19 == 0)
     return -VAR_1;
    if (FUNC_0(VAR_19, VAR_15 == '-' ?
           VAR_3 : VAR_4) < 0)
     return -VAR_1;
    goto next;
   }
   switch(VAR_17) {
   case 2:
   case 3:
   case 4:
    FUNC_2(VAR_17, VAR_15 == '-' ? VAR_3 : VAR_4);
    break;
   default:
    return -VAR_1;
   }
  next:
   VAR_13 += VAR_16 + 1;
  } while ((VAR_16 = FUNC_3(&VAR_12, VAR_13, VAR_11)) > 0);



  FUNC_1();
 }


 VAR_16 = 0;
 VAR_21 = "";
 VAR_18 = VAR_7;
 for (VAR_17=2 ; VAR_17 <= 4 ; VAR_17++)
  if (FUNC_2(VAR_17, VAR_2)) {
   VAR_16 = FUNC_6(VAR_10, VAR_18, "%s%c%d", VAR_21,
           FUNC_2(VAR_17, VAR_6)?'+':'-',
           VAR_17);
   VAR_21 = " ";

   if (VAR_16 > VAR_18)
    break;
   VAR_18 -= VAR_16;
   VAR_10 += VAR_16;
   VAR_20 += VAR_16;
  }
 if (FUNC_2(4, VAR_2))
  for (VAR_19 = 1; VAR_19 <= VAR_5;
       VAR_19++) {
   VAR_16 = FUNC_6(VAR_10, VAR_18, " %c4.%u",
     (FUNC_2(4, VAR_6) &&
      FUNC_0(VAR_19, VAR_6)) ?
      '+' : '-',
     VAR_19);

   if (VAR_16 > VAR_18)
    break;
   VAR_18 -= VAR_16;
   VAR_10 += VAR_16;
   VAR_20 += VAR_16;
  }

 VAR_16 = FUNC_6(VAR_10, VAR_18, "\n");
 if (VAR_16 > VAR_18)
  return -VAR_1;
 return VAR_20 + VAR_16;
}
