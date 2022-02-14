
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {size_t len; scalar_t__ val; } ;
typedef int FILE ;


 struct data FUNC_0 (struct data,size_t) ;
 int FUNC_1 (char*,...) ;
 struct data VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 size_t FUNC_4 (scalar_t__,int,size_t,int *) ;
 int FUNC_5 (int ) ;

struct data FUNC_6(FILE *VAR_2, size_t VAR_3)
{
 struct data VAR_4 = VAR_0;

 while (!FUNC_2(VAR_2) && (VAR_4.len < VAR_3)) {
  size_t VAR_5, VAR_6;

  if (VAR_3 == -1)
   VAR_5 = 4096;
  else
   VAR_5 = VAR_3 - VAR_4.len;

  VAR_4 = FUNC_0(VAR_4, VAR_5);
  VAR_6 = FUNC_4(VAR_4.val + VAR_4.len, 1, VAR_5, VAR_2);

  if (FUNC_3(VAR_2))
   FUNC_1("Error reading file into data: %s", FUNC_5(VAR_1));

  if (VAR_4.len + VAR_6 < VAR_4.len)
   FUNC_1("Overflow reading file into data\n");

  VAR_4.len += VAR_6;
 }

 return VAR_4;
}
