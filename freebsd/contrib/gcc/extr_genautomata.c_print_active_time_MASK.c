
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ticker_t ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int,int) ;

__attribute__((used)) static void
FUNC_2 (FILE *VAR_0, ticker_t VAR_1)
{
  int VAR_2;

  VAR_2 = FUNC_0 (VAR_1);
  FUNC_1 (VAR_0, "%d.%06d", VAR_2 / 1000000, VAR_2 % 1000000);
}
