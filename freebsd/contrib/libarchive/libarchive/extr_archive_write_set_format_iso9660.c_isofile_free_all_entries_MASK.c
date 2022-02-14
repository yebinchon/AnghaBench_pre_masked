
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isofile {struct isofile* allnext; } ;
struct TYPE_2__ {struct isofile* first; } ;
struct iso9660 {TYPE_1__ all_file_list; } ;


 int FUNC_0 (struct isofile*) ;

__attribute__((used)) static void
FUNC_1(struct iso9660 *VAR_0)
{
 struct isofile *VAR_1, *VAR_2;

 VAR_1 = VAR_0->all_file_list.first;
 while (VAR_1 != ((void*)0)) {
  VAR_2 = VAR_1->allnext;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
}
