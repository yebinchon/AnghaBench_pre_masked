
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_recent_mtinfo {int check_set; scalar_t__ hit_count; char* name; scalar_t__ seconds; } ;
struct xt_mtchk_param {struct xt_recent_mtinfo* matchinfo; } ;
struct recent_table {int refcnt; int list; int name; int * iphash; int lru_list; } ;
struct proc_dir_entry {void* gid; void* uid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (struct recent_table*) ;
 struct recent_table* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct proc_dir_entry* FUNC_7 (int ,int ,int ,int *,struct recent_table*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct recent_table* FUNC_8 (char*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,char*) ;
 scalar_t__ FUNC_13 (char*,scalar_t__) ;
 int VAR_17 ;

__attribute__((used)) static bool FUNC_14(const struct xt_mtchk_param *VAR_18)
{
 const struct xt_recent_mtinfo *VAR_19 = VAR_18->matchinfo;
 struct recent_table *VAR_20;



 unsigned VAR_21;
 bool VAR_22 = 0;

 if (FUNC_1(VAR_19->check_set &
       (VAR_4 | VAR_3 |
        VAR_1 | VAR_5)) != 1)
  return 0;
 if ((VAR_19->check_set & (VAR_4 | VAR_3)) &&
     (VAR_19->seconds || VAR_19->hit_count))
  return 0;
 if (VAR_19->hit_count > VAR_10)
  return 0;
 if (VAR_19->name[0] == '\0' ||
     FUNC_13(VAR_19->name, VAR_2) == VAR_2)
  return 0;

 FUNC_5(&VAR_14);
 VAR_20 = FUNC_8(VAR_19->name);
 if (VAR_20 != ((void*)0)) {
  VAR_20->refcnt++;
  VAR_22 = 1;
  goto out;
 }

 VAR_20 = FUNC_3(sizeof(*VAR_20) + sizeof(VAR_20->iphash[0]) * VAR_7,
      VAR_0);
 if (VAR_20 == ((void*)0))
  goto out;
 VAR_20->refcnt = 1;
 FUNC_12(VAR_20->name, VAR_19->name);
 FUNC_0(&VAR_20->lru_list);
 for (VAR_21 = 0; VAR_21 < VAR_7; VAR_21++)
  FUNC_0(&VAR_20->iphash[VAR_21]);
 FUNC_10(&VAR_12);
 FUNC_4(&VAR_20->list, &VAR_17);
 FUNC_11(&VAR_12);
 VAR_22 = 1;
out:
 FUNC_6(&VAR_14);
 return VAR_22;
}
