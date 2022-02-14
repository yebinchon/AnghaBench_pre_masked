
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_lookup {int cl_rewind; int * cl_close; int * cl_num_entries; int * cl_lookup; int * cl_next; int cl_plainr; } ;


 int FUNC_0 (int *,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct _citrus_lookup *VAR_4, const char *VAR_5)
{
 int VAR_6;


 VAR_6 = FUNC_0(&VAR_4->cl_plainr, VAR_5);
 if (VAR_6)
  return (VAR_6);

 VAR_4->cl_rewind = 1;
 VAR_4->cl_next = &VAR_3;
 VAR_4->cl_lookup = &VAR_2;
 VAR_4->cl_num_entries = &VAR_1;
 VAR_4->cl_close = &VAR_0;

 return (0);
}
