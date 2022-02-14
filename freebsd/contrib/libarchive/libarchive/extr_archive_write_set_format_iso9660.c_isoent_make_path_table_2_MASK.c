
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdd {int vdd_type; struct path_table* pathtbl; } ;
struct path_table {int cnt; struct isoent** sorted; struct isoent* first; } ;
struct isoent {int dir_number; struct isoent* ptnext; } ;
struct archive_write {int archive; } ;
typedef int __compar_fn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,char*) ;
 struct isoent** FUNC_1 (int) ;
 int FUNC_2 (struct isoent**,int,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct archive_write *VAR_5, struct vdd *VAR_6,
    int VAR_7, int *VAR_8)
{
 struct isoent *VAR_9;
 struct isoent **VAR_10;
 struct path_table *VAR_11;
 int VAR_12;

 VAR_11 = &VAR_6->pathtbl[VAR_7];
 if (VAR_11->cnt == 0) {
  VAR_11->sorted = ((void*)0);
  return (VAR_1);
 }
 VAR_10 = FUNC_1(VAR_11->cnt * sizeof(struct isoent *));
 if (VAR_10 == ((void*)0)) {
  FUNC_0(&VAR_5->archive, VAR_2,
      "Can't allocate memory");
  return (VAR_0);
 }
 VAR_11->sorted = VAR_10;
 for (VAR_9 = VAR_11->first; VAR_9 != ((void*)0); VAR_9 = VAR_9->ptnext)
  *VAR_10 ++ = VAR_9;
 VAR_10 = VAR_11->sorted;

 switch (VAR_6->vdd_type) {
 case 128:
 case 130:




  FUNC_2(VAR_10, VAR_11->cnt, sizeof(struct isoent *),
      VAR_3);

  break;
 case 129:




  FUNC_2(VAR_10, VAR_11->cnt, sizeof(struct isoent *),
      VAR_4);

  break;
 }
 for (VAR_12 = 0; VAR_12 < VAR_11->cnt; VAR_12++)
  VAR_10[VAR_12]->dir_number = (*VAR_8)++;

 return (VAR_1);
}
