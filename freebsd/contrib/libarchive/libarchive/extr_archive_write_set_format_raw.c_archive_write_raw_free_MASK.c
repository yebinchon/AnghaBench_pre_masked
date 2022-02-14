
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw {int dummy; } ;
struct archive_write {int * format_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct raw*) ;

__attribute__((used)) static int
FUNC_1(struct archive_write *VAR_1)
{
 struct raw *VAR_2;

 VAR_2 = (struct raw *)VAR_1->format_data;
 FUNC_0(VAR_2);
 VAR_1->format_data = ((void*)0);
 return (VAR_0);
}
