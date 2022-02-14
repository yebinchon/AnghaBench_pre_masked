
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar_hdr {int * ar_name; } ;
typedef int bfd ;


 int VAR_0 ;
 int FUNC_0 () ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*,size_t) ;
 char* FUNC_6 (int *,char const*) ;
 size_t FUNC_7 (char const*) ;

void
FUNC_8 (bfd *VAR_1, const char *VAR_2, char *VAR_3)
{





  struct ar_hdr *VAR_4 = (struct ar_hdr *) VAR_3;
  size_t VAR_5;
  const char *VAR_6;
  size_t VAR_7 = FUNC_1 (VAR_1);

  if ((FUNC_4 (VAR_1) & VAR_0) != 0)
    {
      FUNC_3 (VAR_1, VAR_2, VAR_3);
      return;
    }

  VAR_6 = FUNC_6 (VAR_1, VAR_2);
  if (VAR_6 == ((void*)0))
    {

      FUNC_0 ();
    }

  VAR_5 = FUNC_7 (VAR_6);

  if (VAR_5 <= VAR_7)
    FUNC_5 (VAR_4->ar_name, VAR_6, VAR_5);


  if (VAR_5 < VAR_7
      || (VAR_5 == VAR_7 && VAR_5 < sizeof VAR_4->ar_name))
    (VAR_4->ar_name)[VAR_5] = FUNC_2 (VAR_1);
}
