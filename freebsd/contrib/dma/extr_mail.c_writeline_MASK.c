
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {int mailf; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*,int,int,int ) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(struct queue *VAR_1, const char *VAR_2, ssize_t VAR_3)
{
 ssize_t VAR_4;

 while (VAR_3 > 0) {
  VAR_4 = VAR_3;
  if (VAR_3 > VAR_0) {
   VAR_4 = VAR_0 - 10;
  }

  if (FUNC_0(VAR_2, VAR_4, 1, VAR_1->mailf) != 1)
   return (-1);

  if (VAR_3 <= VAR_0)
   break;

  if (FUNC_0("\n", 1, 1, VAR_1->mailf) != 1)
   return (-1);

  VAR_2 += VAR_0 - 10;
  VAR_3 = FUNC_1(VAR_2);
 }
 return (0);
}
