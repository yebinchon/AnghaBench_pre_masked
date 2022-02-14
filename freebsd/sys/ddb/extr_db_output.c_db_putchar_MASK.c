
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbputchar_arg {char* da_pbufr; char* da_pnext; int da_remain; int da_nbufr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, void *VAR_1)
{
 struct dbputchar_arg *VAR_2 = VAR_1;

 if (VAR_2->da_pbufr == ((void*)0)) {


  FUNC_0(VAR_0);
 } else {

  *VAR_2->da_pnext++ = VAR_0;
  VAR_2->da_remain--;


  *VAR_2->da_pnext = '\0';


  if (VAR_2->da_remain < 2 || VAR_0 == '\n') {
   FUNC_1(VAR_2->da_pbufr);
   VAR_2->da_pnext = VAR_2->da_pbufr;
   VAR_2->da_remain = VAR_2->da_nbufr;
   *VAR_2->da_pnext = '\0';
  }
 }
}
