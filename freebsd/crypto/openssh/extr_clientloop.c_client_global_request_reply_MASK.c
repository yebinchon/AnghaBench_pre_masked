
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ssh {int dummy; } ;
struct global_confirm {scalar_t__ ref_count; int ctx; int (* cb ) (struct ssh*,int,int ,int ) ;} ;


 struct global_confirm* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct global_confirm*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct global_confirm*,int) ;
 int FUNC_3 (struct global_confirm*) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ssh*,int,int ,int ) ;

__attribute__((used)) static int
FUNC_6(int VAR_2, u_int32_t VAR_3, struct ssh *VAR_4)
{
 struct global_confirm *VAR_5;

 if ((VAR_5 = FUNC_0(&VAR_1)) == ((void*)0))
  return 0;
 if (VAR_5->cb != ((void*)0))
  VAR_5->cb(VAR_4, VAR_2, VAR_3, VAR_5->ctx);
 if (--VAR_5->ref_count <= 0) {
  FUNC_1(&VAR_1, VAR_5, VAR_0);
  FUNC_2(VAR_5, sizeof(*VAR_5));
  FUNC_3(VAR_5);
 }

 FUNC_4(0);
 return 0;
}
