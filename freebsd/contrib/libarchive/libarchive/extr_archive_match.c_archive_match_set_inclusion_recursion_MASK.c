
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_match {int recursive_include; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;

int
FUNC_1(struct archive *VAR_3, int VAR_4)
{
 struct archive_match *VAR_5;

 FUNC_0(VAR_3, VAR_0,
     VAR_2, "archive_match_set_inclusion_recursion");
 VAR_5 = (struct archive_match *)VAR_3;
 VAR_5->recursive_include = VAR_4;
 return (VAR_1);
}
