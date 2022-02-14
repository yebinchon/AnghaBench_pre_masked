
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int * format_data; } ;
struct ar_w {scalar_t__ has_strtab; struct ar_w* strtab; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar_w*) ;

__attribute__((used)) static int
FUNC_1(struct archive_write *VAR_1)
{
 struct ar_w *VAR_2;

 VAR_2 = (struct ar_w *)VAR_1->format_data;

 if (VAR_2 == ((void*)0))
  return (VAR_0);

 if (VAR_2->has_strtab > 0) {
  FUNC_0(VAR_2->strtab);
  VAR_2->strtab = ((void*)0);
 }

 FUNC_0(VAR_2);
 VAR_1->format_data = ((void*)0);
 return (VAR_0);
}
