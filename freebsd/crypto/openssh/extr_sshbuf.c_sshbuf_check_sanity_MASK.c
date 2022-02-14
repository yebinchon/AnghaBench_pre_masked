
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshbuf {int refcount; scalar_t__ max_size; scalar_t__ alloc; scalar_t__ size; scalar_t__ off; int * cd; int * d; int readonly; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static inline int
FUNC_5(const struct sshbuf *VAR_5)
{
 FUNC_1("sanity");
 if (FUNC_2(VAR_5 == ((void*)0) ||
     (!VAR_5->readonly && VAR_5->d != VAR_5->cd) ||
     VAR_5->refcount < 1 || VAR_5->refcount > VAR_2 ||
     VAR_5->cd == ((void*)0) ||
     VAR_5->max_size > VAR_3 ||
     VAR_5->alloc > VAR_5->max_size ||
     VAR_5->size > VAR_5->alloc ||
     VAR_5->off > VAR_5->size)) {

  FUNC_0(("SSH_ERR_INTERNAL_ERROR"));
  FUNC_4(VAR_0, VAR_1);
  FUNC_3(VAR_0);
  return VAR_4;
 }
 return 0;
}
