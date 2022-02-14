
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mntopt {int m_inverse; int m_flag; scalar_t__ m_altloc; int * m_option; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*,int *,int) ;
 char* FUNC_7 (char*,char*) ;

void
FUNC_8(const char *VAR_1, const struct mntopt *VAR_2, int *VAR_3,
 int *VAR_4)
{
 const struct mntopt *VAR_5;
 int VAR_6, VAR_7;
 char *VAR_8, *VAR_9, *VAR_10;
 int *VAR_11;


 if ((VAR_9 = FUNC_4(VAR_1)) == ((void*)0))
  FUNC_0(1, ((void*)0));

 for (VAR_8 = VAR_9; (VAR_8 = FUNC_7(VAR_8, ",")) != ((void*)0); VAR_8 = ((void*)0)) {

  if (VAR_8[0] == 'n' && VAR_8[1] == 'o') {
   VAR_6 = 1;
   VAR_8 += 2;
  } else
   VAR_6 = 0;





  VAR_10 = FUNC_3(VAR_8, '=');
  if (VAR_10 != ((void*)0))
    *++VAR_10 = '\0';


  for (VAR_5 = VAR_2; VAR_5->m_option != ((void*)0); ++VAR_5) {
   VAR_7 = FUNC_5(VAR_5->m_option);
   if (FUNC_6(VAR_8, VAR_5->m_option, VAR_7) == 0)
    if (VAR_8[VAR_7] == '\0' || VAR_8[VAR_7] == '=')
     break;
  }


  if (VAR_5->m_option) {
   VAR_11 = VAR_5->m_altloc ? VAR_4 : VAR_3;
   if (VAR_6 == VAR_5->m_inverse)
    *VAR_11 |= VAR_5->m_flag;
   else
    *VAR_11 &= ~VAR_5->m_flag;
  } else if (!VAR_0) {
   FUNC_1(1, "-o %s: option not supported", VAR_8);
  }
 }

 FUNC_2(VAR_9);
}
