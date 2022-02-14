
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ iov_base; scalar_t__ iov_len; } ;
struct svc_cacherep {scalar_t__ c_type; int c_lru; int c_hash; TYPE_1__ c_replvec; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,struct svc_cacherep*) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(struct svc_cacherep *VAR_4)
{
 if (VAR_4->c_type == VAR_0 && VAR_4->c_replvec.iov_base) {
  VAR_1 -= VAR_4->c_replvec.iov_len;
  FUNC_2(VAR_4->c_replvec.iov_base);
 }
 if (!FUNC_1(&VAR_4->c_hash))
  FUNC_0(&VAR_4->c_hash);
 FUNC_4(&VAR_4->c_lru);
 --VAR_3;
 VAR_1 -= sizeof(*VAR_4);
 FUNC_3(VAR_2, VAR_4);
}
