
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar_hdr {char* ar_name; } ;
typedef int bfd ;


 size_t FUNC_0 (int *) ;
 char FUNC_1 (int *) ;
 int FUNC_2 (char*,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;
 void* FUNC_4 (char const*,char) ;

void
FUNC_5 (bfd *VAR_0, const char *VAR_1, char *VAR_2)
{
  struct ar_hdr *VAR_3 = (struct ar_hdr *) VAR_2;
  size_t VAR_4;
  const char *VAR_5 = FUNC_4 (VAR_1, '/');
  size_t VAR_6 = FUNC_0 (VAR_0);
  if (VAR_5 == ((void*)0))
    VAR_5 = VAR_1;
  else
    ++VAR_5;

  VAR_4 = FUNC_3 (VAR_5);

  if (VAR_4 <= VAR_6)
    FUNC_2 (VAR_3->ar_name, VAR_5, VAR_4);
  else
    {
      FUNC_2 (VAR_3->ar_name, VAR_5, VAR_6);
      if ((VAR_5[VAR_4 - 2] == '.') && (VAR_5[VAR_4 - 1] == 'o'))
 {
   VAR_3->ar_name[VAR_6 - 2] = '.';
   VAR_3->ar_name[VAR_6 - 1] = 'o';
 }
      VAR_4 = VAR_6;
    }

  if (VAR_4 < 16)
    (VAR_3->ar_name)[VAR_4] = FUNC_1 (VAR_0);
}
