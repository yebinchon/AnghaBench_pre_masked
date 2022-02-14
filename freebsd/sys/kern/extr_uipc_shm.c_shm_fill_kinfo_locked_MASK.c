
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct shmfd {int shm_mode; char* shm_path; int shm_size; } ;
struct TYPE_6__ {int kf_file_mode; int kf_file_size; } ;
struct TYPE_7__ {TYPE_1__ kf_file; } ;
struct kinfo_file {int kf_path; TYPE_2__ kf_un; int kf_type; } ;
struct TYPE_10__ {TYPE_4__* td_ucred; } ;
struct TYPE_9__ {TYPE_3__* cr_prison; } ;
struct TYPE_8__ {char* pr_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ,char const*,int) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,size_t) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct shmfd *VAR_6, struct kinfo_file *VAR_7, bool VAR_8)
{
 const char *VAR_9, *VAR_10;
 size_t VAR_11;
 bool VAR_12;

 FUNC_4(&VAR_5, VAR_2);
 VAR_7->kf_type = VAR_1;
 VAR_7->kf_un.kf_file.kf_file_mode = VAR_3 | VAR_6->shm_mode;
 VAR_7->kf_un.kf_file.kf_file_size = VAR_6->shm_size;
 if (VAR_6->shm_path != ((void*)0)) {
  if (VAR_6->shm_path != ((void*)0)) {
   VAR_9 = VAR_6->shm_path;
   VAR_10 = VAR_4->td_ucred->cr_prison->pr_path;
   if (FUNC_0(VAR_10, "/") != 0) {

    VAR_11 = FUNC_2(VAR_10);
    VAR_12 = FUNC_3(VAR_9, VAR_10, VAR_11)
        == 0 && VAR_9[VAR_11] == '/';
    if (VAR_8 && !VAR_12)
     return (VAR_0);
    if (VAR_12)
     VAR_9 += VAR_11;
   }
   FUNC_1(VAR_7->kf_path, VAR_9, sizeof(VAR_7->kf_path));
  }
 }
 return (0);
}
