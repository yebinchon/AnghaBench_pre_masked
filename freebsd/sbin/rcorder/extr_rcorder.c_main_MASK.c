
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (char*) ;

int
FUNC_8(int VAR_9, char *VAR_10[])
{
 int VAR_11;

 while ((VAR_11 = FUNC_4(VAR_9, VAR_10, "dk:s:")) != -1)
  switch (VAR_11) {
  case 'd':



   FUNC_7("debugging not compiled in, -d ignored");

   break;
  case 'k':
   FUNC_6(&VAR_4, VAR_5, 0);
   break;
  case 's':
   FUNC_6(&VAR_7, VAR_5, 0);
   break;
  default:

   break;
  }
 VAR_9 -= VAR_6;
 VAR_10 += VAR_6;

 VAR_2 = VAR_9;
 VAR_3 = VAR_10;

 FUNC_0((VAR_8, "parse_args\n"));
 FUNC_5();
 FUNC_0((VAR_8, "initialize\n"));
 FUNC_1();
 FUNC_0((VAR_8, "crunch_all_files\n"));
 FUNC_3();
 FUNC_0((VAR_8, "generate_ordering\n"));

 FUNC_2(VAR_1);
}
