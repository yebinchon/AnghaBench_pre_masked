
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pax {int l_url_encoded_name; int sparse_map; int pax_header; } ;
struct archive_write {int * format_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pax*) ;
 int FUNC_2 (struct pax*) ;

__attribute__((used)) static int
FUNC_3(struct archive_write *VAR_1)
{
 struct pax *VAR_2;

 VAR_2 = (struct pax *)VAR_1->format_data;
 if (VAR_2 == ((void*)0))
  return (VAR_0);

 FUNC_0(&VAR_2->pax_header);
 FUNC_0(&VAR_2->sparse_map);
 FUNC_0(&VAR_2->l_url_encoded_name);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);
 VAR_1->format_data = ((void*)0);
 return (VAR_0);
}
