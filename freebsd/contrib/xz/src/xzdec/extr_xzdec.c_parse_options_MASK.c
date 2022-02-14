
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_0; char member_3; int * member_2; int const member_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char**,char const*,struct option const*,int *) ;
 int FUNC_2 () ;

 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(int VAR_2, char **VAR_3)
{
 static const char VAR_4[] = "cdkM:hqQV";
 static const struct option VAR_5[] = {
  { "stdout", 128, ((void*)0), 'c' },
  { "to-stdout", 128, ((void*)0), 'c' },
  { "decompress", 128, ((void*)0), 'd' },
  { "uncompress", 128, ((void*)0), 'd' },
  { "keep", 128, ((void*)0), 'k' },
  { "quiet", 128, ((void*)0), 'q' },
  { "no-warn", 128, ((void*)0), 'Q' },
  { "help", 128, ((void*)0), 'h' },
  { "version", 128, ((void*)0), 'V' },
  { ((void*)0), 0, ((void*)0), 0 }
 };

 int VAR_6;

 while ((VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, ((void*)0)))
   != -1) {
  switch (VAR_6) {
  case 'c':
  case 'd':
  case 'k':
  case 'Q':
   break;

  case 'q':
   if (VAR_1 > 0)
    --VAR_1;

   break;

  case 'h':
   FUNC_2();

  case 'V':
   FUNC_3();

  default:
   FUNC_0(VAR_0);
  }
 }

 return;
}
