
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct match_list {int dummy; } ;
struct match {int pattern; } ;
struct archive_match {int setflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,void const*) ;
 int FUNC_1 (int *,void const*) ;
 struct match* FUNC_2 (int,int) ;
 int FUNC_3 (struct archive_match*) ;
 int FUNC_4 (struct match_list*,struct match*) ;

__attribute__((used)) static int
FUNC_5(struct archive_match *VAR_2, struct match_list *VAR_3,
    int VAR_4, const void *VAR_5)
{
 struct match *VAR_6;

 VAR_6 = FUNC_2(1, sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  return (FUNC_3(VAR_2));
 if (VAR_4)
  FUNC_0(&(VAR_6->pattern), VAR_5);
 else
  FUNC_1(&(VAR_6->pattern), VAR_5);
 FUNC_4(VAR_3, VAR_6);
 VAR_2->setflag |= VAR_1;
 return (VAR_0);
}
