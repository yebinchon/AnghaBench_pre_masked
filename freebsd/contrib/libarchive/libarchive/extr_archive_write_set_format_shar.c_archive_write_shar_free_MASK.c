
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shar {int quoted_name; int work; struct shar* last_dir; int entry; } ;
struct archive_write {int * format_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct shar*) ;

__attribute__((used)) static int
FUNC_3(struct archive_write *VAR_1)
{
 struct shar *VAR_2;

 VAR_2 = (struct shar *)VAR_1->format_data;
 if (VAR_2 == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_2->entry);
 FUNC_2(VAR_2->last_dir);
 FUNC_1(&(VAR_2->work));
 FUNC_1(&(VAR_2->quoted_name));
 FUNC_2(VAR_2);
 VAR_1->format_data = ((void*)0);
 return (VAR_0);
}
