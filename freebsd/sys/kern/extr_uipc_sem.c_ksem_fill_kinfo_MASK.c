
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ksem {int ks_mode; char* ks_path; int ks_value; } ;
struct TYPE_6__ {int kf_sem_mode; int kf_sem_value; } ;
struct TYPE_7__ {TYPE_1__ kf_sem; } ;
struct kinfo_file {int kf_path; TYPE_2__ kf_un; int kf_type; } ;
struct filedesc {int dummy; } ;
struct file {struct ksem* f_data; } ;
struct TYPE_10__ {TYPE_4__* td_ucred; } ;
struct TYPE_9__ {TYPE_3__* cr_prison; } ;
struct TYPE_8__ {char* pr_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char const*,int) ;
 size_t FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char const*,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct file *VAR_5, struct kinfo_file *VAR_6, struct filedesc *VAR_7)
{
 const char *VAR_8, *VAR_9;
 struct ksem *VAR_10;
 size_t VAR_11;

 VAR_6->kf_type = VAR_0;
 VAR_10 = VAR_5->f_data;
 FUNC_0(&VAR_4);
 VAR_6->kf_un.kf_sem.kf_sem_value = VAR_10->ks_value;
 VAR_6->kf_un.kf_sem.kf_sem_mode = VAR_1 | VAR_10->ks_mode;
 FUNC_1(&VAR_4);
 if (VAR_10->ks_path != ((void*)0)) {
  FUNC_6(&VAR_3);
  if (VAR_10->ks_path != ((void*)0)) {
   VAR_8 = VAR_10->ks_path;
   VAR_9 = VAR_2->td_ucred->cr_prison->pr_path;
   if (FUNC_2(VAR_9, "/") != 0) {

    VAR_11 = FUNC_4(VAR_9);
    if (FUNC_5(VAR_8, VAR_9, VAR_11) == 0 &&
        VAR_8[VAR_11] == '/')
     VAR_8 += VAR_11;
   }
   FUNC_3(VAR_6->kf_path, VAR_8, sizeof(VAR_6->kf_path));
  }
  FUNC_7(&VAR_3);
 }
 return (0);
}
