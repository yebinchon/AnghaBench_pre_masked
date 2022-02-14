
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct match_list {int dummy; } ;
struct match {int pattern; } ;
struct archive_match {int setflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const*,size_t) ;
 struct match* FUNC_1 (int,int) ;
 int FUNC_2 (struct archive_match*) ;
 int FUNC_3 (struct match_list*,struct match*) ;
 size_t FUNC_4 (int const*) ;

__attribute__((used)) static int
FUNC_5(struct archive_match *VAR_2, struct match_list *VAR_3,
    const wchar_t *VAR_4)
{
 struct match *VAR_5;
 size_t VAR_6;

 VAR_5 = FUNC_1(1, sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return (FUNC_2(VAR_2));

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6 && VAR_4[VAR_6 - 1] == L'/')
  --VAR_6;
 FUNC_0(&(VAR_5->pattern), VAR_4, VAR_6);
 FUNC_3(VAR_3, VAR_5);
 VAR_2->setflag |= VAR_1;
 return (VAR_0);
}
