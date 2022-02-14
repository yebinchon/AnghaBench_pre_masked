
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtree_writer {int buf; int ebuf; int cur_dirstr; } ;
struct archive_write {struct mtree_writer* format_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mtree_writer*) ;
 int FUNC_2 (struct mtree_writer*) ;
 int FUNC_3 (struct mtree_writer*) ;

__attribute__((used)) static int
FUNC_4(struct archive_write *VAR_1)
{
 struct mtree_writer *VAR_2= VAR_1->format_data;

 if (VAR_2 == ((void*)0))
  return (VAR_0);


 FUNC_3(VAR_2);
 FUNC_0(&VAR_2->cur_dirstr);
 FUNC_0(&VAR_2->ebuf);
 FUNC_0(&VAR_2->buf);
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);
 VAR_1->format_data = ((void*)0);
 return (VAR_0);
}
