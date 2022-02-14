
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _region {int dummy; } ;
struct _citrus_lookup {int cl_rewind; int * cl_close; int * cl_num_entries; int * cl_next; int * cl_lookup; scalar_t__ cl_dbidx; int cl_db; int cl_dbnum; struct _region cl_dbfile; } ;
typedef int path ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct _region*,int ,int ,int *) ;
 int FUNC_2 (struct _region*,char*) ;
 int FUNC_3 (struct _region*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*,int,char*,char const*) ;

__attribute__((used)) static int
FUNC_5(struct _citrus_lookup *VAR_7, const char *VAR_8)
{
 struct _region VAR_9;
 char VAR_10[VAR_0];
 int VAR_11;

 FUNC_4(VAR_10, sizeof(VAR_10), "%s.db", VAR_8);
 VAR_11 = FUNC_2(&VAR_9, VAR_10);
 if (VAR_11)
  return (VAR_11);

 VAR_11 = FUNC_1(&VAR_7->cl_db, &VAR_9, VAR_1,
     VAR_2, ((void*)0));
 if (VAR_11) {
  FUNC_3(&VAR_9);
  return (VAR_11);
 }

 VAR_7->cl_dbfile = VAR_9;
 VAR_7->cl_dbnum = FUNC_0(VAR_7->cl_db);
 VAR_7->cl_dbidx = 0;
 VAR_7->cl_rewind = 1;
 VAR_7->cl_lookup = &VAR_5;
 VAR_7->cl_next = &VAR_6;
 VAR_7->cl_num_entries = &VAR_4;
 VAR_7->cl_close = &VAR_3;

 return (0);
}
